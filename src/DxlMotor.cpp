#include <Dxl++/DxlMotor.h>

DxlMotor::DxlMotor(DxlComs* dxl, uint8_t id) 
: id_(id), dxl_(dxl) {
}
bool DxlMotor::getModel(uint16_t &model, MotorParameters &params)
{
    return GetControlTable(controlTable_, params, model_);
}

bool DxlMotor::ping() {
    bool pingResult = dxl_->ping(id_, model_);
    bool modelResult = getModel(model_, motorParams_);
    return pingResult;
}


bool DxlMotor::torqueOn()
{
    return dxl_->torque(id_, controlTable_[ControlTable::TorqueEnable], true);
}

bool DxlMotor::torqueOff()
{
    return dxl_->torque(id_, controlTable_[ControlTable::TorqueEnable], true);
}

bool DxlMotor::setGoalPosition(float position) {
    int encoderConversion = degreeToEncoder(position, motorParams_);
    return dxl_->setGoalPosition(id_, encoderConversion, controlTable_[ControlTable::GoalPosition]);
}

bool DxlMotor::setProfileVelocity(float velocity) {
    return false;
}

bool DxlMotor::setProfileAcceleration(float acceleration) {
    return false;
}

float DxlMotor::getPosition() {
    int encoderVal = dxl_->getPosition(id_, controlTable_[ControlTable::PresentPosition]);
    return encoderToDegree(encoderVal, motorParams_);
}