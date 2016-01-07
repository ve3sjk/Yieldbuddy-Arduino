/*
/!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 /!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!RESTORE DEFAULTS!!
 /!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 */
void RestoreDefaults() {

  //Temporary placeholders for Time Settings Screen
  tmp_month = 3;
  tmp_day = 14;
  tmp_year = 2015;
  tmp_hour = 9;
  tmp_minute = 26;
  tmp_second = 53;

  //Note: Committed Time Settings are stored as their associated month(), day(), year(), etc... as per <Time.h>

  tmp_Light_ON_hour = 12;
  tmp_Light_ON_min = 0;
  tmp_Light_OFF_hour = 23;
  tmp_Light_OFF_min = 59;

  //Committed Light Settings
  Light_ON_hour = 12;
  Light_ON_min = 0;
  Light_OFF_hour = 23;
  Light_OFF_min = 59;

  //Temporary placeholders for Pump Schedule Screen
  tmp_Pump_start_hour = 11;
  tmp_Pump_start_min = 45;
  tmp_Pump_start_isAM = true;
  tmp_Pump_every_hours = 2;
  tmp_Pump_every_mins = 30;
  tmp_Pump_for = 15; //In Minutes
  tmp_Pump_times = 1; //Number of times per day

  //Committed Pump Schedule Settings
  Pump_start_hour = 11;
  Pump_start_min = 45;
  Pump_start_isAM = true;
  Pump_every_hours = 2;
  Pump_every_mins = 30;
  Pump_for = 15; //In Minutes
  Pump_times = 1; //Number of times per day

  //SENSOR VARIABLES

  //Values the arduino sees
  pH1RawValue = 0;
  pH2RawValue = 0;
  TempRawValue = 0;
  RHRawValue = 0;
  TDS1RawValue = 0;
  TDS2RawValue = 0;
  CO2RawValue = 0;
  LightRawValue = 0;
  WaterRawValue = 0;
  

  //Values the humans see
  pH1Value = 0;
  pH2Value = 0;
  TempValue = 0;
  RHValue = 0;
  TDS1Value = 0;
  TDS2Value = 0;
  CO2Value = 0;
  LightValue = 0;
  WaterValue = 0;

  //Status Indicator Values
  pH1_Status = "OK";
  pH1Value_Low = 5.80;
  pH1Value_High = 6.20;

  pH2_Status = "OK";
  pH2Value_Low = 5.80;
  pH2Value_High = 6.2;

  Temp_Status = "OK";
  TempValue_Low = 21.00;
  TempValue_High = 26.00;

  RH_Status = "OK";
  RHValue_Low = 40.00;
  RHValue_High = 45.00;

  //TDS1
  TDS1_Status = "OK";
  TDS1Value_Low = 500.0;
  TDS1Value_High = 800.0;

  //TDS2
  TDS2_Status = "OK";
  TDS2Value_Low = 500.0;
  TDS2Value_High = 800.0;
  
  //Accessory ON/OFF Values
  NutePump2_ON = 500.0;
  NutePump2_OFF = 800.0;
  MixPump2_Enabled = false;

  CO2_Status = "OK";
  CO2Value_Low = 60.00;
  CO2Value_High= 75.00;

  Light_Status = "OK";
  LightValue_Low = 20.00;
  LightValue_High = 95.00;

  //Accessory ON/OFF Values
  Heater_ON = 21.00;
  Heater_OFF = 23.88;
  AC_ON = 27.00;
  AC_OFF = 23.88;
  Humidifier_ON = 40.00;
  Humidifier_OFF = 60.00;
  Dehumidifier_ON = 45.00;
  Dehumidifier_OFF = 42.50;
  NutePump1_ON = 500.0;
  NutePump1_OFF = 800.0;
  MixPump1_Enabled = false;
  CO2_ON = 40.00;
  CO2_OFF = 60.00 ;
  CO2_Enabled = false;


  //Turn all relays off and set to manual mode by default
  //Relay_States

  turnRelay(1, 0);
  turnRelay(2, 0);
  turnRelay(3, 0);
  turnRelay(4, 0);
  turnRelay(5, 0);
  turnRelay(6, 0);
  turnRelay(7, 0);
  turnRelay(8, 0);
  Relay1_State = 0;
  Relay2_State = 0;
  Relay3_State = 0;
  Relay4_State = 0;
  Relay5_State = 0;
  Relay6_State = 0;
  Relay7_State = 0;
  Relay8_State = 0;
  EEPROM.write(6, 0);
  EEPROM.write(7, 0);
  EEPROM.write(8, 0);
  EEPROM.write(9, 0);
  EEPROM.write(10, 0);
  EEPROM.write(11, 0);
  EEPROM.write(12, 0);
  EEPROM.write(13, 0);

  int Relay1_isAuto = 1;  //Water Pump 1
  int Relay2_isAuto = 1;  //Water Supply
  int Relay3_isAuto = 1;  //pH down
  int Relay4_isAuto = 1;  //Nute 1
  int Relay5_isAuto = 1;  //Nute 2
  int Relay6_isAuto = 1;  //Dehumidifier
  int Relay7_isAuto = 1;  //AC
  int Relay8_isAuto = 1;  //Light  

  //Relay isAuto
  EEPROM.write(211, Relay1_isAuto);
  EEPROM.write(212, Relay2_isAuto);
  EEPROM.write(213, Relay3_isAuto);
  EEPROM.write(214, Relay4_isAuto);
  EEPROM.write(215, Relay5_isAuto);
  EEPROM.write(216, Relay6_isAuto);
  EEPROM.write(217, Relay7_isAuto);
  EEPROM.write(218, Relay8_isAuto);


  //pH
  eepromWriteFloat(78,pH1Value_Low);
  eepromWriteFloat(82,pH1Value_High);
  eepromWriteFloat(180,pH2Value_Low);
  eepromWriteFloat(184,pH2Value_High);

  //Temp
  eepromWriteFloat(86,TempValue_Low);
  eepromWriteFloat(90,TempValue_High);
  eepromWriteFloat(94,Heater_ON);
  eepromWriteFloat(98,Heater_OFF);
  eepromWriteFloat(102,AC_ON);
  eepromWriteFloat(106,AC_OFF);

  //RH
  eepromWriteFloat(110,RHValue_Low);
  eepromWriteFloat(114,RHValue_High);
  eepromWriteFloat(118,Humidifier_ON);
  eepromWriteFloat(122,Humidifier_OFF);
  eepromWriteFloat(126,Dehumidifier_ON);
  eepromWriteFloat(130,Dehumidifier_OFF);

  //TDS1
  eepromWriteFloat(134,TDS1Value_Low);
  eepromWriteFloat(139,TDS1Value_High);
  eepromWriteFloat(144,NutePump1_ON);
  eepromWriteFloat(149,NutePump1_OFF);
  if (MixPump1_Enabled == true) {
    EEPROM.write(154,1);
  } 
  else {
    EEPROM.write(154,0);
  }

  //TDS2
  eepromWriteFloat(188,TDS2Value_Low);
  eepromWriteFloat(193,TDS2Value_High);
  eepromWriteFloat(198,NutePump2_ON);
  eepromWriteFloat(203,NutePump2_OFF);
  if (MixPump2_Enabled == true) {
    EEPROM.write(208,1);
  } 
  else {
    EEPROM.write(208,0);
  }

  //CO2
  eepromWriteFloat(155,CO2Value_Low);
  eepromWriteFloat(159,CO2Value_High);
  eepromWriteFloat(163,CO2_ON);
  eepromWriteFloat(167,CO2_OFF);
  if (CO2_Enabled == true) {
    EEPROM.write(171,1);
  } 
  else {
    EEPROM.write(171,0);
  }
  //Light
  eepromWriteFloat(172,LightValue_Low);
  eepromWriteFloat(176,LightValue_High);

  EEPROM.write(76, Light_ON_hour);
  EEPROM.write(209, Light_ON_min);
  EEPROM.write(77, Light_OFF_hour);
  EEPROM.write(210, Light_OFF_min);

  //Pump
  EEPROM.write(21,Pump_start_hour);
  EEPROM.write(22,Pump_start_min);
  EEPROM.write(23,Pump_every_hours);
  EEPROM.write(24,Pump_every_mins);
  EEPROM.write(25,Pump_for);
  EEPROM.write(26,Pump_times);

  int i = 0;
  for(i = 0; i < tmp_Pump_times; i++){
    Pump_hour_array[i]=  tmp_Pump_hour_array[i];
    Pump_min_array[i] = tmp_Pump_min_array[i];
    Pump_isAM_array[i] = tmp_Pump_isAM_array[i];
    EEPROM.write((i+27),Pump_hour_array[i]);
    EEPROM.write((i+43),Pump_min_array[i]);
    EEPROM.write((i+59),Pump_isAM_array[i]);
  }

  //Save Time Settings
  EEPROM.write(0,tmp_hour);
  EEPROM.write(1,tmp_minute);
  EEPROM.write(2,tmp_second);
  EEPROM.write(3,tmp_day);
  EEPROM.write(4,tmp_month);
  EEPROM.write(5,tmp_year);
  setTime(tmp_hour,tmp_minute,tmp_second,tmp_day,tmp_month,tmp_year);
  setSyncProvider(RTC.get);

}

