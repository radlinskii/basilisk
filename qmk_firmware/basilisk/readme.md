# basilisk

![basilisk keyboard](/images/finished3.jpeg)

Basilisk is an ergonomic, split, 40%, handwired, "key-welled" keyboard using WeAct RP2040 boards designed in Fusion 360

-   Keyboard Maintainer: [Ignacy Radliński](https://github.com/radlinskii)
-   Hardware Supported:
    -   [WeActStudio RP2040 board](https://github.com/WeActStudio/WeActStudio.RP2040CoreBoard)
    -   Panasonic EVQWGD001 rotary encoders
-   Hardware Availability:
    -   https://www.aliexpress.com/item/1005003708090298.html?gatewayAdapt=glo2deu
    -   https://www.aliexpress.com/item/32990950196.html

Make example for this keyboard (after setting up your build environment):

    make basilisk:default

Flashing example for this keyboard:

    make basilisk:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

-   **Physical reset button**: While holding the `BOOTSEL` button briefly press `NRST` button
-   **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
