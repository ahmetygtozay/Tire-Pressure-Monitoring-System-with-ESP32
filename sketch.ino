#include "HX711.h"

// HX711 pin configuration
const int loadCellDoutPin = 4;
const int loadCellSckPin = 5;

// LED ve Buzzer pinleri
const int ledPin = 12;
const int buzzerPin = 13;

// Basınç eşiği (30 kg)
const float threshold = 3000.0;

HX711 scale;

void setup() {
  Serial.begin(115200);
  scale.begin(loadCellDoutPin, loadCellSckPin);

  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  // Başlangıçta LED ve Buzzer kapalı
  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  if (scale.is_ready()) {
    float weight = scale.get_units(); // Ağırlığı oku
    Serial.print("Weight: ");
    Serial.print(weight);
    Serial.println(" kg");

    if (weight > 15000) {
      // Eşik değerinin üzerindeyse LED'i yak ve Buzzer'ı öttür
      digitalWrite(ledPin, HIGH);
      tone(buzzerPin, 1000); // Buzzer'ı 1000 Hz frekansta öttür
    } else {
      // Eşik değerinin altında ise LED'i kapat ve Buzzer'ı kapat
      digitalWrite(ledPin, LOW);
      noTone(buzzerPin);
    }
  } else {
    Serial.println("HX711 not found.");
  }
  delay(1000);
}
