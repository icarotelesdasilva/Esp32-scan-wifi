void setup() {

Serial.begin(115200);
Serial.printf("feito por icr\n");
WiFi.mode(WIFI_STA);
WiFi.disconnect();
int n = WiFi.scanNetworks();
 
Serial.printf("scan feito: %d\n", n);

}
