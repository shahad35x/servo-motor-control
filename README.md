# 4 Servo Motors Control
 
An Arduino program that controls 4 servo motors using Tinkercad Circuits simulation.

## Steps
 
1. Built the circuit in Tinkercad Circuits: an Arduino Uno R3 connected to 4 micro servo motors.
2. Wired each servo's signal pin to a separate digital PWM pin on the Arduino:
   - servo_1 → Pin 5
   - servo_2 → Pin 10
   - servo_3 → Pin 6
   - servo_4 → Pin 3
   All GND wires share a common ground pin, and all power wires share the 5V pin.
3. Wrote the Arduino code (`servo_control.ino`) so that all 4 servos:
   - Sweep back and forth (0° → 180° → 0°) for approximately 2 seconds.
   - Then hold steady at 90 degrees.

## Files
 
- `servo_control.ino` — Arduino code controlling the 4 servo motors
- `simulation_video.mp4` — Video recording of the working simulation
