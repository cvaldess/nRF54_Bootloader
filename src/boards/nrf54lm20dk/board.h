#ifndef _NRF54LM20DK_H
#define _NRF54LM20DK_H

#include "nrf_gpio.h"

// LED0 P1.22, LED1 P1.25 (active high, unlike the nRF54L15-DK)
#define LEDS_NUMBER           2
#define LED_PRIMARY_PIN       NRF_GPIO_PIN_MAP(1, 22)
#define LED_SECONDARY_PIN     NRF_GPIO_PIN_MAP(1, 25)
#define LED_STATE_ON          1

#define NEOPIXELS_NUMBER      0

// BTN0 P1.26 (DFU), BTN1 P1.09 (DFU + BTN1 -> OTA)
#define BUTTONS_NUMBER        2
#define BUTTON_1              NRF_GPIO_PIN_MAP(1, 26)
#define BUTTON_2              NRF_GPIO_PIN_MAP(1, 9)
#define BUTTON_DFU            BUTTON_1
#define BUTTON_DFU_OTA        BUTTON_2
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

// VCOM0 of the on-board J-Link on UARTE20 (P1 pins)
#define BOARD_UARTE_INSTANCE   NRF_UARTE20
#define BOARD_UARTE_IRQHandler SERIAL20_IRQHandler
#define TX_PIN_NUMBER         NRF_GPIO_PIN_MAP(1, 16)
#define RX_PIN_NUMBER         NRF_GPIO_PIN_MAP(1, 17)
#define CTS_PIN_NUMBER        0xFFFFFFFF
#define RTS_PIN_NUMBER        0xFFFFFFFF

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "Nordic"
#define BLEDIS_MODEL          "NRF54LM20-DK"

#endif
