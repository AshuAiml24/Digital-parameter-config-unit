# OLED I2C - Arduino UNO R4

## Project
Simple Arduino project that initializes an SSD1306 128x64 OLED over I2C and prints a few lines on startup.

Files:
- `src/main.cpp` — application entry (setup + loop).

## Using
- IDE: `CLion`
- Tested on: `Windows`

## IDE Version
- `CLion 2025.3.2`

## Code overview
- Initializes `Serial` at 9600.
- Initializes `Adafruit_SSD1306` 128x64 via I2C (typical address `0x3C`).
- Clears display, sets text color and cursor, prints a few lines, calls `display.display()`.
- `loop()` is empty (place runtime logic here).

## Libraries
- `Arduino.h` (core)
- `Wire` (I2C)
- `Adafruit_GFX`
- `Adafruit_SSD1306`

Install via Arduino Library Manager, PlatformIO, or `arduino-cli`.

## Dependencies
- Arduino core for `Arduino UNO R4`
- `arduino-cli` or Arduino IDE / PlatformIO for building and uploading
- I2C support (Wire)
- USB drivers for Windows

## Components (used with the OLED)
- OLED module: `SSD1306 128x64` I2C (commonly `0x3C`)
- Microcontroller: `Arduino UNO R4`
- Typical wiring:
  - OLED `VCC` → `3.3V` or `5V` (check module)
  - OLED `GND` → `GND`
  - OLED `SDA` → UNO R4 `SDA`
  - OLED `SCL` → UNO R4 `SCL`
  - Optional: pull-up resistors if module lacks them
- Jumper wires, breadboard (optional)

## Build & Upload (brief)
- PlatformIO: open in CLion with PlatformIO plugin, select `Arduino UNO R4`, build & upload.
- Arduino CLI:
  1. Install and configure `arduino-cli`.
  2. Install board core and required libraries.
  3. From project root: build and upload selecting UNO R4 board and correct port.
- In CLion, use external tools or Run Configurations that call `arduino-cli` or `pio`.

## Software & Hardware Requirements
Software:
- `Windows` (development machine)
- `CLion 2025.3.2`
- `arduino-cli` or Arduino IDE / PlatformIO
- Libraries: `Adafruit_GFX`, `Adafruit_SSD1306`, `Wire`

Hardware:
- `Arduino UNO R4`
- `SSD1306 128x64` I2C OLED (address `0x3C` typical)
- USB cable, jumper wires, (optional) breadboard, power source

## Author
- Name: Ashupal  
- GitHub: `AshuAiml24`
