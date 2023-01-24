# LDR Sensor with ESP8266-12E + Blynk IoT

<img src="/circuit.jpg">

This project involves using an LDR sensor and a button in a Blynk app to control a servo motor and an LED. The LDR sensor is used to detect the ambient light level and open or close the servo motor based on the sensor's reading. The button in the Blynk app is used to turn an LED on or off. This project demonstrates the ability to remotely control physical devices using a Blynk app and an ESP8266 microcontroller.


<br/>

## Author
- JEHOVAH YII ZUI HON TB20091

<br/>

## Teammate
- DAVEIYN A/L MUTHU SELWANATHAN TB21011


<br/>

## Materials
- 1 X Servo Motor
- 1 X Green LED
- 1 X Blue LED
- 1 X White LED
- 1 X LDR Sensor
- 1 X ESP8266-12E
- Blynk IoT


<br/>

## Demonstration Video 
[https://youtu.be/r4WrYoSOUYg](https://youtu.be/r4WrYoSOUYg)

<br/>

## Important
> Make sure you use your own mobile hotspot, as university WIFI and public WIFI block the SSID connection
> The ssid is your mobile hotspot Network name and the pass is your mobile hotspot password

<br/>

## Setup 
1. Go to [https://blynk.io/](https://blynk.io/)
2. Sign up using your email
3. Download Blynk IoT from [PlayStore](https://play.google.com/store/apps/details?id=cloud.blynk) or [App Store](https://apps.apple.com/us/app/blynk-iot/id1559317868) in your phone.
4. Create a prototype as shown in figure below:
   <br/>
      <img src="/main.jpg" width="250">
   <br/>
5. Once done, setup up the components: 
   <br/>
      <img src="/control.jpg" width="250">
   <br/>
5. Setup the Datastream for LEDs and LDR sensor respectively
   - V1 for LDR (change the MAX value to 300)
   - V2 for Green LED
   - V3 for White LED
   - V4 for Blue LED
   - V13 for RUN button
   - V14 for PAUSE button
   - V15 for STOP button
   - SuperChart to display the graph
6. Connect the circuit as shown in the diagram above 

<br/>

## Connection
| ESP8266     | Components                |
| ----------- | -----------               |
| D4          | Servo - orange            |
| 3V          | Servo - red               |
| D4          | Servo - chocolate         |
| D5          | Blue LED (+)              | 
| D6          | White LED (+)             | 
| D7          | Green LED (+)             | 
| A0          | LDR Sensor (any leg)      | 
| G           | Breadboard (-)            |
| Vin         | Breadboard (+)            |

> The other left behind leg are connected to the ground

<br/>

### Like this project? You can show your appreciation by buying Hovah a coffee ☕
<a target="_blank" rel="noopener noreferrer" href="https://www.buymeacoffee.com/hovahyii">
<img src="https://github.com/appcraftstudio/buymeacoffee/raw/master/Images/snapshot-bmc-button.png" width="300" style="max-width:100%;">
</a>

<br/>
