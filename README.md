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

O esquema elétrico do projeto pode ser encontrado na pasta [/Diagrama elétrico](https://github.com/pedroriqueef/Sensor-PIR---Arduino-Project/tree/e2974885758f560c0f41d3c95e4e468e8b832f92/Diagrama%20el%C3%A9trico).

## Montagem

1. Conecte os LEDs aos pinos digitais do Arduino com resistores apropriados.
2. Conecte o buzzer a um dos pinos digitais do Arduino.
3. Conecte o sensor PIR a um pino digital do Arduino e à alimentação (5V e GND).
4. Certifique-se de que todas as conexões estão firmes e corretas.

## Código

O código fonte para o Arduino está localizado na pasta [/Firmware](https://github.com/pedroriqueef/Sensor-PIR---Arduino-Project/tree/5cbd04609671c0e5f808a2f2122a037b217a4561/Firmware). Você pode carregar o arquivo [codigoFinal.ino](https://github.com/pedroriqueef/Sensor-PIR---Arduino-Project/blob/5cbd04609671c0e5f808a2f2122a037b217a4561/Firmware/codigoFinal.ino) para o seu Arduino utilizando a IDE do Arduino.

Como Usar
- Carregue o código no Arduino utilizando a IDE do Arduino.
- Monte o circuito conforme o esquema elétrico.
- Conecte o Arduino a uma fonte de energia.
- Coloque o sensor PIR em um local estratégico onde possa detectar movimento na área desejada.
- Quando o sensor PIR detectar movimento, os LEDs e o buzzer serão acionados, simulando um sistema de alarme.

Contribuição
Contribuições são bem-vindas! 
Se você tiver sugestões, melhorias ou quiser relatar problemas, por favor, abra uma issue ou envie um pull request.
