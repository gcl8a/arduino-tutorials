const int buttonPin = 14; // CHANGED FROM THE ORIGINAL ASSIGNMENT
const int ledPin =  13;   // the number of the LED pin

void setup() 
{
  pinMode(ledPin, OUTPUT);        // initialize the LED pin as an output:
  pinMode(buttonPin, INPUT);      // initialize the pushbutton pin as an input:
}

unsigned int secondsOn = 1; //best to use an unsigned here, start with 1 second

void loop()
{
  while(digitalRead(buttonPin) == LOW) //when the button is held down
  {
    digitalWrite(ledPin, HIGH); //on
    delay(1000 * secondsOn++);  //increments _after_ the delay function is called
    digitalWrite(ledPin, LOW);  //off
    delay(1000);                //off for one second
  }

  //when we leave the while loop, reset the counter to 1
  secondsOn = 1; 
}
