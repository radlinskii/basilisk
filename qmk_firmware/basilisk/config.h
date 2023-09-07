// Copyright 2023 Ignacy Radlinski (@radlinskii)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define SPLIT_HAND_PIN GP21
#define	SPLIT_HAND_PIN_LOW_IS_LEFT


#ifdef ENCODER_ENABLE
    #define ENCODERS_PAD_A { GP4 }
    #define ENCODERS_PAD_B { GP5 }
    #define ENCODER_RESOLUTION 2

    #define ENCODERS_PAD_A_RIGHT { GP4 }
    #define ENCODERS_PAD_B_RIGHT { GP5 }
    #define ENCODER_RESOLUTION_RIGHT 2
#endif


#ifdef DIP_SWITCH_ENABLE
    #define DIP_SWITCH_PINS { GP2 }
    #define DIP_SWITCH_PINS_RIGHT { GP2 }
#endif



#define TAPPING_TERM 180
#define TAPPING_TERM_PER_KEY

#define MOUSEKEY_DELAY 20
#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_MAX_SPEED 5
#define MOUSEKEY_TIME_TO_MAX 40
#define MOUSEKEY_WHEEL_MAX_SPEED 10
