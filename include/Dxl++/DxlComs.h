#pragma once
#include <dynamixel_sdk/dynamixel_sdk.h>
#include <string>

#define ADDR_PRO_TORQUE_ENABLE          562                 // Control table address is different in Dynamixel model
#define ADDR_PRO_GOAL_POSITION          596
#define ADDR_PRO_PRESENT_POSITION       611

#define PROTOCOL_VERSION2 2.0

class DxlComs {
    public:

    bool initialise(int baudrate, const std::string& port_name);
    bool isInitalised() const;
    bool ping(int id, uint16_t &model);
    bool torque(int id, int addr, bool value);
    bool setGoalPosition(int id, float position, int addr);
    int getPosition(int id, int addr);
    void close();

    private:
    std::string portName;
    dynamixel::PacketHandler *packetHandler2 = nullptr;
    dynamixel::PortHandler *portHandler = nullptr;
    int dxlResult = 0;
    uint8_t dxlError = 0;

};