# WeActStudio_MiniSTM32H723 Board

## Overview
Firmware projects for the MiniSTM32H723 board from WeActStudio.
Partially based on the examples from https://github.com/WeActStudio/WeActStudio.MiniSTM32H723

Board: WeAct-STM32H723VGT6 STM32H723 STM32H7 STM32 Core Board Demo Board purchased \
from: https://www.aliexpress.us/item/3256805686623352.html

HW:
- STM32H723VGT6 (100-pin)
- 550Mhz Max. Freq
- 1024KB ROM, 564KB RAM
- 8MB SPI Flash
- 8MB QSPI Flash
- MicrSD card reader
- 0.96" LCD based on ST7735 TFT-LCD driver chip
- USB FS interface with USB-C connector
- Reset and Boot0 buttons as well as a user button
- Blue user LED
- Red power LED
- 8-bit DCMI interface for camera
- STM32 USB DFU bootloader support over USB
- 4-pin SWD debug header (no SWO)


The project was created in STM32CubeIDE 1.17.0

## Add clang-format support
1. Install [clang-format](https://marketplace.visualstudio.com/items?itemName=xaver.clang-format)
extension for VSCode called "Clang-Format" by Xaver Hellauer.
2. Install clang-format for Windows by either downloading LLVM from [here](https://releases.llvm.org/)
or running the following command in the VSCode terminal:
```
winget install -e --id LLVM.LLVM
```
3. Add the following to the VSCode settings.json user or workspace file (CTRL+SHIFT+P, then
type in "settings.json" to open the settings file):
```
    "editor.formatOnSave": true,
    "clang-format.executable": "C:\\Program Files\\LLVM\\bin\\clang-format.exe",
    "[c]": {
        "editor.defaultFormatter": "xaver.clang-format"
    }
```
4. Restart VSCode.


## Pin Mapping
SPI1 - SPI Flash:
- SPI1_SCK:  PB3
- SPI1_MOSI: PD7
- SPI1_MISO: PB4
- SPI_FLASH_CS: PD6

QSPI1 - QSPI Flash:
- QSPI_BK1_IO3: PD13
- QSPI_BK1_IO2: PE2
- QSPI_BK1_IO1: PD12
- QSPI_BK1_IO0: PD11
- QSPI_CLK:     PB2
- QSPI_BK1_NCS: PB6

SPI4 - LCD:
- SPI1_SCK:  PE12
- SPI1_MOSI: PE14
- LCD_WR_RS: PE13
- LCD_CS:    PE11
- LCD_BL:    PE10

USB-OTG:
- DM: PA11
- DP: PA12

Button:
- PC13

Blue LED:
- PE3

SPI2 - Available
- SPI2_SCK:  PA9, PA12, PB10, PB13, PD3
- SPI2_MOSI: PC1, PC3, PB15
- SPI2_MISO: PB14, PC2

SPI3 - Available
- SPI3_SCK:  PC10,
- SPI3_MOSI: PB5, PC12
- SPI3_MISO: PC11

Good choice for SPI2 on header P1:
- SPI2_SCK:  PB13
- SPI2_MOSI: PB15
- SPI2_MISO: PB14

Good choice for SPI3 on header P1:
- SPI3_SCK:  PC10,
- SPI3_MOSI: PC12
- SPI3_MISO: PC11


## Using Keil uVision
- Follow the instructions [here](https://www.keil.arm.com/mdk-community/)
to download and install the Keil uVision software. Also, fill out the
form with your information on the download page (this may be an optional step?).
After completing the form, you will receive an email with a confirmation link.
- Follow the instructions to request the free license from Keil through
the installed uVision software.
- More installation instruction can be found
[here](https://developer.arm.com/documentation/101407/0541/About-uVision/Installation).
- During the SW installation, you will be prompted to install packages for various
devices via the Pack Installer. You can skip this step and just close the Pack
Installer window.
- Launch uVision you just installed and follow the instructions at the first link
to request the free license.
- Open the project file WeAct_Onboard_Peripherals/MDK-ARM/WeAct_Onboard_Peripherals.uvprojx
via the Project => Open Project menu.
- Open Project => Options for Target ..., in the Options dialog select the Target
tab and under Code Generation, select "Use default compiler version 6".
- You can now build the project and start debugging. The project is set up to use CMSIS-DAP
debug probe.
