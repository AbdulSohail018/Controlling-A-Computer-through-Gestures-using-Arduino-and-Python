# Gesture Control Interface for PC Applications
This project aims to enhance accessibility on PC computers by developing a command interface that interprets human gestures. The primary goals include improving ease of access, enhancing the quality of service, and increasing the sensitivity and accuracy of inputs. The Gesture Control Interface addresses the language barrier associated with keyboards, offering an intuitive, physical method similar to conversation for input and control of PC applications.

**Project Overview**
The project employs Ultrasonic Sensors to measure the distance from the sensor to an object in front of it. This distance information is utilized to identify hand motions and their positions relative to the PC. The Arduino Control Board processes this data and transmits it to the PC through the USB Serial Port. A Python script, leveraging the pyserial and pyautogui libraries, then interprets the serial input, translating it into commands for the corresponding application.

**Key Objectives**
Accessibility Improvement: Enhance accessibility for PC users through gesture controls.
Quality of Service: Improve the quality of service by providing a reliable and efficient gesture recognition system.
Language Barrier Removal: Overcome language barriers associated with traditional keyboards, enabling users of non-English languages to interact seamlessly.

**Components Used**
1. Ultrasonic Sensors
2. Arduino Control Board
3. USB Serial Port
4. Python script (utilizing pyserial and pyautogui libraries)

**Getting Started**
To use the Gesture Control Interface, follow these steps:

1. Hardware Setup: Connect Ultrasonic Sensors to the Arduino Control Board.
2. Software Setup: Upload the Arduino code and run the Python script on your PC.
3. Start Gesturing: Begin using gestures to control common applications on your PC.

Feel free to explore and modify the project to suit your specific needs. This Gesture Control Interface offers a novel approach to human-computer interaction, promoting accessibility and user-friendly interactions.
