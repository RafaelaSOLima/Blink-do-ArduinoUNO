
int ledI = LED_BUILTIN; 
int ledE = 13;

void setup() {

  pinMode(ledI, OUTPUT);
};

void loop() {
  //led externo
  digitalWrite(ledE, HIGH);   
  delay(100);               
  digitalWrite(ledE, LOW);    
  delay(100); 
  //led interno
  digitalWrite(ledI, HIGH);   
  delay(50);               
  digitalWrite(ledI, LOW);    
  delay(50);       
};



