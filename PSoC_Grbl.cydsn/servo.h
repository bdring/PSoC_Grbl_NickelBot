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

#define SERVOMIN_A  1000
#define SERVOMAX_A  2000

#define SERVO_CLAMP_OPEN   1150  // M8
#define SERVO_CLAMP_CLOSED  1630  // M7

#define SERVO_CLAMP_LOOSE   1500  // M9

void setServoA(int val);
void servoInit();
int constrain(int val, int min, int max);

long map(long x, long in_min, long in_max, long out_min, long out_max);
long mapConstrain(long x, long in_min, long in_max, long out_min, long out_max);

/* [] END OF FILE */
