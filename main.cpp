/*! @mainpage Lab 5
* @date Wednesday, Febuary 7, 2024
* @authors Weiheng He
* @section genDesc General Description
*
* Lab 5 - Operating and testing servo motors
* 
*
* @section changelog Changelog
* | Date | Description |
* |:----------:|:-----------------------------------------------|
* | 02/7/2024 | First version of program |
* 
*
*
*/

//=====[Libraries]=============================================================

#include "mbed.h"
#include "arm_book_lib.h"

//=====[Defines]===============================================================

#define DUTY_MIN 0.0187 //minimum rotation
#define DUTY_MAX 0.1145 //maximum rotation
#define PERIOD 0.02 //20 ms period
#define DELAY 5000 //5 second delay

//=====[Declaration and initialization of public global objects]===============

PwmOut servo(PF_9);

//=====[Declaration and initialization of public global variables]=============



//=====[Declarations (prototypes) of public functions]=========================

void servoInit(); //initializes start

//=====[Main function, the program entry point after power on or reset]========

int main() //main function loop
{
    servoInit();
    while (true) {
        servo.write(DUTY_MIN);
        delay(DELAY);
        servo.write(DUTY_MAX);
        delay(DELAY);
        }
}

//=====[Implementation of global functions]====================================


void servoInit() {
    servo.period(PERIOD);
    servo.write(DUTY_MIN);
}