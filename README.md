# WeActStudio_MiniSTM32H723 Board

## Overview
Firmware projects for the MiniSTM32H723 board from WeActStudio.
Partially based on the examples from https://github.com/WeActStudio/WeActStudio.MiniSTM32H723

Board: WeAct-STM32H723VGT6 STM32H723 STM32H7 STM32 Core Board Demo Board purchased \
from: https://www.aliexpress.us/item/3256805686623352.html

HW:
- STM32H723VGT6
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
