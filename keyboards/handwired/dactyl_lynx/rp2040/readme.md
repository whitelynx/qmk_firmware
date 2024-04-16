# handwired/dactyl_lynx/rp2040

![handwired/dactyl_lynx](https://raw.githubusercontent.com/whitelynx/dactyl-lynx-keyboard/main/resources/skeleton-prototype.jpg)

The Dactyl Lynx is a parameterized, split-hand, concave, columnar, ergonomic keyboard.

This is my fork of [the original Dactyl](https://github.com/adereth/dactyl-keyboard).

* Keyboard Maintainer: [David H. Bronke](https://github.com/whitelynx)
* Hardware Supported: RP2040 TYPE-C 16MB
* Hardware Availability: [RP2040 TYPE-C 16MB](https://www.aliexpress.com/item/1005003928558306.html?spm=a2g0o.order_list.order_list_main.23.42c018022ZKVRW)


## Building

Make sure your build environment is set up first (see the [build environment setup docs](https://docs.qmk.fm/#/getting_started_build_tools) for more information), then:

Compile the firmware for this keyboard:

    qmk compile -kb handwired/dactyl_lynx -km lynx

Or, if you prefer to use `make`, after setting up your build environment:

    make handwired/dactyl_lynx:default

## Flashing

Double-tap RST to enter bootloader mode. Copy the built uf2 file to the device, for example by dragging the file to the new USB disk.
