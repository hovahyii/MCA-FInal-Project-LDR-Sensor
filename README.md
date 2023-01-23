# LDR Sensor with ESP8266-12E + Blynk

! [diagram](https://github.com/hovahyii/MCA-Final-Project-LDR-Sensor/circuit.jpg)

This project uses the Blynk library to control a servo and an LED through a smartphone app. The code defines various constants and includes the necessary libraries for using Blynk, Servo, and ESP8266WiFi.


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
![figure](https://github.com/hovahyii/MCA-Final-Project-LDR-Sensor/control.jpg)
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
