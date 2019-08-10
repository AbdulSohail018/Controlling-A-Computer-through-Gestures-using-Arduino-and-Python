# Controlling-A-Computer-through-Gestures-using-Arduino-and-Python
This project build a command interface that allows for human gestures to be interpreted by a PC to provide inputs for common applications. The objectives of the project are to improve accessibility while working on PC computers. Gesture Controls improve ease of access, Quality of Service and sensitivity and accuracy of inputs. Gesture Controls also remove the language barrier that keyboards provide to those whose dominant language is non-English, instead providing an intuitive, physical way, much like conversation, to input and control PC Applications. The project utilises Ultrasonic Sensors that measure distance from the Sensor of an object in front of them. This distance is then used to identify the motion of the hands and their position relative to the PC. This processing is performed in the Arduino Control Board and transmitted to the PC using the USB Serial Port. A python script utilising pyserial and pyautogui libraries, then processes the serial input into input commands for the corresponding application.
