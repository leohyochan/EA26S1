# EA26S1 Project

This repository contains two PlatformIO projects:

1. **old-project/**: Original LED blinking project for Arduino Nano 33 IoT
2. **new-project/**: Extended version with IMU-triggered LED blinking

## New Project Features

The new project extends the original with:
- IMU motion detection (>1.5g acceleration)
- Minimum 1 second motion duration required to trigger LED
- LED blinks only after motion detected
- LED stops blinking 5 seconds after last motion detected
- Serial output for state changes