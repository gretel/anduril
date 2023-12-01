// turbo/strobe/high
#undef TACTICAL_LEVELS
#define TACTICAL_LEVELS 150,152,(RAMP_SIZE+2)

#undef SIMPLE_UI_ACTIVE
#define SIMPLE_UI_ACTIVE 0 // advanced UI by default, because it's a dev board

#undef DEFAULT_AUTOLOCK_TIME
#define DEFAULT_AUTOLOCK_TIME 120 // autolock time in minutes, 0 = disabled
