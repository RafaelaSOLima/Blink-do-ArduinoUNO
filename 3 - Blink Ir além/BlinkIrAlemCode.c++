const int ledPins[] = { 3, 4, 5, 6, 7};
const int buttonPin = 2; 
int ledCount = 5; 
int currentPattern = 0; 
bool lastButtonState = LOW; 

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT_PULLUP); 
}

void loop() {
  bool buttonState = digitalRead(buttonPin);
  
  
  if (buttonState == LOW && lastButtonState == HIGH) {
    currentPattern = (currentPattern + 1) % 2; 
    delay(200); 
  }
  lastButtonState = buttonState;

  
  switch (currentPattern) {
    case 0:
      blinkPattern1();
      break;
    case 1:
      blinkPattern2();
      break;
    
  }
}

void blinkPattern1() {
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}

void blinkPattern2() {
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH); 
  }
  delay(100);
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], LOW); 
  }
  delay(100);  
}


