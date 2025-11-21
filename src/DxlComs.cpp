#include <Dxl++/DxlComs.h>

bool DxlComs::initialise(int baudrate, const std::string& port)
{
    packetHandler2 = dynamixel::PacketHandler::getPacketHandler(PROTOCOL_VERSION2);
    portName = port;
    portHandler = dynamixel::PortHandler::getPortHandler(portName.c_str());

    if (!portHandler->openPort())
    {
        printf("Failed to open the port! [%s]\n", portName.c_str());
        return false;
    }

    printf("Succeeded to open the port!\n\n");
    printf(" - Device Name : %s\n", portName.c_str());
    printf(" - Baudrate    : %d\n\n", portHandler->getBaudRate());

    if(!portHandler->setBaudRate(baudrate)) 
    {
        printf("Failed to set baudrate");
        return false;
    }

    printf("Succeded to set baudrate : %d\n", portHandler->getBaudRate());
    printf("Dxl initalised \n");
    return true;
}

bool DxlComs::ping(int id, uint16_t &model) 
{
    dxlResult = packetHandler2->ping(portHandler, id, &model, &dxlError);

    if (dxlResult != COMM_SUCCESS)
    {
        printf("%s\n", packetHandler2->getTxRxResult(dxlResult));
        return false;
    }
    else if (dxlError != 0)
    {
        printf("%s\n", packetHandler2->getRxPacketError(dxlError));
        return false;
    }
    else
    {
        return true;
    }
}

bool DxlComs::torque(int id, int addr, bool value)
{

  dxlResult = packetHandler2->write1ByteTxRx(portHandler, id, addr, value, &dxlError);
  if (dxlResult != COMM_SUCCESS)
  {
    packetHandler2->getTxRxResult(dxlResult);
    return false;
  }
  else if (dxlError != 0)
  {
    packetHandler2->getRxPacketError(dxlError);
    return false;
  }
  else
  {
    return true;
  }
}

bool DxlComs::setGoalPosition(int id, float position, int addr)
{
    dxlResult = packetHandler2->write4ByteTxRx(portHandler, id, addr, position, &dxlError);
    if (dxlResult != COMM_SUCCESS)
    {
        packetHandler2->getTxRxResult(dxlResult);
        return false;
    }
    else if (dxlError != 0)
    {
        packetHandler2->getRxPacketError(dxlError);
        return false;
    }
    else
    {
        return true;
    }  
}

int DxlComs::getPosition(int id, int addr)
{
    int result = 0;
    dxlResult = packetHandler2->read4ByteTxRx(portHandler, id, addr, (uint32_t*)&result, &dxlError);
    
    if (dxlResult != COMM_SUCCESS)
    {
        packetHandler2->getTxRxResult(dxlResult);
    }
    else if (dxlError != 0)
    {
        packetHandler2->getRxPacketError(dxlError);
    }

    return result;
}

void DxlComs::close()
{
    portHandler->closePort();
    printf("Dxl coms closed" + '\n');
}