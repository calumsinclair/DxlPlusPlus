#include <string>
#include <chrono>
#include <thread>
#include "Dxl++/DxlMotor.h"
#include "Dxl++/DxlComs.h"

#define MOTOR_ID 1

int main() {

    // Connection parameters
    std::string port = "/dev/ttyUSB0";
    int baudrate = 1000000;

    // Create communication object 
    // Then initialised the object with the parameters above
    DxlComs coms;
    if(!coms.initialise(baudrate, port))
    {
        return 1;
    }

    // Once connected to the communication bus
    // Create a motor object 
    DxlMotor motor(&coms, MOTOR_ID);

    // run ping to init the motor
    if(motor.ping())
        printf ("Motor pinged successfully\n");
    else 
        printf ("Failed to ping motor\n");

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));


    if(motor.torqueOn())
        printf ("Motor Torque On\n");
    else 
        printf ("Failed to torque on\n");

    //In a loop ping pong from 0 - 100 waiting a second in between
    for (int i = 0; i < 3; i++)
    {
        bool result = motor.setGoalPosition(0);
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        float pos = motor.getPosition();
        printf("%f\n", pos);

        result = motor.setGoalPosition(180);
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        pos = motor.getPosition();
        printf("%f\n", pos);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    if(motor.torqueOff())
        printf ("Motor Torque Off\n");
    else 
        printf ("Failed to torque off\n");

    return 0;
}