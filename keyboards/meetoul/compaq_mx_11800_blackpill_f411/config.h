#pragma once

#define PS2_DATA_PIN    A13
#define PS2_CLOCK_PIN   A14

// Applies a transformation to the movement before sending to the host (see link)
#define PS2_MOUSE_USE_2_1_SCALING

// Define a lower presition for move
#define PS2_MOUSE_X_MULTIPLIER 3
#define PS2_MOUSE_Y_MULTIPLIER 3
#define PS2_MOUSE_V_MULTIPLIER 1

// Define a higher presition on scroll
#define PS2_MOUSE_SCROLL_DIVISOR_H 3
#define PS2_MOUSE_SCROLL_DIVISOR_V 3

// Swap left/rigth mouse buttons
//#define PS2_MOUSE_INVERT_BUTTONS

// Define Scroll button (this is the button after invert)
// #define PS2_MOUSE_SCROLL_BTN_MASK (1 << PS2_MOUSE_BTN_LEFT)

#define LED_SCROLL_LOCK_PIN A2
#define LED_CAPS_LOCK_PIN   A1
#define LED_NUM_LOCK_PIN    A0
