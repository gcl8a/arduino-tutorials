class Robot
{
  public:
    void DriveForward(float distance) {} //drives a distance in inches
    void Turn(float angle) {}            //turns an angle in degrees; positive is CCW
    void polygon(int nSides, float length) //length should be a float!!!
    {
      //angle MUST be a float; be careful to do float math!
      float turnAngle = 360.0 / nSides; 

      //now draw the polygon
      for(int i = 0; i < nSides; i++)
      {
        DriveForward(length);
        Turn(turnAngle);
      }
    } 
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
    //draw the polygon
    robotMyRobot.polygon(6, 10); //could be any number of sides, length

    //and then tell it not to draw again
    shouldDraw = false;
  }
}
