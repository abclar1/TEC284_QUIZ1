const int redButton = 7, yellowButton = 6, greenButton = 5;

void setup() {
  Serial.begin(9600);
  pinMode(redButton, INPUT_PULLUP);
  pinMode(greenButton, INPUT_PULLUP);
  pinMode(yellowButton, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

}
