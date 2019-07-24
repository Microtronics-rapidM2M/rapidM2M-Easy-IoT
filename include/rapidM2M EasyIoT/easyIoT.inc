#pragma library EasyIoT

/**
 * <summary>
 *   Available Devices for Module Firmware Update.
 * </summary>
 */
#define MODFW_LORA   "CMWX1ZZABZ"   /**< Murata Module (STM32L072/82 with Semtech SX1276) */

/**
 * <summary>
 *   Initialise BLE interface.
 * </summary>
 *
 * <param name="BLE">
 *   BLE interface number.
 * </param>
 * <param name="baudrate">
 *   Baudrate.
 * </param>
 * <param name="mode">
 *   Bit 0..1
 *     1 = 1 stop bit
 *     2 = 2 stop bit
 *   Bit 2..3
 *     0 = no parity
 *     1 = odd parity
 *     2 = even parity
 *   Bit 4..5
 *     0 = 7 data bits
 *     1 = 8 data bits
 *   Bit 6..7
 *     0 = no flow control
 *     1 = RTS/CTS handshake
 *   Bit 8
 * 	   0 = full duplex
 *     1 = half duplex
 * </param>
 * <param name="funcidx">
 *   Index of BLE receive function.
 *   Has to be of type: public func(const data{}, len);
 * </param>
 *
 * <returns>
 *   <em>OK</em> if successful
 *   <em>ERROR_FEATURE_LOCKED</em> if interface is not unlocked on this device (see rM2M.inc)
 *   <em>ERROR</em> if any other error occured.
 * </returns>
 */
native BLE_Init(BLE, baudrate, mode, funcidx);

/**
 * <summary>
 *   Close BLE interface.
 * </summary>
 *
 * <param name="BLE">
 *   BLE interface number.
 * </param>
 *
 * <returns>
 *   <em>OK</em> if successful
 *   <em>ERROR_FEATURE_LOCKED</em> if interface is not unlocked on this device (see rM2M.inc)
 *   <em>ERROR</em> if any other error occured.
 * </returns>
 */
native BLE_Close(BLE);

/**
 * <summary>
 *   Send data over BLE interface.
 * </summary>
 *
 * <param name="BLE">
 *   BLE interface number.
 * </param>
 * <param name="data">
 *   Array of data to send.
 * </param>
 * <param name="len">
 *   Number of bytes to send.
 * </param>
 *
 * <returns>
 *   Number of sent bytes if successful
 *   <em>ERROR_FEATURE_LOCKED</em> if interface is not unlocked on this device (see rM2M.inc)
 *   <em>ERROR</em> if any other error occured.
 * </returns>
 */
native BLE_Write(ble, const data{}, len);

/**
 * <summary>
 *   Provide rx and tx buffer for ble interface.
 *   Note: function must be called before opening Uart interface (<em>RS485_Init</em>) !
 * </summary>
 *
 * <param name="ble">
 *   Uart interface number.
 * </param>
 * <param name="rxbuf">
 *   used for buffering rxdata.
 * </param>
 * <param name="rxlen">
 *   size of provided rxbuf (number of bytes).
 * </param>
 * <param name="txbuf">
 *   used for buffering txdata.
 * </param>
 * <param name="txlen">
 *   size of provided txbuf (number of bytes).
 * </param>
 *
 * <returns>
 *   <em>OK</em> if successful, otherwise <em>ERROR</em>.
 * </returns>
 */
native BLE_Setbuf(ble, rxbuf{}, rxlen, txbuf{}, txlen);

/**
 * <summary>
 *   Initialise LoRa interface.
 * </summary>
 *
 * <param name="LoRa">
 *   LoRa interface number.
 * </param>
 * <param name="baudrate">
 *   Baudrate.
 * </param>
 * <param name="mode">
 *   Bit 0..1
 *     1 = 1 stop bit
 *     2 = 2 stop bit
 *   Bit 2..3
 *     0 = no parity
 *     1 = odd parity
 *     2 = even parity
 *   Bit 4..5
 *     0 = 7 data bits
 *     1 = 8 data bits
 *   Bit 6..7
 *     0 = no flow control
 *     1 = RTS/CTS handshake
 *   Bit 8
 * 	   0 = full duplex
 *     1 = half duplex
 * </param>
 * <param name="funcidx">
 *   Index of LoRa receive function.
 *   Has to be of type: public func(const data{}, len);
 * </param>
 *
 * <returns>
 *   <em>OK</em> if successful
 *   <em>ERROR_FEATURE_LOCKED</em> if interface is not unlocked on this device (see rM2M.inc)
 *   <em>ERROR</em> if any other error occured.
 * </returns>
 */
native LoRa_Init(LoRa, baudrate, mode, funcidx);

/**
 * <summary>
 *   Close LoRa interface.
 * </summary>
 *
 * <param name="LoRa">
 *   LoRa interface number.
 * </param>
 *
 * <returns>
 *   <em>OK</em> if successful
 *   <em>ERROR_FEATURE_LOCKED</em> if interface is not unlocked on this device (see rM2M.inc)
 *   <em>ERROR</em> if any other error occured.
 * </returns>
 */
native LoRa_Close(LoRa);

/**
 * <summary>
 *   Send data over LoRa interface.
 * </summary>
 *
 * <param name="LoRa">
 *   LoRa interface number.
 * </param>
 * <param name="data">
 *   Array of data to send.
 * </param>
 * <param name="len">
 *   Number of bytes to send.
 * </param>
 *
 * <returns>
 *   Number of sent bytes if successful
 *   <em>ERROR_FEATURE_LOCKED</em> if interface is not unlocked on this device (see rM2M.inc)
 *   <em>ERROR</em> if any other error occured.
 * </returns>
 */
native LoRa_Write(LoRa, const data{}, len);

/**
 * <summary>
 *   Provide rx and tx buffer for LoRa interface.
 *   Note: function must be called before opening Uart interface (<em>LoRa_Init</em>) !
 * </summary>
 *
 * <param name="LoRa">
 *   Uart interface number.
 * </param>
 * <param name="rxbuf">
 *   used for buffering rxdata.
 * </param>
 * <param name="rxlen">
 *   size of provided rxbuf (number of bytes).
 * </param>
 * <param name="txbuf">
 *   used for buffering txdata.
 * </param>
 * <param name="txlen">
 *   size of provided txbuf (number of bytes).
 * </param>
 *
 * <returns>
 *   <em>OK</em> if successful, otherwise <em>ERROR</em>.
 * </returns>
 */
native LoRa_Setbuf(LoRa, rxbuf{}, rxlen, txbuf{}, txlen);

/**
 * <summary>
 *   Init and configure lidcover interface.
 * </summary>
 *
 * <param name="mode">
 *   currently not used - use 0.
 * </param>
 * <param name="funcidx">
 *   Index of callback function if script mode. Function is called on lidcover state change.
 *   Has to be of type: public func(key);
 * </param>
 *
 * <returns>
 *   <em>OK</em> if successful, otherwise <em>ERROR</em>.
 * </returns>
 */
native LidCover_Init(mode, funcidx=-1);

/**
 * <summary>
 *   Close and deactivate lidcover interface.
 * </summary>
 *
 * <returns>
 *   <em>OK</em> if successful, otherwise <em>ERROR</em>.
 * </returns>
 */
native LidCover_Close();
