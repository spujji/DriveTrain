#include <WPILib>
//this is my header
class VikingBot : IterativeRobot{


private:
//Robot robot; *do not need because everything is in one class
//HumanController humancontroller; *

//need talons(4), joysticks (2), 
TalonSRX leftTopTalon;
TalonSRX leftBottomTalon;
TalonSRX rightTopTalon;
TalonSRX rightBottomTalon;

//joysticks that control movement
Joystick moveJoystick; 
Joystick turnJoystick; 

public:
  VikingBot();
  
  typedef enum State{
  IDLE; //state where robot isn't moving
  DRIVING_TELEOP; //state where robot movement is being controlled by joystick
  }
 
void update();	
};

VikingBot::VikingBot():

//Initializes the left talons
		leftTopTalon((uint32_t) PORT_DRIVE_VIC_LEFT_FRONT), leftBottomTalon(
				(uint32_t) PORT_DRIVE_VIC_LEFT_BACK),

//Initializes the right talons
		rightTopTalon((uint32_t) PORT_DRIVE_VIC_RIGHT_FRONT), rightBottomTalon(
				(uint32_t) PORT_DRIVE_VIC_RIGHT_BACK)

	joystick.getY();
	joystick.getX();
	

{
}

void VikingBot::update();

