/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "grbl.h"

void servoInit()
{
    PWM_Servo_A_Start();
    setServoA(SERVO_CLAMP_LOOSE);
}


void setServoA(int val)
{  
  PWM_Servo_A_WriteCompare(constrain(val, SERVOMIN_A, SERVOMAX_A));
}

int constrain(int val, int min, int max) {
    return (val < min)? min : (val > max)? max : val;
}

long map(long x, long in_min, long in_max, long out_min, long out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

long mapConstrain(long x, long in_min, long in_max, long out_min, long out_max)
{
    x = constrain(x, out_min, out_max);
    return map(x, in_min, in_max, out_min, out_max);
}



/* [] END OF FILE */
