#include <Arduino.h>

// deklarasi lampu LED
int lampumerah = 25;
int lampukuning = 26;
int lampuhijau = 27;

void setup() {
    Serial.begin(115200);
    Serial.println("Hello, ESP32!");

    // mengatur pin sebagai output
    pinMode(lampumerah, OUTPUT);
    pinMode(lampukuning, OUTPUT);
    pinMode(lampuhijau, OUTPUT);
}

void loop() {
    // lampu merah ON
    digitalWrite(lampumerah, HIGH);
    delay(5000);
    Serial.println("Lampu Merah ON");

    // lampu merah OFF
    digitalWrite(lampumerah, LOW);
    Serial.println("Lampu Merah OFF");
    delay(500);

    // lampu kuning ON
    digitalWrite(lampukuning, HIGH);
    delay(500);
    Serial.println("Lampu Kuning ON");

    // lampu kuning OFF
    digitalWrite(lampukuning, LOW);
    Serial.println("Lampu Kuning OFF");
    delay(500);

    // lampu hijau ON
    digitalWrite(lampuhijau, HIGH);
    delay(8000);
    Serial.println("Lampu Hijau ON");

    // lampu hijau OFF
    digitalWrite(lampuhijau, LOW);
    Serial.println("Lampu Hijau OFF");
    delay(500);
}
