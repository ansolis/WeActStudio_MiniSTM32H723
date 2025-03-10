# Driving the 1.5" OLED display with the WeAct Studio MiniSTM32H723 board

## Overview
Firmware project for the WeAct Studio MiniSTM32H723 board to drive the
1.5" OLED display based on the SSD1351 controller. The display has 128x128
pixels with 16 bit color depth and uses a SPI bus for communication.

The project was created in STM32CubeIDE 1.17.0

## Attribution
This project is based on the project by Aleksander Alekseev
found at https://github.com/afiskon/stm32-ssd1351

See the original license from his project in the LICENSE file.

## Hardware Setup
The board uses SPI2 to drive the OLED display:
- PB13: OLED SPI2 SCK
- PB15: OLED SPI2 MOSI
- PB0:  OLED Reset
- PC0:  OLED SPI2 Chip Select (CS)
- PC1:  OLED Data/command select (DC)
