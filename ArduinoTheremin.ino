const int SENSOR1_TRIG = 2;
const int SENSORT1_ECHO = 3;
const int BUZZER1_PIN = A0;

void setup(){
    pinMode(SENSOR1_TRIG, OUTPUT);
    pinMode(SENSORT1_ECHO, INPUT);

    Serial.begin(9600);
}

void loop(){

    digitalWrite(SENSOR1_TRIG, LOW);
    delayMicroseconds(5);
    digitalWrite(SENSOR1_TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(SENSOR1_TRIG, LOW);

    int duration = pulseIn(SENSORT1_ECHO, HIGH);
    int distance_CM = duration / 58;

    tone(BUZZER1_PIN, distance_CM * 100);

    delay(10);

}