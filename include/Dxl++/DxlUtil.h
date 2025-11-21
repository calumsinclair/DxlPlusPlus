#define AX_12A     12
#define AX_12W     300
#define AX_18A     18

#define RX_10      10
#define RX_24F     24
#define RX_28      28
#define RX_64      64

#define EX_106     107

#define MX_12W     360
#define MX_28      29
#define MX_28_2    30
#define MX_64      310
#define MX_64_2    311
#define MX_106     320
#define MX_106_2   321

#define XL_320     350

#define XL330_M077 1190
#define XL330_M288 1200

#define XC330_M181 1230
#define XC330_M288 1240
#define XC330_T181 1210
#define XC330_T288 1220

#define XL430_W250 1060

#define XL430_W250_2 1090 // 2XL
#define XC430_W250_2 1160 // 2XC

#define XC430_W150 1070
#define XC430_W240 1080

#define XM430_W210 1030
#define XM430_W350 1020

#define XM540_W150 1130
#define XM540_W270 1120

#define XH430_W210 1010
#define XH430_W350 1000
#define XH430_V210 1050
#define XH430_V350 1040

#define XH540_W150 1110
#define XH540_W270 1100
#define XH540_V150 1150
#define XH540_V270 1140

#define XW430_T200 1280
#define XW430_T333 1270
#define XW540_T260 1170
#define XW540_T140 1180

#define PRO_L42_10_S300_R  35072
#define PRO_L54_30_S400_R  37928
#define PRO_L54_30_S500_R  37896
#define PRO_L54_50_S290_R  38176
#define PRO_L54_50_S500_R  38152

#define PRO_M42_10_S260_R  43288
#define PRO_M54_40_S250_R  46096
#define PRO_M54_60_S250_R  46352

#define PRO_H42_20_S300_R  51200
#define PRO_H54_100_S500_R 53768
#define PRO_H54_200_S500_R 54024

#define PRO_M42_10_S260_R_A  43289
#define PRO_M54_40_S250_R_A  46097
#define PRO_M54_60_S250_R_A  46353

#define PRO_H42_20_S300_R_A  51201
#define PRO_H54_100_S500_R_A 53769
#define PRO_H54_200_S500_R_A 54025

#define PRO_PLUS_M42P_010_S260_R  2100
#define PRO_PLUS_M54P_040_S250_R  2110
#define PRO_PLUS_M54P_060_S250_R  2120

#define PRO_PLUS_H42P_020_S300_R  2000
#define PRO_PLUS_H54P_100_S500_R  2010
#define PRO_PLUS_H54P_200_S500_R  2020

#define RH_P12_RN   35073
#define RH_P12_RN_A 35074

#define PI  3.14159265358979323846f

#include <map>
#include <algorithm>

enum ControlTable {
    ModelNumber,
    FirmwareVersion,
    ID,
    BaudRate,
    ReturnDelayTime,
    DriveMode,
    OperatingMode,
    SecondaryID,
    ProtocolVersion,
    HomingOffset,
    MovingThreshold,
    TemperatureLimit,
    MaxVoltageLimit,
    MinVoltageLimit,
    PWMLimit,
    CurrentLimit,
    AccelerationLimit,
    VelocityLimit,
    MaxPositionLimit,
    MinPositionLimit,
    ExternalPortMode1,
    ExternalPortMode2,
    ExternalPortMode3,
    StartupConfiguration,
    Shutdown,
    TorqueEnable,
    LED,
    StatusReturnLevel,
    RegisteredInstruction,
    HardwareErrorStatus,
    VelocityIGain,
    VelocityPGain,
    PositionDGain,
    PositionIGain,
    PositionPGain,
    Feedforward2ndGain,
    Feedforward1stGain,
    BusWatchdog,
    GoalPWM,
    GoalCurrent,
    GoalVelocity,
    ProfileAcceleration,
    ProfileVelocity,
    GoalPosition,
    RealtimeTick,
    Moving,
    MovingStatus,
    PresentPWM,
    PresentCurrent,
    PresentVelocity,
    PresentPosition,
    VelocityTrajectory,
    PositionTrajectory,
    PresentInputVoltage,
    PresentTemperature,
    BackupReady,
    ExternalPortData1,
    ExternalPortData2,
    ExternalPortData3
};

std::map<ControlTable, int> xm = {
  { ControlTable::ModelNumber, 0 },
  { ControlTable::FirmwareVersion, 6 },
  { ControlTable::ID, 7 },
  { ControlTable::BaudRate, 8 },
  { ControlTable::ReturnDelayTime, 9 },
  { ControlTable::DriveMode, 10 },
  { ControlTable::OperatingMode, 11 },
  { ControlTable::SecondaryID, 12 },
  { ControlTable::ProtocolVersion, 13 },
  { ControlTable::HomingOffset, 20 },
  { ControlTable::MovingThreshold, 24 },
  { ControlTable::TemperatureLimit, 31 },
  { ControlTable::MaxVoltageLimit, 32 },
  { ControlTable::MinVoltageLimit, 34 },
  { ControlTable::PWMLimit, 36 },
  { ControlTable::CurrentLimit, 38 },
  { ControlTable::AccelerationLimit, 40 },
  { ControlTable::VelocityLimit, 44 },
  { ControlTable::MaxPositionLimit, 48 },
  { ControlTable::MinPositionLimit, 52 },
  { ControlTable::ExternalPortMode1, 56 },
  { ControlTable::ExternalPortMode2, 57 },
  { ControlTable::ExternalPortMode3, 58 },
  { ControlTable::StartupConfiguration, 60 },
  { ControlTable::Shutdown, 63 },
  { ControlTable::TorqueEnable, 64 },
  { ControlTable::LED, 65 },
  { ControlTable::StatusReturnLevel, 68 },
  { ControlTable::RegisteredInstruction, 69 },
  { ControlTable::HardwareErrorStatus, 70 },
  { ControlTable::VelocityIGain, 76 },
  { ControlTable::VelocityPGain, 78 },
  { ControlTable::PositionDGain, 80 },
  { ControlTable::PositionIGain, 82 },
  { ControlTable::PositionPGain, 84 },
  { ControlTable::Feedforward2ndGain, 88 },
  { ControlTable::Feedforward1stGain, 90 },
  { ControlTable::BusWatchdog, 98 },
  { ControlTable::GoalPWM, 100 },
  { ControlTable::GoalCurrent, 102 },
  { ControlTable::GoalVelocity, 104 },
  { ControlTable::ProfileAcceleration, 108 },
  { ControlTable::ProfileVelocity, 112 },
  { ControlTable::GoalPosition, 116 },
  { ControlTable::RealtimeTick, 120 },
  { ControlTable::Moving, 122 },
  { ControlTable::MovingStatus, 123 },
  { ControlTable::PresentPWM, 124 },
  { ControlTable::PresentCurrent, 126 },
  { ControlTable::PresentVelocity, 128 },
  { ControlTable::PresentPosition, 132 },
  { ControlTable::VelocityTrajectory, 136 },
  { ControlTable::PositionTrajectory, 140 },
  { ControlTable::PresentInputVoltage, 144 },
  { ControlTable::PresentTemperature, 146 },
  { ControlTable::BackupReady, 147 },
  { ControlTable::ExternalPortData1, 152 },
  { ControlTable::ExternalPortData2, 154 },
  { ControlTable::ExternalPortData3, 156 }
};

struct MotorParameters {

    float rpm;

    int64_t min_encoder;
    int64_t zero_encoder;
    int64_t max_encoder;

    float  min_radian;
    float  max_radian;
};

bool GetControlTable(std::map<ControlTable, int> &controlTable, MotorParameters &params, int model) 
{
  if (model == AX_12A || model == AX_12W || model == AX_18A)
  {

  }
  else if (model == RX_10 || model == RX_24F || model == RX_28 || model == RX_64)
  {

  }
  else if (model == EX_106)
  {

  }
  else if (model == MX_12W || model == MX_28)
  {

  }
  else if (model == MX_64 || model == MX_106)
  {

  }
  else if (model == MX_28_2)
  {

  }
  else if (model == MX_64_2 || model == MX_106_2)
  {

  }
  else if (model == XL_320)
  {

  }
  else if (model == XL330_M077 || model == XL330_M288 || model == XC330_M181 || model == XC330_M288 || model == XC330_T181 || model == XC330_T288)
  {

  }
  else if (model == XL430_W250 || model == XL430_W250_2 || model == XC430_W150 || model == XC430_W240 || model == XC430_W250_2)
  {

  }
  else if (model == XM430_W210 || model == XM430_W350)
  {

  }
  else if (model == XM540_W150 || model == XM540_W270)
  {
    controlTable = xm;
    params = {  .rpm = 0.229,
                .min_encoder = 0,
                .zero_encoder = 2048,
                .max_encoder = 4096,
                .min_radian = -3.14159265,
                .max_radian = 3.14159265
            };

    return true;
  }
  else if (model == XH430_V210 || model == XH430_V350 || model == XH430_W210 || model == XH430_W350)
  {

  }
  else if (model == XH540_W150 || model == XH540_W270 || model == XH540_V150 || model == XH540_V270)
  {

  }
  else if (model == XW540_T260 || model == XW540_T140 || model == XW430_T200 || model == XW430_T333)
  {

  }
  else if (model == PRO_L42_10_S300_R)
  {

  }
  else if (model == PRO_L54_30_S400_R || model == PRO_L54_30_S500_R || model == PRO_L54_50_S290_R || model == PRO_L54_50_S500_R ||
           model == PRO_M42_10_S260_R || model == PRO_M54_40_S250_R || model == PRO_M54_60_S250_R ||
           model == PRO_H42_20_S300_R || model == PRO_H54_100_S500_R || model == PRO_H54_200_S500_R)
  {

  }
  else if (model == PRO_M42_10_S260_R_A || model == PRO_M54_40_S250_R_A  || model == PRO_M54_60_S250_R_A ||
           model == PRO_H42_20_S300_R_A || model == PRO_H54_100_S500_R_A || model == PRO_H54_200_S500_R_A)
  {

  }
  else if (model == PRO_PLUS_M42P_010_S260_R || model == PRO_PLUS_M54P_040_S250_R || model == PRO_PLUS_M54P_060_S250_R ||
           model == PRO_PLUS_H42P_020_S300_R || model == PRO_PLUS_H54P_100_S500_R || model == PRO_PLUS_H54P_200_S500_R)
  {

  }
  else if (model == RH_P12_RN)
  {

  }
  else if (model == RH_P12_RN_A)
  {

  }
  else
  {

  }

  return false;
}

int clamp(float n, float lower, float upper) {
  return std::max(lower, std::min(n, upper));
}

float encoderToDegree(int encoderValue,  MotorParameters& params)
{
    float scale = (params.max_radian - params.min_radian) /
                  (params.max_encoder - params.min_encoder);

    float radians = (encoderValue - params.min_encoder) * scale + params.min_radian;

    return radians * (180.0f / PI);
}

int degreeToEncoder(int degrees, MotorParameters params)
{
    float radians = degrees * (PI / 180.0f);

    float scale = (params.max_encoder - params.min_radian) /
                  (params.max_radian - params.min_radian);

    float result = (radians * scale) + params.min_radian;

    return clamp(result, params.min_encoder, params.max_encoder);
}


// typedef struct {
//     int address = 0,
//     int size = 0;

// } ControlTableData;


// static const ControlItem items_XM[]{
//     {s_Model_modelber, 0, sizeof(s_Model_modelber) - 1, 2},
//     {s_Firmware_Version, 6, sizeof(s_Firmware_Version) - 1, 1},
//     {s_ID, 7, sizeof(s_ID) - 1, 1},
//     {s_Baud_Rate, 8, sizeof(s_Baud_Rate) - 1, 1},
//     {s_Return_Delay_Time, 9, sizeof(s_Return_Delay_Time) - 1, 1},
//     {s_Drive_Mode, 10, sizeof(s_Drive_Mode) - 1, 1},
//     {s_Operating_Mode, 11, sizeof(s_Operating_Mode) - 1, 1},
//     {s_Secondary_ID, 12, sizeof(s_Secondary_ID) - 1, 1},
//     {s_Protocol_Version, 13, sizeof(s_Protocol_Version) - 1, 1},
//     {s_Homing_Offset, 20, sizeof(s_Homing_Offset) - 1, 4},
//     {s_Moving_Threshold, 24, sizeof(s_Moving_Threshold) - 1, 4},
//     {s_Temperature_Limit, 31, sizeof(s_Temperature_Limit) - 1, 1},
//     {s_Max_Voltage_Limit, 32, sizeof(s_Max_Voltage_Limit) - 1, 2},
//     {s_Min_Voltage_Limit, 34, sizeof(s_Min_Voltage_Limit) - 1, 2},
//     {s_PWM_Limit, 36, sizeof(s_PWM_Limit) - 1, 2},
//     {s_Current_Limit, 38, sizeof(s_Current_Limit) - 1, 2},
//     {s_Acceleration_Limit, 40, sizeof(s_Acceleration_Limit) - 1, 4},
//     {s_Velocity_Limit, 44, sizeof(s_Velocity_Limit) - 1, 4},
//     {s_Max_Position_Limit, 48, sizeof(s_Max_Position_Limit) - 1, 4},
//     {s_Min_Position_Limit, 52, sizeof(s_Min_Position_Limit) - 1, 4},
//     {s_Startup_Configuration, 60, sizeof(s_Startup_Configuration) - 1, 1},
//     {s_Shutdown, 63, sizeof(s_Shutdown) - 1, 1},

//     {s_Torque_Enable, 64, sizeof(s_Torque_Enable) - 1, 1},
//     {s_LED, 65, sizeof(s_LED) - 1, 1},
//     {s_Status_Return_Level, 68, sizeof(s_Status_Return_Level) - 1, 1},
//     {s_Registered_Instruction, 69, sizeof(s_Registered_Instruction) - 1, 1},
//     {s_Hardware_Error_Status, 70, sizeof(s_Hardware_Error_Status) - 1, 1},
//     {s_Velocity_I_Gain, 76, sizeof(s_Velocity_I_Gain) - 1, 2},
//     {s_Velocity_P_Gain, 78, sizeof(s_Velocity_P_Gain) - 1, 2},
//     {s_Position_D_Gain, 80, sizeof(s_Position_D_Gain) - 1, 2},
//     {s_Position_I_Gain, 82, sizeof(s_Position_I_Gain) - 1, 2},
//     {s_Position_P_Gain, 84, sizeof(s_Position_P_Gain) - 1, 2},
//     {s_Feedforward_2nd_Gain, 88, sizeof(s_Feedforward_2nd_Gain) - 1, 2},
//     {s_Feedforward_1st_Gain, 90, sizeof(s_Feedforward_1st_Gain) - 1, 2},
//     {s_Bus_Watchdog, 98, sizeof(s_Bus_Watchdog) - 1, 1},
//     {s_Goal_PWM, 100, sizeof(s_Goal_PWM) - 1, 2},
//     {s_Goal_Current, 102, sizeof(s_Goal_Current) - 1, 2},
//     {s_Goal_Velocity, 104, sizeof(s_Goal_Velocity) - 1, 4},
//     {s_Profile_Acceleration, 108, sizeof(s_Profile_Acceleration) - 1, 4},
//     {s_Profile_Velocity, 112, sizeof(s_Profile_Velocity) - 1, 4},
//     {s_Goal_Position, 116, sizeof(s_Goal_Position) - 1, 4},
//     {s_Realtime_Tick, 120, sizeof(s_Realtime_Tick) - 1, 2},
//     {s_Moving, 122, sizeof(s_Moving) - 1, 1},
//     {s_Moving_Status, 123, sizeof(s_Moving_Status) - 1, 1},
//     {s_Present_PWM, 124, sizeof(s_Present_PWM) - 1, 2},
//     {s_Present_Current, 126, sizeof(s_Present_Current) - 1, 2},
//     {s_Present_Velocity, 128, sizeof(s_Present_Velocity) - 1, 4},
//     {s_Present_Position, 132, sizeof(s_Present_Position) - 1, 4},
//     {s_Velocity_Trajectory, 136, sizeof(s_Velocity_Trajectory) - 1, 4},
//     {s_Position_Trajectory, 140, sizeof(s_Position_Trajectory) - 1, 4},
//     {s_Present_Input_Voltage, 144, sizeof(s_Present_Input_Voltage) - 1, 2},
//     {s_Present_Temperature, 146, sizeof(s_Present_Temperature) - 1, 1},
//     {s_Backup_Ready, 147, sizeof(s_Backup_Ready) - 1, 1}};
