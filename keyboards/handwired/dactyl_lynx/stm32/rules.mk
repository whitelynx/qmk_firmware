# Build Options
UNICODE_ENABLE = yes        # Enable outputting Unicode characters
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
STENO_ENABLE = no           # Stenography support
MIDI_ENABLE = no            # MIDI support


# split settings
# https://beta.docs.qmk.fm/developing-qmk/c-development/hardware_drivers/serial_driver
SERIAL_DRIVER = usart


QUANTUM_PAINTER_ENABLE = yes
QUANTUM_PAINTER_DRIVERS += st7789_spi

SRC += keymaps/lynx/lynx_display.c
