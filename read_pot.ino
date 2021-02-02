
// Read the state of pot and display it on the screen

int potPin = 0;


void setup() {
  // put your setup code here, to run once:

   pinMode(potPin, INPUT );

   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

     Serial.println(analogRead(potPin));
     delay(1000);
     
}
