//answer to Q1: 3 + 6 + 9 = 18
//answer to Q2: this would be the product of 2,4,6,8, except that 
//you first multiply be 0, so the answer is trivially 0

class Robot
{
  public:
    void DriveForward(float distance) {} //drives a distance in inches
    void Turn(float angle) {}            //turns an angle in degrees; positive is CCW
};

Robot robotMyRobot; //declare a Robot object

// we could put the code in setup() to run once, 
// but that would be boring
// so we'll declare a variable for whether or not we should drive

bool shouldDraw = true;

void setup() {} //normally, setup would have lots of setup code

// the loop routine runs over and over:
void loop() 
{
  if(shouldDraw) //only draw if shouldDraw is true
  {
    //draw the hexagon
    for(int i = 0; i < 6; i++) //a for loop makes this easy
    {
      robotMyRobot.DriveForward(10); //drive a leg
      robotMyRobot.Turn(60); //we'll go anti-clockwise
    }

    //and then tell it not to draw again
    shouldDraw = false;
  }
}
