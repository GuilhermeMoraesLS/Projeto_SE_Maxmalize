const int led = 13;  

// Frase : SOS

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
 
  digitalWrite(led, HIGH); delay(200); digitalWrite(led, LOW); delay(200);
  digitalWrite(led, HIGH); delay(200); digitalWrite(led, LOW); delay(200);
  digitalWrite(led, HIGH); delay(200); digitalWrite(led, LOW); delay(200);

  delay(300); // pausa entre letras

  // --- O 
  digitalWrite(led, HIGH); delay(600); digitalWrite(led, LOW); delay(200);
  digitalWrite(led, HIGH); delay(600); digitalWrite(led, LOW); delay(200);
  digitalWrite(led, HIGH); delay(600); digitalWrite(led, LOW); delay(200);

  delay(300); 

  // --- S  
  digitalWrite(led, HIGH); delay(200); digitalWrite(led, LOW); delay(200);
  digitalWrite(led, HIGH); delay(200); digitalWrite(led, LOW); delay(200);
  digitalWrite(led, HIGH); delay(200); digitalWrite(led, LOW); delay(200);

  delay(1000); // pausa entre repetições da palavra SOS
}
