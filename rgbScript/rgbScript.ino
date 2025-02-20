const int redLight = 7, yellowLight = 6, greenLight = 5;

void setup() {
  Serial.begin(9600);
  pinMode(redLight, OUTPUT_PULLUP);
  pinMode(greenLight, OUTPUT_PULLUP);
  pinMode(yellowLight, OUTPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

}
