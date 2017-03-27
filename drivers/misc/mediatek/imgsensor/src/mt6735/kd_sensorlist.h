//s_add new sensor driver here
//export funtions
//AEON
UINT32 S5K3M2_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 S5K3M2_MIPI_RAW_SensorInit_QT(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 S5K4H5YC_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV8865_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV8858_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV8856_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 S5K5E2YA_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);

//! Add Sensor Init function here
//! Note:
//! 1. Add by the resolution from ""large to small"", due to large sensor
//!    will be possible to be main sensor.
//!    This can avoid I2C error during searching sensor.
//! 2. This file should be the same as mediatek\custom\common\hal\imgsensor\src\sensorlist.cpp
ACDK_KD_SENSOR_INIT_FUNCTION_STRUCT kdSensorList[MAX_NUM_OF_SUPPORT_SENSOR+1] =
{
/* ================================eastaeon==================================== */
// AEON Camera add here ...

//13M
#if defined(S5K3M2_MIPI_RAW)
  {S5K3M2_SENSOR_ID, SENSOR_DRVNAME_S5K3M2_MIPI_RAW, S5K3M2_MIPI_RAW_SensorInit},
#endif
#if defined(S5K3M2_MIPI_RAW_QT)
  {S5K3M2_SENSOR_ID_QT, SENSOR_DRVNAME_S5K3M2_MIPI_RAW_QT, S5K3M2_MIPI_RAW_SensorInit_QT},
#endif
//8M
#if defined(S5K4H5YC_MIPI_RAW)
    {S5K4H5YC_SENSOR_ID, SENSOR_DRVNAME_S5K4H5YC_MIPI_RAW, S5K4H5YC_MIPI_RAW_SensorInit},
#endif
#if defined(OV8865_MIPI_RAW)
    {OV8865_SENSOR_ID, SENSOR_DRVNAME_OV8865_MIPI_RAW,OV8865_MIPI_RAW_SensorInit},
#endif
#if defined(OV8858_MIPI_RAW)
    {OV8858_SENSOR_ID, SENSOR_DRVNAME_OV8858_MIPI_RAW,OV8858_MIPI_RAW_SensorInit},
#endif
#if defined(OV8856_MIPI_RAW)
    {OV8856_SENSOR_ID, SENSOR_DRVNAME_OV8856_MIPI_RAW,OV8856_MIPI_RAW_SensorInit},
#endif
//5M
#if defined(S5K5E2YA_MIPI_RAW)
    {S5K5E2YA_SENSOR_ID, SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW, S5K5E2YA_MIPI_RAW_SensorInit},
#endif


/* ================================eastaeon==================================== */

/*  ADD sensor driver before this line */
    {0,{0},NULL}, //end of list
};
//e_add new sensor driver here

