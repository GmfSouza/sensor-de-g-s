#include <LiquidCrystal.h> 
//(RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int sensorPin = A0;    
const int ledPin = 7;        
const int buzzerPin = 6;     

// Limite para o nível de gás considerado normal. Se exceder, emite o alerta 
const int gasLimite = 500;

void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(sensorPin, INPUT);

  // Inicialização do display
  lcd.begin(16, 2); 
  lcd.print("Sensor de Gas"); // Mensagem exibida ao iniciar
  delay(2000); 
  lcd.clear(); 
}

void loop() {
  
  int gasNivel = analogRead(sensorPin);

  // Mostra o nível de gás no LCD
  lcd.setCursor(0, 0); 
  lcd.print("Nivel de Gas:");
  lcd.setCursor(0, 1); 
  lcd.print(gasNivel); 
  

  // Verifica se o nível de gás excede o limite
  if (gasNivel > gasLimite) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000); 
    lcd.setCursor(10, 1); 
    lcd.print("ALERTA!");
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
    lcd.setCursor(10, 1); 
    lcd.print("       "); 
  }

  delay(500); 
}
