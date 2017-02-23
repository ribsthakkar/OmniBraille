import mraa
import time

led = mraa.Gpio(1)
led.dir(mraa.DIR_OUT)
led2 = mraa.Gpio(4)
led2.dir(mraa.DIR_OUT)
while True:
    led.write(1)
    led2.write(1)
    time.sleep(5)
    led.write(0)
    led2.write(0)
    time.sleep(2)
