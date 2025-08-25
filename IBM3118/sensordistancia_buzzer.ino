const int pinoBuzzer = 2;
const int pinoTrig = 9;
const int pinoEcho = 4;

long duracao;
float distancia;

void setup() {
  Serial.begin(9600);
  pinMode(pinoTrig, OUTPUT);
  pinMode(pinoEcho, INPUT);
}

void loop() {
  digitalWrite(pinoTrig, LOW);
  delayMicroseconds(2);

  digitalWrite(pinoTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinoTrig, LOW);

  duracao = pulseIn(pinoEcho, HIGH);
  distancia = (duracao * 0.0343) / 2.0;

  Serial.print("Distância: ");
  Serial.print(distancia);
  Serial.println(" cm");

  if (distancia <= 10) {
    tone(pinoBuzzer, 1000, 1000);
  } else if (distancia <= 20) {
    tone(pinoBuzzer, 500, 1000);
  } else if (distancia <= 30) {
    tone(pinoBuzzer, 5000, 1000);
  }

  delay(500);
}
