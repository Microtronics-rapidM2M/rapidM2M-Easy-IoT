## Explanation
The examples included in the basic example collection are designed to demonstrate how to use the rapidM2M Device API. In addition to the basic handling you also find best practice examples. With the increasing number at the beginning of the name, the complexity of the example increases as well. 

## Example overview
* **[00_common_0_Main.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/00_common_0_Main.p)** <br/>
*Simple rapidM2M "Hello World"* <br/>
Prints "Hello World" to the development console once after starting the script.
* **[00_common_1_Timer_1.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/00_common_1_Timer_1.p)** <br/>
*Extended rapidM2M "Hello World" Example* <br/>
Prints "Hello World" every second to the development console
* **[00_common_1_Timer_2.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/00_common_1_Timer_2.p)** <br/>
*Extended rapidM2M "Hello World" Example* <br/>
Prints "Hello World" every 5 seconds to the development console
* **[00_common_2_get_module_info.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/00_common_2_get_module_info.p)** <br/>
Prints the information for identifying the rapidM2M hardware and the implemented API level to the development console.
* **[00_common_5_data_types.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/00_common_5_data_types.p)** <br/>
*Simple "Data Types" Example* <br/>
Example on how to implement, handle and convert integer, floating-point and boolean variables in rapidM2M projects. <br/>
* **[00_common_6_array.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/00_common_6_array.p)** <br/>
*Simple "Array" Example* <br/>
Declarations and handling of arrays and the sizeof operator <br/>
* **[00_common_7_conditional.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/00_common_7_conditional.p)** <br/>
*Simple rapidM2M "Conditional" Example* <br/>
Example on how to use if and switch statements in rapidM2M projects <br/>
* **[00_common_8_loop.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/00_common_8_loop.p)** <br/>
*Simple rapidM2M "Loop" Example* <br/>
Example on how to use loops in rapidM2M projects <br/>
* **[12_Transmission_0.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/12_Transmission_0.p)** <br/>
*Simple "Transmission" Example*<br/>
Initiates a connection to the server. The synchronisation of the configuration, registration and measurement data is automatically done by the firmware. <br/>
* **[12_Transmission_2_cyclic_connection.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/12_Transmission_2_cyclic_connection.p)** <br/>
*Extended "Transmission" Example*<br/>
Initiates a connection to the server every 2 hours. The synchronisation of the configuration, registration and measurement data is automatically done by the firmware. <br/>
* **[12_Transmission_3_ForceOnline.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/12_Transmission_3_ForceOnline.p)** <br/>
*Extended "Online Mode Transmission" Example*<br/>
Establishes and tries to maintain an online connection to the server. As long as the device is in online mode, a synchronisation of the configuration, registration and measurement data is initiated every 2 hours.<br/>
* **[50_filetransfer_send_multiple.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/50_filetransfer_send_multiple.p)** <br/>
*Extended "File transfer" Example* <br/>
Simulates receiving a big file (Uart.txt) from e.g. UART and sends it to the server. <br/>
* **[61_alarm_1.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/61_alarm_1.p)** <br/>
*Simple "Alarm" Example* <br/>
Simulates and records (record interval) a temperature value that changes between 19°C and 31°C in 1°C steps. The measurement data generated this way is then transmitted periodically (transmission interval) to the server. If the temperature exceeds 25°C, an alarm is triggered. Once an alarm has been triggered and the temperature falls below 25°C again, the alarm is released. In both cases (when triggering or releasing the alarm) an alarm record is generated and transmitted to the server immediately.<br/>
* **[61_alarm_2.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/61_alarm_2.p)** <br/>
*Extended "Alarm" Example* <br/>
Simulates and records (record interval) a temperature value that changes between 19°C and 31°C in 1°C steps. The measurement data generated this way is then transmitted periodically (transmission interval) to the server. If the temperature is greater than or equal to 25°C, an alarm is triggered. Once an alarm has been triggered and the temperature falls to or below 25°C - 5% (i.e. 23,75°C) again, the alarm is released. In both cases (when triggering or releasing the alarm) an alarm record is generated and transmitted to the server immediately. </br>
* **[61_alarm_3.p](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/61_alarm_3.p)** <br/>
*Extended "Alarm" Example* <br/>
Simulates and records (record interval) a temperature value that changes between 19°C and 31°C in 1°C steps. The measurement data generated this way is then transmitted periodically (transmission interval) to the server. If the temperature is greater than or equal to 25°C, an alarm is triggered. Once an alarm has been triggered and the temperature falls to or below 25°C - 5% (i.e. 23,75°C) again, the alarm is released. In both cases (when triggering or releasing the alarm) an alarm record is generated and transmitted to the server immediately. </br>
* **[Alarm.inc](https://github.com/Microtronics-rapidM2M/rapidM2M-EasyIoT/blob/master/Examples/Basic_Examples_Collection/Alarm.inc)** <br/>
*Alarm interface functions* <br/>
Provides generic functions and constants for alarm implementation. <br/>

## rapidM2M Device API functions used in the examples 

Click on the name of the function to view in which example it is used.

### [Timer, date & time](http://support.microtronics.com/Developer_Documentation/Content/Developer_Documentation/sw/Pawn_rM2M_Time.htm)

<details>
<summary>**rM2M_GetTime(&hour=0, &minute=0, &second=0, timestamp=0)**</summary>
+ 50_filetransfer_send_multiple.p <br/>
</details>

<details>
<summary>**rM2M_GetDate(&year=0, &month=0, &day=0, timestamp=0)**</summary>
+ 00_common_7_conditional.p <br/>
</details>

<details>
<summary>**rM2M_GetDateTime(datetime[TrM2M_DateTime])**</summary>
+ 00_common_7_conditional.p <br/>
</details>

<details>
<summary>**rM2M_TimerAdd(funcidx)**</summary>
+ 00_common_1_Timer_1.p<br/> 
+ 12_Transmission_2_cyclic_connection.p<br/>  
+ 12_Transmission_3_ForceOnline.p<br/>  
+ 50_filetransfer_send_multiple.p <br/>
+ 61_alarm_1.p<br/>  
+ 61_alarm_2.p<br/>  
+ 61_alarm_3.p<br/>
</details>

<details>
<summary>**rM2M_TimerAddExt(funcidx, bool:cyclic, time)**</summary>
+ 00_common_1_Timer_1.p<br/>
+ 00_common_1_Timer_2.p<br/>  
+ 50_filetransfer_send_multiple.p<br/>
</details>

### [Uplink](http://support.microtronics.com/Developer_Documentation/Content/Developer_Documentation/sw/Pawn_rM2M_Uplink.htm)

<details>
<summary>**rM2M_TxStart(flags=0)**</summary>
+ 12_Transmission_0.p<br/>
+ 12_Transmission_2_cyclic_connection.p<br/>
+ 12_Transmission_3_ForceOnline.p<br/>
+ 61_alarm_1.p<br/>
+ 61_alarm_2.p<br/>
+ 61_alarm_3.p<br/>
</details>

<details>
<summary>**rM2M_TxSetMode(mode, flags=0)**</summary>
+ 12_Transmission_3_ForceOnline.p<br/>
+ 50_filetransfer_send_multiple.p<br/>
</details>

<details>
<summary>**rM2M_TxGetStatus(&errorcode=0)**</summary>
+ 12_Transmission_3_ForceOnline.p<br/> 
</details>

<details>
<summary>**rM2M_RecData(timestamp, const data{}, len)**</summary>
+ 61_alarm_1.p<br/>
+ 61_alarm_2.p<br/>
+ 61_alarm_3.p<br/>
+ Alarm.inc <br/>
</details>

### [Encoding](http://support.microtronics.com/Developer_Documentation/Content/Developer_Documentation/sw/Pawn_rM2M_Encoding.htm)

<details>
<summary>**rM2M_SetPackedB(data{}, pos, const block[], size)**</summary>
+ 50_filetransfer_send_multiple.p<br/>
</details>

<details>
<summary>**rM2M_Pack(const data{}, pos, &{Float,Fixed,_}:value, type)**</summary>
+ 00_common_4_pack.p <br/> 
+ 61_alarm_1.p<br/>
+ 61_alarm_2.p<br/>
+ 61_alarm_3.p<br/>
</details>

### [GPIO, IRQ](http://support.microtronics.com/Developer_Documentation/Content/Developer_Documentation/sw/Pawn_rM2M_GPIO_IRQ.htm)

<details>
<summary>**rM2M_IrqInit(irq, config, funcidx)**</summary>
+ 10_Switch.p<br/>
+ 10_Switch_Long.p<br/> 
+ 11_Status_Led_and_Button(Irq)_0.p <br/>
+ 11_Status_Led_and_Button(Irq)_1.p <br/>
</details>

### [Char & String](http://support.microtronics.com/Developer_Documentation/Content/Developer_Documentation/sw/Pawn_Erweiterungen_String_Funktionen.htm)
<details>
<summary>**strlen(const string[])**</summary>
+ 50_filetransfer_send_multiple.p<br/>
</details>

### [Various](http://support.microtronics.com/Developer_Documentation/Content/Developer_Documentation/sw/Pawn_Erweiterungen_Hilfsfunktionen.htm)

<details>
<summary>**getapilevel()**</summary>
+ 00_common_2_get_module_info.p<br/>
</details>

<details>
<summary>**CRC32(data{}, len, initial=0)**</summary>
+ 50_filetransfer_send_multiple.p<br/>
</details>

<details>
<summary>**rM2M_GetId(id[TrM2M_Id], len=sizeof id)**</summary>
+ 00_common_2_get_module_info.p<br/>
</details>

<details>
<summary>**funcidx(const name[])**</summary>
+ 00_common_1_Timer_1.p<br/>
+ 00_common_1_Timer_2.p<br/> 
+ 12_Transmission_2_cyclic_connection.p<br/>
+ 12_Transmission_3_ForceOnline.p<br/>
+ 50_filetransfer_send_multiple.p<br/>
+ 61_alarm_1.p<br/>
+ 61_alarm_2.p<br/>
+ 61_alarm_3.p<br/>
</details>

### [Console](http://support.microtronics.com/Developer_Documentation/Content/Developer_Documentation/sw/Pawn_Erweiterungen_Consolen_Funktionen.htm)

<details>
<summary>**print(const string[])**</summary>
+ 00_common_0_Main.p<br/>
+ 00_common_7_conditional.p<br/>
+ 00_common_8_loop.p<br/>
+ 61_alarm_1.p<br/>
+ 61_alarm_2.p<br/>
+ 61_alarm_3.p<br/>
+ sht31.inc<br/>
</details>

<details>
<summary>**printf(const format[], {Float,Fixed,_}:...)**</summary>
+ 00_common_1_Timer_1.p<br/>
+ 00_common_1_Timer_2.p<br/> 
+ 00_common_2_get_module_info.p<br/>
+ 00_common_3_NamedArray.p<br/> 
+ 00_common_4_pack.p<br/> 
+ 00_common_5_data_types.p<br/>
+ 00_common_6_array.p<br/>
+ 00_common_8_loop.p<br/>
+ 12_Transmission_0.p<br/>
+ 12_Transmission_2_cyclic_connection.p<br/>
+ 12_Transmission_3_ForceOnline.p<br/>
+ 50_filetransfer_send_multiple.p<br/>
+ 61_alarm_1.p<br/>
+ 61_alarm_2.p<br/>
+ 61_alarm_3.p<br/>
</details>

### [File Transfer](https://support.microtronics.com/Developer_Documentation/Content/Developer_Documentation/sw/Pawn_Erweiterungen_File_Transfer_Funktionen.htm)

<details>
<summary>**FT_Register(const name{}, id, funcidx)**</summary>
+ 50_filetransfer_send_multiple.p<br/>
</details>

<details>
<summary>**FT_SetPropsExt(id, props[TFT_Info], len=sizeof props)**</summary>
+ 50_filetransfer_send_multiple.p<br/>
</details>

<details>
<summary>**FT_Read(id, const data{}, len)**</summary>
+ 50_filetransfer_send_multiple.p<br/>
</details>

<details>
<summary>**FT_Error(id)**</summary>
+ 50_filetransfer_send_multiple.p<br/>
</details>