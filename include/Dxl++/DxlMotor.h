#include <Dxl++/DxlComs.h>
#include <Dxl++/DxlUtil.h>

class DxlMotor {
    public:
    DxlMotor(DxlComs* coms, uint8_t id);
    
    bool init();

    // setup
    bool ping();
    bool getModel(uint16_t &model, MotorParameters &params);

    //
    bool torqueOn();
    bool torqueOff();

    // positional control
    bool setGoalPosition(float position);
    bool setProfileVelocity(float velocity);
    bool setProfileAcceleration(float acceleration);

    float getPosition();


    private:
    uint8_t id_ = 1;
    uint16_t model_;
    DxlComs* dxl_;
    std::map<ControlTable, int> controlTable_;
    MotorParameters motorParams_;
};