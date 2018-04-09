/*
    Program to capture sound and movement on the MARS Drink machine.
    This data will then be sent to Azure IoT Hub for display.
*/

//includes
#include <stdlib.h>

const int ledPin = 4;

//function to run on startup or when the board is reset.
void setup() {
    Serial.begin(115200);
    //initialize the output pin for the LED.
    //pinMode(LED_BUILTIN, OUTPUT);
    Serial.println("in setup mode");
    pinMode(ledPin, OUTPUT);
}

//the loop function runs over and over ....
void loop() {
    //read the value fo the vibration sensor
    int piezoValue = digitalRead(2);
    Serial.println(piezoValue);

    if(piezoValue == HIGH)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }
    delay(1000);
}