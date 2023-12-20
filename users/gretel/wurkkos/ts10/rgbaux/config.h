#undef DEFAULT_BLINK_CHANNEL
#define DEFAULT_BLINK_CHANNEL CM_AUXPRP

#define USE_AUTOLOCK

#undef DEFAULT_AUTOLOCK_TIME
#define DEFAULT_AUTOLOCK_TIME 120

// off mode: low (1)
// lockout: blinking (3)
#undef INDICATOR_LED_DEFAULT_MODE
#define INDICATOR_LED_DEFAULT_MODE ((3<<2) + 1)

// no blue tint for me please
#undef DEFAULT_2C_STYLE
#define DEFAULT_2C_STYLE 0
