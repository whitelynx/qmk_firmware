# handwired/dactyl_lynx/stm32

![handwired/dactyl_lynx](https://raw.githubusercontent.com/whitelynx/dactyl-keyboard/master/resources/preview.png)

The Dactyl Lynx is a parameterized, split-hand, concave, columnar, ergonomic keyboard.

This is my fork of [the original Dactyl](https://github.com/adereth/dactyl-keyboard).

* Keyboard Maintainer: [David H. Bronke](https://github.com/whitelynx)
* Hardware Supported: [STM32F4xx Blackpill](https://github.com/WeActStudio/WeActStudio.MiniSTM32F4x1)
* Hardware Availability: [STM32F4xx Blackpill](https://www.aliexpress.com/item/1005005953179540.html)

Make example for this keyboard (after setting up your build environment):

    make handwired/dactyl_lynx/stm32:default

Flashing example for this keyboard:

    make handwired/dactyl_lynx/stm32:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
