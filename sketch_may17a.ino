#define analogic A0
float temp;

void setup() {
  Serial.begin(9600);
  pinMode(analogic, INPUT);
}

void loop() {
  temp = (float(analogRead(analogic))*5/(1023))/0.01;
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("ºC");
  delay(3500);
}
