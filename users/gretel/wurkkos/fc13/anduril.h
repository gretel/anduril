// another dad edition :)

#undef USE_CONFIGURABLE_RGB_VOLTAGE_LEVELS
#undef USE_NUMBER_ENTRY_BIGNUM
#undef USE_INDICATOR_LED_WHILE_RAMPING
#undef USE_AUTOLOCK

#undef SIMPLE_UI_ACTIVE
#define SIMPLE_UI_ACTIVE 1 // simple UI by default

// double click while on goes to full-power turbo, not ramp ceiling
#undef DEFAULT_2C_STYLE
#define DEFAULT_2C_STYLE 1

#undef DEFAULT_2C_STYLE_SIMPLE
#define DEFAULT_2C_STYLE_SIMPLE 1

#undef INDICATOR_LED_DEFAULT_MODE
#define INDICATOR_LED_DEFAULT_MODE ((1<<2) + 2) // high, low

#undef RGB_LED_OFF_DEFAULT
#define RGB_LED_OFF_DEFAULT 0x11 // low orange

#undef RGB_LED_LOCKOUT_DEFAULT
#define RGB_LED_LOCKOUT_DEFAULT 0x10 // low red
