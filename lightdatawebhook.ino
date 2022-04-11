int led = D7;
int lightSensor = A1;


void setup() {
    pinMode(led, OUTPUT);
}


void loop() {
    digitalWrite(led, HIGH);
    
    String light = String(analogRead (lightSensor));
    Particle.publish("light", light, PRIVATE);
    delay(30000); // Waits for 30 seconds
    
    digitalWrite(led, LOW);
    delay(30000);
}

