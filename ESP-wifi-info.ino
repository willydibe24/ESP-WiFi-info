#ifdef ESP32
    #include <WiFi.h>
#else
    #include <ESP8266WiFi.h>
#endif



#define ssid ""
#define password ""


void setup ()
{
    Serial.begin(115200);
    WiFi.begin(ssid, password);

    delay(1000);

    Serial.print("\n\n\n\n\n");
    Serial.println("WIFI info:");

    Serial.print("- MAC Address: ");
    Serial.println(WiFi.macAddress());
    
    Serial.print("- IP Address: ");
    Serial.println(WiFi.localIP());

    Serial.print("- Network: ");
    Serial.println(WiFi.SSID());

    Serial.print("- Connected: ");
    Serial.println(WiFi.isConnected());
    
    Serial.print("- Mode: ");
    Serial.println(WiFi.getMode());

    Serial.print("- Available Networks: ");
    Serial.print(WiFi.scanNetworks());
}



void loop ()
{

}