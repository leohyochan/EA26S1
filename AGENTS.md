# EA26S1 PlatformIO Projects

## Project Structure
- `old-project/`: Documentation only (original Arduino Nano 33 IoT LED blink)
- `new-project/`: PlatformIO project for Arduino Nano 33 BLE with IMU-triggered LED (see note)

## New Project Commands (run from new-project/)
- Build: `platformio run`
- Upload: `platformio run --target upload`
- Serial Monitor: `platformio device monitor`
- Clean: `platformio run --target clean`

## Important Notes
1. The `new-project/src/main.cpp` currently implements basic LED blink (not IMU-triggered as described in README.md). Verify implementation if IMU functionality is required.
2. Requires PlatformIO Core installed and Arduino_LSM6DS3 library (specified in platformio.ini).
3. The `old-project/` contains no buildable source; only README.md.

## Development
- Board configured: `nano33ble` (Arduino Nano 33 BLE Sense)
- Framework: Arduino
- Monitor speed: 9600 baud (set in platformio.ini)

## Git Commit Policy
- `git commit` any meaningful change, and `git push` to GitHub (we don't use Pull Requests).
- Prior to any `git commit`, (1) compile code and (2) flash on target board. Do not `git commit` if this fails.
- Include in commit message if code could not be tested automatically on target due to missing feedback.
  - Example: to test IMU, a human must physically move the flashed device. You can't test this behavior automatically.

## Key Context
- Always implement a Serial message, when business logic switches from one state to another.
- Git commit and push AGENTS.md before you start the new app.
- Revise plan to conform with all "Key Context" provisions of AGENTS.md