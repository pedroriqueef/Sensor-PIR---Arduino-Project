const int PIR = 3;     // pino sinal sensor de presença
const int buzzer = 4;
const int led1 = 8;
const int led2 = 5;
const int led3 = 6;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
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
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    
    // Som de alarme alternando frequências
    for (int i = 0; i < 10; i++) { // Ajuste o número de iterações conforme necessário
      tone(buzzer, 1000); // Frequência de 1000 Hz
      delay(500); // 500 ms
      tone(buzzer, 500); // Frequência de 500 Hz
      delay(500); // 500 ms
    }
    
    // Parar o som
    noTone(buzzer);
  // Desligando os LEDs e o buzzer  
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    noTone(buzzer);
  }
}
