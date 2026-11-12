#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Evelien Dekkers"
#define PRODUCT_NAME "Outatime Pro"
#define VOLUME_LABEL "WATCHBOOT"
#define INDEX_URL "https://github.com/evyd13/outatime-pro"
#define BOARD_ID "OUTA-PR0"

#define USB_VID 0x1209
#define USB_PID 0x8008

#define LED_PIN PIN_PA12
#define LED_PIN_PULLUP

#define BOOT_USART_MODULE                 SERCOM3
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBDMASK_SERCOM3
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PB01C_SERCOM3_PAD3
#define BOOT_USART_PAD0                   PINMUX_PB02C_SERCOM3_PAD0

#endif
