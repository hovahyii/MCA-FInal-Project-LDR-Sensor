# LDR Sensor with ESP8266-12E + Blynk

![diagram](https://raw.githubusercontent.com/hovahyii/MCA-Final-Project-LDR-Sensor/main/circuit.jpg)

This project involves using an LDR sensor and a button in a Blynk app to control a servo motor and an LED. The LDR sensor is used to detect the ambient light level and open or close the servo motor based on the sensor's reading. The button in the Blynk app is used to turn an LED on or off. This project demonstrates the ability to remotely control physical devices using a Blynk app and an ESP8266 microcontroller.


<br/>

## Author
- DAVEIYN A/L MUTHU SELWANATHAN TB21011
- JEHOVAH YII ZUI HON TB20091


<br/>

## Materials
- Servo Motor
- LED
- LDR Sensor
- ESP8266-12E
- Blynk IoT


<br/>

## Demonstration Video 
[https://youtu.be/r4WrYoSOUYg](https://youtu.be/r4WrYoSOUYg)

<br/>

## Setup Blynk
1. Go to [https://blynk.io/](https://blynk.io/)
2. Sign up using your email
3. Download Blynk IoT from [PlayStore](https://play.google.com/store/apps/details?id=cloud.blynk) or [App Store](https://apps.apple.com/us/app/blynk-iot/id1559317868) in your phone.
4. Once done, setup up a prototype in Blynk IoT as shown in the figure below:
![figure](https://raw.githubusercontent.com/hovahyii/MCA-Final-Project-LDR-Sensor/main/control.jpg)
5. Setup the Datastream for LED and LDR sensor respectively
   - V1 for LDR (change the MAX value to 300)
   - V2 for LED
6. Connect the circuit as shown in the diagram above following the circuit connection

<br/>

## Connection
| ESP8266     | Components              |
| ----------- | -----------             |
| D4          | Servo - orange          |
| 3V          | Servo - red             |
| D4          | Servo - chocolate       |
| D7          | LED (+)                 | 
| A0          | LDR Sensor (any leg)    | 
| G           | Breadboard (-)          |
| Vin         | Breadboard (+)          |

<br/>

### Like this project? You can show your appreciation by buying Hovah a coffee ☕
<a target="_blank" rel="noopener noreferrer" href="https://www.buymeacoffee.com/hovahyii">
<img src="https://github.com/appcraftstudio/buymeacoffee/raw/master/Images/snapshot-bmc-button.png" width="300" style="max-width:100%;">
</a>

<br/>
