# Sistema de Alarme com Arduino para Loja de Comerciante Local

## Descrição

Este projeto foi desenvolvido com o objetivo de adicionar uma camada de segurança à loja de um comerciante local. Utilizando um Arduino, três LEDs, um buzzer e um sensor PIR (Passive Infrared), criamos um sistema de alarme simples que detecta movimentações no perímetro da loja. Quando o sensor PIR detecta movimento, o buzzer e os LEDs são acionados, simulando um sistema de alarme que poderia ser implementado para aumentar a segurança do local.

## Componentes Utilizados

- 1 x Arduino (Uno, Mega, etc.)
- 3 x LEDs (preferencialmente de cores diferentes para maior visibilidade)
- 1 x Buzzer
- 1 x Sensor PIR (Passive Infrared)
- Resistores (adequados para os LEDs)
- Protoboard e Jumpers

## Esquema Elétrico

O esquema elétrico do projeto pode ser encontrado na pasta `/Diagrama elétrico`.

## Montagem

1. Conecte os LEDs aos pinos digitais do Arduino com resistores apropriados.
2. Conecte o buzzer a um dos pinos digitais do Arduino.
3. Conecte o sensor PIR a um pino digital do Arduino e à alimentação (5V e GND).
4. Certifique-se de que todas as conexões estão firmes e corretas.

## Código

O código fonte para o Arduino está localizado na pasta `/Firmware`. Você pode carregar o arquivo `codigoFinal.ino` para o seu Arduino utilizando a IDE do Arduino.

### Código Exemplo

```cpp
const int ledPin1 = 2;
const int ledPin2 = 3;
const int ledPin3 = 4;
const int buzzerPin = 5;
const int pirPin = 6;
int pirState = LOW;
int val = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(pirPin);
  if (val == HIGH) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(buzzerPin, HIGH);
    if (pirState == LOW) {
      Serial.println("Motion detected!");
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(buzzerPin, LOW);
    if (pirState == HIGH) {
      Serial.println("Motion ended!");
      pirState = LOW;
    }
  }
}
```

Como Usar
- Carregue o código no Arduino utilizando a IDE do Arduino.
- Monte o circuito conforme o esquema elétrico.
- Conecte o Arduino a uma fonte de energia.
- Coloque o sensor PIR em um local estratégico onde possa detectar movimento na área desejada.
- Quando o sensor PIR detectar movimento, os LEDs e o buzzer serão acionados, simulando um sistema de alarme.

Contribuição
Contribuições são bem-vindas! 
Se você tiver sugestões, melhorias ou quiser relatar problemas, por favor, abra uma issue ou envie um pull request.
