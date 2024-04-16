# handwired/dactyl_lynx/stm32

![handwired/dactyl_lynx](https://raw.githubusercontent.com/whitelynx/dactyl-lynx-keyboard/main/resources/skeleton-prototype.jpg)

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

## Flashing

Run `qmk flash` to start the flashingprocess. Press and hold `BOOT0`, then press and release `NRST`, and finally release `BOOT0` to enter bootloader mode. `qmk flash` will exit when the flashing process is finished.
