int sensePin = 0;
int ledPin = 9;



void setup() {
  // put your setup code here, to run once:

    analogReference(DEFAULT);

     pinMode(ledPin, OUTPUT);
    
    
    
}

void loop() {
  // put your main code here, to run repeatedly:

     int val = analogRead(sensePin);

     val = constrain( val , 750 , 900 );
     int ledLevel = map( val , 750 , 900 , 255 , 0 );
     
       analogWrite(ledPin, ledLevel);
       
}
