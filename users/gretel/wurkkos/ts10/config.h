#define USE_AUTOLOCK

#undef DEFAULT_AUTOLOCK_TIME
#define DEFAULT_AUTOLOCK_TIME 120

// off mode: blinking (3)
// lockout: low (1)
#undef INDICATOR_LED_DEFAULT_MODE
#define INDICATOR_LED_DEFAULT_MODE ((1<<2) + 3)
