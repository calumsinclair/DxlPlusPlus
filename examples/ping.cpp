#include <string>
#include "Dxl++/DxlMotor.h"
#include "Dxl++/DxlComs.h"


#define MOTOR_ID 1

int main() {

    printf("Starting ... \n");
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
    bool result = motor.ping();

    // Run the ping command on the motor object
    if(result)
    {
        printf("Ping succeded \n");
    } else {
        printf("Ping failed \n");
    }

    coms.close();

    return 0;
}