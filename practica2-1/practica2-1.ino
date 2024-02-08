#include <Arduino.h>

// Define el pin del LED interno del ESP32
const int ledPin = 2;

void setup() {
  Serial.begin(9600);
  // Inicializa el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Enciende el LED
  digitalWrite(ledPin, HIGH);
  delay(1000);

  // Apaga el LED
  digitalWrite(ledPin, LOW);
  delay(1000);

  float temperatura = readTemperature();

  // Imprime la temperatura en el monitor serial
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  delay(1000);
}

// Función para leer la temperatura interna del ESP32
float readTemperature() {
  return (temperatureRead() - 32) / 1.8;
}