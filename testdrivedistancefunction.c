#pragma config(Motor,  motor1,          Left,          tmotorVexIQ, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motor6,          Right,         tmotorVexIQ, PIDControl, reversed, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main() {
	while (true) {
if (getJoystickValue(BtnLUp)) {
forward(3, rotations, 100);


};
	};
}