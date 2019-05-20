int latchPin = 4;
int clockPin = 3;
int dataPin = 2;
byte leds = 0;
int currentLED = 0;

void setup()
{
    pinMode(latchPin, OUTPUT);
    pinMode(dataPin, OUTPUT);
    pinMode(clockPin, OUTPUT);
    Serial.begin(9600);

    leds = 0;
}

void loop()
{
    leds = 0;

    if (currentLED == 7)
    {
        currentLED = 0;
    }
    else
    {
        currentLED++;
    }

    bitSet(leds, currentLED);

Serial.print(leds);
Serial.print(" - ");
Serial.print(currentLED);
Serial.print("\n");

    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, leds);
    digitalWrite(latchPin, HIGH);

    delay(1000);
}


