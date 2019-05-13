#include "DeviceSelector.h"

extern u8 led_pin = 0;
extern u8 sys_led_pin = 0;

extern u32 led_color_correction = 0xFFFFFFFF;

extern bool support_wrgb = 0;

extern u8 brightness_button = 0;
extern u8 flash_button = 0;

//EEPROM
extern bool eeprom_enable = 0;
extern u32 eeprom_user_adds_0 = 0;
extern u32 eeprom_user_adds_1 = 0;
extern u32 eeprom_palette_adds_0 = 0;
extern u32 eeprom_palette_adds_1 = 0;
extern u32 eeprom_sys_adds_0 = 0;
extern u32 eeprom_sys_adds_1 = 0;
extern u32 eeprom_pagesize = 0;

void loadDeviceConfig()
{
  switch(MATRIX_MODEL)
  {
    case MXLS: //MXlS Matrix Light Strip

                          switch(MATRIX_VERSION)
                          {
                            case 1:
                            loadConfigSTLINKV2M1();
                            break;

                          }
    break;
  }
}