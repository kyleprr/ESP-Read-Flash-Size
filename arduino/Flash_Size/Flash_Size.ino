void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println();
  Serial.printf("The Flash Size for this module is [%d] bytes", ESP.getFlashChipRealSize());
}

void loop() {
  // put your main code here, to run repeatedly:

}
