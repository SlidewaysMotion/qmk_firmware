# Do not put the microcontroller into power saving mode
# when we get USB suspend event. We want it to keep updating
# RGB effects.
NO_SUSPEND_POWER_DOWN = yes

# Misc necessities for LED driver
CIE1931_CURVE = yes
I2C_DRIVER_REQUIRED = yes

CONSOLE_DEBUG = yes
CONSOLE_ENABLE = yes

