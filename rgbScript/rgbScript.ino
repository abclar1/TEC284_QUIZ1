//set some constant integers to store the pin numbers on the Uno
const int redButton = 7, greenButton = 6, blueButton = 5;
const int redLight = 12, greenLight = 11, blueLight = 10;
int redButtonState = 0, greenButtonState = 0, blueButtonState = 0;

void setup() {
  Serial.begin(9600); //silly rabbit, serial.begin is for kids

  //set the buttons as inputs from the uno
  pinMode(redButton, INPUT_PULLUP);
  pinMode(blueButton, INPUT_PULLUP);
  pinMode(greenButton, INPUT_PULLUP);

  //set the led as outputs
  pinMode(redLight, OUTPUT);
  pinMode(blueLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
}

void loop() {
  //call the methods
  setStates();
  colorControl();
}

void setStates(){
  //set the button state to the global variables
  redButtonState = digitalRead(redButton);
  greenButtonState = digitalRead(greenButton);
  blueButtonState = digitalRead(blueButton); 
}

void colorControl(){
  //if the button is pressed, turn the light the respective color, otherwise, turn it off
  if (redButtonState == LOW) {
    digitalWrite(redLight, HIGH);
  } else {
    digitalWrite(redLight, LOW);
  }

  if (greenButtonState == LOW) {
    digitalWrite(greenLight, HIGH);
  } else {
    digitalWrite(greenLight, LOW);
  }

  if (blueButtonState == LOW) {
    digitalWrite(blueLight, HIGH);
  } else {
    digitalWrite(blueLight, LOW);
  }
}
