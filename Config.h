// ---------------------------------------------------------------------------------------------------------------------------------
// Configuration for OnStep SmartWebServer Add-on

/*
 *               For more information on setting this addon up see https://onstep.groups.io/g/main/wiki/7119 
 *                           and join the OnStep Groups.io at https://groups.io/g/onstep
 * 
 *           *** Read the compiler warnings and errors, they are there to help guard against invalid configurations ***
*/

// ---------------------------------------------------------------------------------------------------------------------------------
// ADJUST THE FOLLOWING TO CONFIGURE YOUR ADD-ON'S FEATURES ------------------------------------------------------------------------
// <-Req'd = always must set, <-Often = usually must set, Option = optional, Adjust = adjust as req'd, Infreq = infrequently changed

// For Wifi successful startup an AP will appear with an SSID of "ONSTEP", after connecting: the web-site is at "192.168.0.1" and
// the cmd channel is at "192.168.0.1:9999". If locked out selecting "Erase Flash: All Flash Contents" from the Arduino Tools menu 
// before uploading/flashing again can help restore access to the ESP8266.

//      Parameter Name              Value   Default  Notes                                                                      Hint
// OPERATIONAL MODE ----------------------------------------------------------------------------------------------------------------
#define OPERATIONAL_MODE             WIFI //   WIFI, Or use ETHERNET_W5100 or ETHERNET_W5500                                  Adjust

// SERIAL PORTS --------------------------------------------------------------------------------------------------------------------
#define SERIAL_BAUD_DEFAULT          9600 //   9600, Common baud rates for this parameter are 9600,19200,57600,115200,etc.    Infreq
                                          //         The OnStep serial port this is wired to must use the same rate above.
#define SERIAL_BAUD                 57600 //  57600, Or use 19200,57600,115200,230400,460800 (not all devices support > 115200)
                                          //         (OnStep and here.)  Automatically uses 19200 if talking to a Mega2560 OnStep.
#define SERIAL_SWAP                  AUTO //   AUTO, Automatic check both, ON for swapped port or OFF for default port only.  Infreq
                                          //         this option is ignored in ETHERNET modes

// STATUS LED ----------------------------------------------------------------------------------------------------------------------
#define LED_STATUS                     ON //     ON, Enable LED flashes while connecting then steady once connected.          Infreq

// DISPLAY -------------------------------------------------------------------------------------------------------------------------
#define DISPLAY_LANGUAGE             L_en //   L_en, English. Specify language with two letter country code, if supported.    Adjust
#define DISPLAY_WEATHER               ON //    OFF, ON ambient conditions in locale default units.                           Option
#define DISPLAY_INTERNAL_TEMPERATURE  ON //    OFF, ON internal MCU temp. in locale default units.                           Option
#define DISPLAY_WIFI_SIGNAL_STRENGTH   ON //     ON, Wireless signal strength reported via web interface. OFF otherwise.      Option
#define DISPLAY_RESET_CONTROLS         ON //     ON, ON to allow reset of OnStep, FWU for STM32 firmware upload pin HIGH.     Option

#define DISPLAY_SPECIAL_CHARS          ON //     ON, For standard ASCII special symbols (compatibility.)                      Infreq
#define DISPLAY_ADVANCED_CHARS         ON //     ON, For standard "RA/Dec" instead of symbols.                                Infreq
#define DISPLAY_HIGH_PRECISION_COORDS ON //    OFF, ON for high precision coordinate display on status page.                 Infreq

// DRIVE CONFIGURATION -------------------------------------------------------------------------------------------------------------
#define DRIVE_CONFIGURATION            ON //    ON, to display/modify mount, rotator, focuser settings                        Option
#define DRIVE_MAIN_AXES_MICROSTEPS     ON //    ON, to display Axis1/2 Microsteps if available.                               Option
#define DRIVE_MAIN_AXES_CURRENT        ON //    ON, to display Axis1/2 IRUN if available.                                     Option
#define DRIVE_MAIN_AXES_REVERSE        ON //    ON, to display Axis1/2 Reverse if available.                                  Option

// COMMAND SERVER CHANNELS ---------------------------------------------------------------------------------------------------------
#define COMMAND_SERVER               BOTH //   BOTH, for STANDARD (port 9999) and PERSISTENT (ports 9996 to 9998)
                                          //         or disable with OFF

// ENCODER SUPPORT -----------------------------------------------------------------------------------------------------------------
// Some of these settings are stored in NV (EEPROM) as the default values when first uploaded.  Later changes below may be
// ignored unless NV is wiped or you configure to revert to the defaults again at runtime.
#define ENC_AUTO_SYNC_DEFAULT          ON //     ON, Automatically sync Encoders to OnStep.                                   Option
#define ENC_AUTO_SYNC_MEMORY          OFF //    OFF, ON Remember automatic sync setting across power cycles.                  Option

#define AXIS1_ENCODER                 OFF //    OFF, AB, CW_CCW, PULSE_DIR, AS37_H39B_B. RA/Azm Axis (A/MA) & (B/SLO.)        Option
#define AXIS1_ENCODER_TICKS_DEG  22.22222 // 22.222, n, (ticks/degree.) Encoder ticks per degree.                             Adjust
#define AXIS1_ENCODER_REVERSE         OFF //    OFF, ON to reverse the count direction.                                       Adjust
#define AXIS1_ENCODER_DIFF_LIMIT_TO   300 //    300, n, (arcsec.) Minimum diff. between encoder/OnStep for sync. to OnStep    Adjust
#define AXIS1_ENCODER_DIFF_LIMIT_FROM OFF //    OFF, n, (arcsec.) Maximum diff. between encoder/OnStep for sync. from OnStep  Adjust
                                          //         for absolute encoders.

#define AXIS2_ENCODER                 OFF //    OFF, AB, CW_CCW, PULSE_DIR, AS37_H39B_B. Dec/Alt Axis (A/MA) & (B/SLO.)       Option
#define AXIS2_ENCODER_TICKS_DEG  22.22222 // 22.222, n, (ticks/degree.) Encoder ticks per degree.                             Adjust
#define AXIS2_ENCODER_REVERSE         OFF //    OFF, ON to reverse the count direction.                                       Option
#define AXIS2_ENCODER_DIFF_LIMIT_TO   300 //    300, n, (arcsec.) Minimum diff. between encoder/OnStep for sync. to OnStep.   Adjust
#define AXIS2_ENCODER_DIFF_LIMIT_FROM OFF //    OFF, n, (arcsec.) Maximum diff. between encoder/OnStep for sync. from OnStep. Adjust
                                          //         for absolute encoders.

// THAT'S IT FOR USER CONFIGURATION!
// -------------------------------------------------------------------------------
#include "Extended.config.h"
