#ifndef BOARD_H
#define BOARD_H

#define OSC_FREQ 8
#define USBDEVICESTRING "Doppelganger"
#define USBMFGSTRING "Tach Radio"
#define BOARD_FLASH_SECTORS 8
#define BOARD_FLASH_SIZE (1024 * 1024)

#define BOARD_ID "Doppelganger-V2"
#define INDEX_URL "https://github.com/NilujePerchut"
#define VOLUME_LABEL "DOPPEL_G"

#define BOARD_FORCE_BL_PORT GPIOA
#define BOARD_FORCE_BL_PIN 1<<10
#define BOARD_FORCE_BL_STATE 0

#define APP_ON_POR 1

#ifdef DEFINE_CONFIGDATA
__attribute__((section(".config"))) __attribute__((used)) //
const uint32_t configData[] = {
    /* CF2 START */
    513675505, 539130489, // magic
    23, 100,  // used entries, total entries

	// Start of Key/values
	// 1 --> 5
    13, 0x26, // PIN_LED = PC06
    55, 0x27, // PIN_LED1 = PC07
    100, 0x4, // PIN_A0 = PA04
    101, 0x5, // PIN_A1 = PA05
    102, 0x6, // PIN_A2 = PA06

	// 6 --> 10
    103, 0x7, // PIN_A3 = PA07
    104, 0x24, // PIN_A4 = PC04
    105, 0x25, // PIN_A5 = PC05
    150, 0x1b, // PIN_D0 = PB11
    151, 0x1a, // PIN_D1 = PB10

	// 11 --> 15
    159, 0x18, // PIN_D9 = PB08
    160, 0x19, // PIN_D10 = PB09
    161, 0x23, // PIN_D11 = PC03
    162, 0x22, // PIN_D12 = PC02
    163, 0x21, // PIN_D13 = PC01

	// 16 --> 20
    204, 0x100000, // FLASH_BYTES = 0x100000
    205, 0x30000, // RAM_BYTES =  192k
    208, 0x33991894, // BOOTLOADER_BOARD_ID = 0x33991894
    209, 0x57755a57, // UF2_FAMILY = STM32F401
    210, 0x10, // PINS_PORT_SIZE = PA_16

	// 21 --> 25
    211, 0x0, // BOOTLOADER_PROTECTION = 0
    212, 0x78, // POWER_DEEPSLEEP_TIMEOUT = 120
    214, 0xa8, // CPU_MHZ = 168
    0, 0,
    0, 0,

	// 26 --> 30
	0, 0,
	0, 0,
	0, 0,
	0, 0,
	0, 0,

	// 31 --> 40
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

	// 41 --> 50
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

	// 51 --> 60
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

	// 61 --> 70
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

	// 71 --> 80
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

	// 81 --> 90
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

	// 91 --> 100
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

    /* CF2 END */
};
#endif

#endif /* BOARD_H */

