# Vivarium (Arduino Environment Control)

#### Created by Justin Baltazar and Jason Kim

## Overview

The project utilizes an Arduino board to control the environment by adjusting the light, humidity, and temperature based on sensor readings. Relays are used to control the environment and wiring is used to connect the sensors and relays to the Arduino board. The project also includes a real-time data visualization component, which allows the user to monitor the environment in real-time.

## Features

- Dynamically adjusts light, humidity and temperature using sensors
- Control the environment using relays
- Real-time data visualization using C++ libraries
- Code and wiring diagrams provided for easy replication

## Local Installation

- Install the [Arduino IDE](https://www.arduino.cc/software)
- Download or clone the repository to your local machine
- Connect the sensors and relays to the Arduino board using the provided wiring diagram
- Upload the code to the Arduino board using the Arduino IDE
- Use the C++ libraries for data visualization to monitor the environment in real-time

## Usage

The repository includes the following files:

- `LICENSE` : contains the terms of the license for this project
- `Light_sensor.ino` : contains the code for the light sensor
- `Soil_Moisture.ino` : contains the code for the soil moisture sensor
- `Temp_Humidity_Sensor.ino` : contains the code for the temperature and humidity sensor
- `relaytest.ino` : contains the code for the relay test
- `sensor_grapher.ino` : contains the code for the data visualization component

Please note, the code and wiring diagrams provided in this repository is just an example and may need to be modified to fit your specific use case. Also, ensure to properly calibrate the sensors before use.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

By using this project, you agree to abide by the terms of the license. If you have any questions, please don't hesitate to contact us.
