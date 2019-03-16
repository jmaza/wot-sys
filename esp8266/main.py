import networkimport socketimport machinefrom machine import ADCimport urequestsimport ujsonimport utime# setup network hereWIFI_SSID = b"TP-Link_5442"WIFI_PASSWORD = "46484765"TD_DIRECTORY_ADDRESS = "http://192.168.0.100:8080"LISTENING_PORT = 80def get_td(ip_address):    td = {            'id': 'light:sensor:{}'.format(ip_address),            'name': 'light_sensor',            'description': 'sensor that measures the intensity of light',            'properties': {                'intensity': {                    "type": "number",                    "forms": [{                        "href": "http://{}/properties/intensity".format(ip_address),                        "mediaType": "application/json"                    }],                    "minimum": 0,                    "maximum": 1000                }            }    }    return tddef connect_wifi():    # Disable WIFI AP    ap = network.WLAN(network.AP_IF)    ap.active(False)    # Connect to WLAN    wifi = network.WLAN(network.STA_IF)    wifi.active(True)    print("connecting to our wifi...")    while not wifi.isconnected():        try:            wifi.connect(WIFI_SSID, WIFI_PASSWORD)            utime.sleep(5)        except Exception as e:            print("error while trying to connect to wifi: {}".format(e))    print("connected! Info:", wifi.ifconfig())    # Return the wifi object    return wifidef submit_td(ip_addr):    td = get_td(ip_addr)    print("Uploading TD to directory ...")    tries = 0    while tries < 6:        try:            tries += 1            r = urequests.post("{}/td".format(TD_DIRECTORY_ADDRESS), json=td)            r.close()            print ("Got response: ", r.status_code)            if 200 <= r.status_code <= 299:                print('TD uploaded!')                return        except Exception as e:            print(e)        if tries < 6:            utime.sleep(20)    print("Skipping TD upload ...")def run_server():    # Activate debug LED    led = machine.Pin(16, machine.Pin.OUT)    led.off()  # led.off() activates the LED, led.on() disables it        # Connect to WiFi    wifi = connect_wifi()    led.on()    # Setup ADC    adc = ADC(0)    # Submit TD to directory    submit_td(wifi.ifconfig()[0])    # Setup listening server    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)    s.bind(('', LISTENING_PORT))    s.listen(5)    print("Listening on port {} ...".format(LISTENING_PORT))    led.off()  # Activate LED    while True:        try:            conn, addr = s.accept()            print("Connection with {} established".format(addr))            request = conn.recv(1024)            request_part = str(request).split(' ')            if request_part[1] == "/properties/intensity":                val = adc.read()  # between 0 - 1000                payload = {"intensity": val}                serialized = ujson.dumps(payload)                conn.sendall(serialized)            conn.close()            ## Blink LED after each request            led.on()            utime.sleep_ms(30)            led.off()        except KeyboardInterrupt:            s.close()            break        except Exception as e:            print(e)            s.close()            break    led.on()  # Disactivate LEDrun_server()