#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S3,     IRS_L,          sensorI2CCustom)
#pragma config(Sensor, S4,     IRS_R,          sensorI2CCustom)
#pragma config(Motor,  motorA,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorC,          mBlockStop,    tmotorNXT, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C1_1,     mDriveLeft,    tmotorTetrix, openLoop, encoder)
#pragma config(Motor,  mtr_S1_C1_2,     mDriveRight,   tmotorTetrix, openLoop, reversed, encoder)
#pragma config(Motor,  mtr_S1_C2_1,     mBsConveyor,   tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_2,     mBsAngle,      tmotorTetrix, openLoop, reversed, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
task main()
{
	nxtDisplayTextLine(0, "After Match Lower");
	nxtDisplayTextLine(2, "   DOWN     UP");
	nxtDisplayBigTextLine(3, "  <   >");
	while(true){
			if(nNxtButtonPressed == 2){
				motor[mBsAngle] = -100;
			}else if(nNxtButtonPressed == 1){
				motor[mBsAngle] = 100;
			}else{
				motor[mBsAngle] = 0;
			}
	}


}
