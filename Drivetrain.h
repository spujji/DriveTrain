#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H


class DriveTrain{

public:

void update();

private:
TalonSRX  topRightTalon;
TalonSRX topLeftTalon;
TalonSRX bottomRightTalon;
TalonSRX bottomLeftTalon;

typdedef enum State{
IDLE,
FORWARD,
BACKWARD,
LEFT,
RIGHT
}

};

#endif
