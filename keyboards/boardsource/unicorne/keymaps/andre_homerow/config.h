#pragma once

// Remove joystick pins
#undef ANALOG_JOYSTICK_Y_AXIS_PIN
#undef ANALOG_JOYSTICK_X_AXIS_PIN

// OLED Configuration
#define I2C_DRIVER I2CD1
#define OLED_TIMEOUT 120000
// enable chordal hold
// For an Achordion-like experience, I suggest enabling Permissive Hold and setting the tapping term rather high, say, 250 ms. With Chordal Hold + Permissive Hold, keys usually settle before the tapping term.
#define CHORDAL_HOLD
#define PERMISSIVE_HOLD
#define TAPPING_TERM 250