/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial
/* Fill in information from Blynk Device Info here */
//#define BLYNK_TEMPLATE_ID "TMPxxxxxx"
//#define BLYNK_TEMPLATE_NAME "Device"
//#define BLYNK_AUTH_TOKEN "YourAuthToken"
#define BLYNK_TEMPLATE_ID "TMPL3p6HfzU2r"
#define BLYNK_TEMPLATE_NAME "Electric Bulb"
#define BLYNK_AUTH_TOKEN "G8a56L7wSDXIbN9xFdlOjDNJElwW8VYQ"
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Give WiFi ID";
char pass[] = "Give your password";
void setup()
{
// Debug console
Serial.begin(9600);
Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}
void loop()
{
Blynk.run();
}