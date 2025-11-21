# Dxl++

A Dynamixel lib to make it easier to use Dynamixel motors, wrapped in OOP. 

Use Dynamixel motors by instantiating a motor and running all the commands via the motor instead of the Dynamixel communication object. 

See the examples folder in how to use the library.

## Example 

Create the communcation object

```cpp
    DxlComs coms;

    if(!coms.initialise(baudrate, port))
    {
        printf("Error connecting to Dynamixel bus");
    }

```

Create a motor

```cpp 
    // Create the motor
    DxlMotor motor(&coms, MOTOR_ID);

    // Run a command
    bool result = motor.ping();

    // Check the result from the motor
    if(result)
    {
        printf("Ping succeded \n");
    } else {
        printf("Ping failed \n");
    }

```

Dont forget to close the serial port 

```cpp
    DxlComs coms;
    coms.close();
```