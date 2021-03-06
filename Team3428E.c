#pragma config(Motor,  motor1,          hookleft,      tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor3,          LiftLeft,      tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor4,          LiftRight,     tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor8,          claw,          tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor9,          left,          tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor10,         right,         tmotorVexIQ, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true) {
		armControl(LiftLeft,BtnRUp,BtnRDown,50);
		armControl(LiftRight,BtnRUp,BtnRDown,50);
		armControl(hookleft,BtnLUp,BtnLDown,50);
		armControl(claw,BtnEUp,BtnEDown,50);

				if(abs(getJoystickValue(ChA))>25 || abs(getJoystickValue(ChD))>25) {	//if the absoloute value of ChA is above 20 or the absoloute value of ChD is above 15 then allow the Motors to
			setMotorSpeed(left, getJoystickValue(ChA)); //set the value of the motor to the value of the controller joystick
			setMotorSpeed(right, getJoystickValue(ChD)); //set the value of the motor to the value of the controller joystick
		}
		else { setMotorSpeed(left, 0);	// if nothing is happening on the controller set the motor speed to 0
			setMotorSpeed(right, 0); // if nothing is happening on the controller set the motor speed to 0
		};
	}
}
