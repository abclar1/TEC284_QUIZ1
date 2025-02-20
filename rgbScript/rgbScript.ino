const int redButton = 7, greenButton = 6, blueButton = 5;
int redButtonState = 0, greenButtonState = 0, blueButtonState = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(redButton, INPUT_PULLUP);
  pinMode(blueButton, INPUT_PULLUP);
  pinMode(greenButton, INPUT_PULLUP);

  pinMode(redButton, OUTPUT);
  pinMode(blueButton, OUTPUT);
  pinMode(greenButton, OUTPUT);
}

void loop() {
  redButtonState = digitalRead(2);
  blueButtonState = digitalRead(2);
  greenButtonState = digitalRead(2);
  flashRed();
}

void flashRed(){
  digitalWrite(redButton, HIGH);
}