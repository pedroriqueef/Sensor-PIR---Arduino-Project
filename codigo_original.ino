const int PIR = 3;     // pino sinal sensor de presença
const int buzzer = 4;
const int led =  8;      

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop() {
  // leitura do sensor
  int leitura = digitalRead(PIR);
  Serial.println(leitura);
  delay(100); // delay 100ms para estabilizar sinal de leitura
  
  // verifica se leitura está em nivel alto
  if (leitura == HIGH) {
    digitalWrite(led, HIGH);
    tone(buzzer, 1200, 500);   
    delay(100);
    noTone(buzzer);
    delay(100);
  // Desligando o buzzer.  
  } else {
    digitalWrite(led, LOW);
    noTone(buzzer);
  }
}
