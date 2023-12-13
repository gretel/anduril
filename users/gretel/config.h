#undef SIMPLE_UI_ACTIVE
#define SIMPLE_UI_ACTIVE 0 // advanced UI by default

// turbo/strobe/high
#undef TACTICAL_LEVELS
#define TACTICAL_LEVELS 150,152,(RAMP_SIZE+2)

#undef DEFAULT_POST_OFF_VOLTAGE_SECONDS
#define DEFAULT_POST_OFF_VOLTAGE_SECONDS 0

// 0x00 = off
// 			Low		High	Blinking
// R		0x10	0x20	0x30
// R+G		0x11	0x21	0x31
// G		0x12	0x22	0x32
// G+B		0x13	0x23	0x33
// B		0x14	0x24	0x34
// R+B		0x15	0x25	0x35
// R+G+B	0x16	0x26	0x36
// Disco	0x17	0x27	0x37
// Rainbow	0x18	0x28	0x38
// Voltage	0x19	0x29	0x39

#undef RGB_LED_OFF_DEFAULT
#define RGB_LED_OFF_DEFAULT 0x35 // purple blinking

#undef RGB_LED_LOCKOUT_DEFAULT
#define RGB_LED_LOCKOUT_DEFAULT 0x19 // voltage
