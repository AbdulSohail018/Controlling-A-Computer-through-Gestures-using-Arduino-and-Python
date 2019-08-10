import serial
import time 
import pyautogui

ArduinoPort = serial.Serial('com3',9600) 
time.sleep(4) 

flag=0
mode = input("Enter Application Name: ")

if mode=="chrome":
    while 1:
        incoming = str (ArduinoPort.readline())
        print (incoming)

        if 'ges1' in incoming:
            pyautogui.hotkey('ctrl','-')
            time.sleep(1)
            flag=1
                      
        if 'ges2' in incoming:
            pyautogui.hotkey('ctrl','+')
            time.sleep(1)
            flag=2
                        
        if 'ges3' in incoming and flag!=3:
            pyautogui.press('home')
            flag=3
            
        if 'ges4' in incoming:        
            pyautogui.hotkey('ctrl','shift','tab')
            time.sleep(0.5)
            flag=4
            
        if 'ges5' in incoming and flag!=5:
            pyautogui.press('space')
            time.sleep(2)
            flag=5
            
        if 'ges6' in incoming and flag!=6:
            pyautogui.hotkey('shift','space')
            time.sleep(2)
            flag=6
            
        if 'ges7' in incoming and flag!=7:
            pyautogui.press('end')
            flag=7
            
        if 'ges8' in incoming:
            pyautogui.hotkey('ctrl','tab')
            time.sleep(0.5)
            flag=8
            
        if 'ges9' in incoming and flag!=9:
            pyautogui.press('esc')
            time.sleep(0.6)
            flag=9
            
        if 'ges10' in incoming and flag!=10:
            pyautogui.press('f11')
            flag=10
            
        if 'ges11' in incoming and flag!=11:
            pyautogui.hotkey('ctrl','t')
            time.sleep(0.2)
            flag=11

        incoming = "";
        ArduinoPort.reset_input_buffer()
        ArduinoPort.reset_output_buffer()
        
elif mode=="pdf":
    while 1:
        incoming = str (ArduinoPort.readline())
        print (incoming)
        
        if 'ges1' in incoming:
            pyautogui.hotkey('ctrl','-')
            time.sleep(0.3)
            flag=1
                      
        if 'ges2' in incoming:
            pyautogui.hotkey('ctrl','=')
            time.sleep(0.3)
            flag=2
            
        if 'ges4' in incoming:        
            pyautogui.hotkey('ctrl','pgup')
            time.sleep(0.5)
            flag=4
            
        if 'ges5' in incoming:
            pyautogui.press('down')
            time.sleep(0.5)
            flag=5
            
        if 'ges6' in incoming:
            pyautogui.press('up')
            time.sleep(0.5)
            flag=6
            
        if 'ges8' in incoming and flag!=8:
            pyautogui.hotkey('ctrl','pgdn')
            time.sleep(0.5)
            flag=8
            
        if 'ges9' in incoming and flag!=9:
            pyautogui.hotkey('shift','ctrl','up')
            time.sleep(1)
            flag=9
            
        if 'ges10' in incoming and flag!=10:
            pyautogui.hotkey('shift','ctrl','down')
            time.sleep(1)
            flag=10

        incoming = "";
        ArduinoPort.reset_input_buffer()
        ArduinoPort.reset_output_buffer()
        
else:
    print("Mode entered not available, choose among these: chrome , groove , vlc , pdf")
