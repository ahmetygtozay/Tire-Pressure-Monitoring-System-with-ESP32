# ESP32 Tire Pressure Monitoring System (TPMS)

This project demonstrates a simple Tire Pressure Monitoring System (TPMS) using an ESP32 microcontroller, an HX711 load cell amplifier, a pressure sensor, and an OLED display. The system measures the tire pressure and displays it on the OLED screen. Additionally, if the pressure exceeds a specified threshold, an LED and buzzer are activated as alerts.

## Features

- Real-time tire pressure measurement
- OLED display for pressure readings
- LED and buzzer alerts for high pressure
- Compact and portable design

## Components

- ESP32 microcontroller
- HX711 load cell amplifier
- Load cell pressure sensor
- 0.96 inch OLED display (128x64 pixels)
- LED
- Buzzer
- Connecting wires and breadboard

## Circuit Diagram

[Include a link or image of the circuit diagram here]

## Installation

1. **Clone the repository:**

   ```bash
   git clone https://github.com/your-username/tpms-esp32.git
   cd tpms-esp32

2. **Installation:**

### Install Arduino IDE and ESP32 board support:

1. Follow the instructions from the [ESP32 Arduino core documentation](https://github.com/espressif/arduino-esp32) to set up the ESP32 in the Arduino IDE.

### Install required libraries:

1. Open the Arduino IDE, go to `Sketch` > `Include Library` > `Manage Libraries...`
2. Search for and install the following libraries:
   - `Adafruit SSD1306`
   - `Adafruit GFX Library`
   - `HX711`

### Open the project:

1. Open the `tpms.ino` file in the Arduino IDE.

### Upload the code:

1. Connect the ESP32 to your computer and select the correct port and board type in the Arduino IDE.
2. Click the upload button to compile and upload the code to the ESP32.

## Usage

### Power on the system:

1. Connect the ESP32 to a power source.

### Check the OLED display:

1. The current tire pressure will be displayed on the OLED screen.

### Alerts:

1. If the measured pressure exceeds 30 kg (or your specified threshold), the LED will light up, and the buzzer will sound.

## Customization

### Pressure Threshold:

1. You can change the pressure threshold by modifying the `threshold` variable in the `tpms.ino` file.

### Display Messages:

1. Modify the messages displayed on the OLED by changing the relevant lines in the code.

## Troubleshooting

### No display output:

1. Check the wiring and ensure that the OLED screen is properly connected.
2. Verify the I2C address of the OLED display.

### No pressure readings:

1. Ensure the HX711 and load cell are correctly wired and the sensor is functional.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- [Adafruit](https://www.adafruit.com/) for their libraries and hardware components.
- [ESP32 Arduino core](https://github.com/espressif/arduino-esp32) for making it easy to use ESP32 with Arduino.
