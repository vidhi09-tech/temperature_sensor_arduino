//pin declartaion
//pin mode declaration
//pin data declaration

int tempPin = A0;
float temp;

void setup()
{
    Serial.begin(9600);
    pinMode(tempPin, INPUT);
}
void loop()
{
    temp = analogRead(tempPin);
    temp = (temp * 500) / 1023;
    Serial.print("TEMPERATURE IN CELCIUS =");
    Serial.print(temp);
    Serial.println();
    delay(1000);
}
