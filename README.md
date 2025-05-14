## Sensor de Gás

# 🔥 Sensor de Gás com Alerta Sonoro e Visual

Este projeto utiliza um **sensor de gás** conectado a um **Arduino Uno**, com **display LCD**, **LED** e **buzzer**, para detectar e alertar sobre níveis elevados de gás no ambiente. 

## 🚀 Visão Geral

O sistema lê os dados do sensor analógico e exibe o nível atual de gás em um **display LCD 16x2**. Quando o valor ultrapassa um limite definido, um **LED vermelho acende** e um **buzzer emite um som de alerta**, indicando presença perigosa de gás.

## 🖼️ Montagem do Projeto

![Montagem do Circuito](imagem-da-montagem.png)

## 🎥 Funcionamento

Veja o projeto em ação:

![Funcionando](funcionamento.gif)

## 🧰 Componentes Utilizados

- Arduino Uno
- Sensor de Gás (ex: MQ-2)
- Display LCD 16x2 (com conexão paralela)
- LED (vermelho)
- Buzzer (ativo ou passivo)
- Resistores
- Jumpers
- Protoboard
- Potenciômetro (250kΩ) – para ajuste de contraste do LCD

## ⚙️ Funcionamento

- O sensor envia valores analógicos para o Arduino.
- O valor é exibido em tempo real no display.
- Se o nível de gás for superior a `500` (limite ajustável), o sistema emite um **alerta visual (LED)** e **sonoro (buzzer)**.

## 🖥️ Código

O código está no arquivo `sensor_gas.ino`. Principais pontos:

- Utiliza a biblioteca `LiquidCrystal` para controlar o display.
- Define um limite de gás (`gasLimite = 500`).
- Realiza a leitura do sensor na porta `A0`.
- Aciona o LED na porta `7` e o buzzer na `6` quando necessário.

## 📟 Exemplo de Saída no LCD

```
Nivel de Gas:
432         // valor dentro do normal
```

Quando o valor ultrapassa 500:

```
Nivel de Gas:
612   ALERTA!
```

## 📦 Instalação

1. Copie o código para o Arduino IDE.
2. Faça o upload para o seu Arduino Uno.
3. Conecte os componentes conforme indicado nos pinos do código.
4. Ligue a alimentação (USB ou fonte externa).

## 🧪 Possíveis Melhorias

- Enviar dados via Wi-Fi (com ESP8266) ou Bluetooth.
- Armazenar leituras em cartão SD.
- Integrar com sistemas de automação residencial (ex: IFTTT).
- Adicionar botão para reset de alerta.

## 📄 Licença

Este projeto é de uso educacional e livre para modificações.

---

Desenvolvido com 💡 por Gabryel Souza
