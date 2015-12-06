
void setup() {
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
}

void loop() {
    static unsigned char out = 0;
    static unsigned long ltime = 0;

    if (millis() > ltime + 500) {
        out++;
        if (out > 3) out = 0;
        ltime = millis();
    }
    switch (out) {
      case 0:
        digitalWrite(3, LOW);
        digitalWrite(13, LOW);
        digitalWrite(11, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(5, HIGH);
        break;
      case 1:
        digitalWrite(13, LOW);
        digitalWrite(11, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        break;
      case 2:
        digitalWrite(11, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(13, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(9, HIGH);
        break;
      case 3:
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(13, LOW);
        digitalWrite(11, HIGH);
        digitalWrite(9, LOW);
        digitalWrite(10, HIGH);
    }
}

