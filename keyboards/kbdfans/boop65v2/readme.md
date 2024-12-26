# KBDFans Boop Redux

![kbdfans/boop65v2/hs_iso](imgur.com image replace me!)

This is a port of the Unicore_F1 qmk-vial firmware to qmk_firmware with VIA support.

* Keyboard Maintainer: [Laszlo Dobos](https://github.com/dobos)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make kbdfans/boop65v2/hs_iso:default

Flashing example for this keyboard:

    make kbdfans/boop65v2/hs_iso:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Compile and flash

    qmk compile -kb kbdfans/boop65v2/hs_iso -km default
    ./util/uf2conv.py -o kbdfans_boop65v2_hs_iso_default.uf2 -b 0x8004000 -c -f 0x9d5bcf10 kbdfans_boop65v2_hs_iso_default.bin

Switch keyboard to boot mode by holding Esc and plugging in the USB cable. Copy the generated `kbdfans_boop65v2_hs_iso_default.uf2` file to the USB drive.


## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available





MCU: Geehy APM32 F103CBT6
     https://global.geehy.com/product/fifth/APM32F103
     32bit ARM Cortex-M3 64KB Flash, 20KB RAM, 72MHz
     LQFP48 package
     available pins:
        PA1-PA15
        PB0-PB15

Matrix:
     9 rows, 8 cols, according to keyboard.json
     likely connected pins:

Bootloader:
    This board uses an UF2 bootloader
    set BOOTLOADER = uf2boot in rules.mk
    compile QMK
    copy uf2 file to USB drive in flashing mode

UF2 Bootloader: v23.10.19i
dapboot https://github.com/devanlai/dapboot
Model: UniCore-F1 Controller
Board-ID: STM32F103-UniCore-F1-v1.x

https://github.com/devanlai/dapboot
https://github.com/yangdigi/uf2-stm32f103




USBSTOR\DISK&VEN_YDKB&PROD_UF2_BOOTLOADER&REV_42.0\7&2DBE8C1F&0&4835574E0700005730001000&0