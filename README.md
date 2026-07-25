# 🎨 Arduino HuskyLens Color Detection

A real-time color detection system built using **Arduino Uno**, **HuskyLens AI Camera**, and an **RGB LED**.

The HuskyLens camera recognizes trained colors using the **Color Recognition** algorithm and sends the detected color ID to the Arduino through the **I2C protocol**. Based on the detected ID, the Arduino lights the corresponding RGB LED.

---

# 📌 Project Overview

This project demonstrates color recognition using the HuskyLens AI camera.

The system was trained to recognize:

- 🔵 Blue
- 🟢 Green
- 🔴 Red

When a trained color is detected, the corresponding RGB LED turns on.

---

# 🛠 Hardware Components

- Arduino Uno
- HuskyLens AI Camera
- RGB LED (Common Anode)
- Breadboard
- Jumper Wires
- 220Ω Resistors
- USB Cable

---

# 💻 Software Requirements

- Arduino IDE
- HuskyLens Library
- Wire Library

---

# 🔌 Wiring

### HuskyLens → Arduino

| HuskyLens | Arduino |
|-----------|----------|
| VCC | 5V |
| GND | GND |
| SDA | SDA |
| SCL | SCL |

### RGB LED

| LED Color | Arduino Pin |
|-----------|-------------|
| Red | D10 |
| Green | D9 |
| Blue | D11 |

---

# ⚙️ How It Works

1. Connect HuskyLens to Arduino using the I2C interface.
2. Upload the Arduino code.
3. Select the **Color Recognition** algorithm on HuskyLens.
4. Train the Blue, Green, and Red colors.
5. Present a trained color to the camera.
6. HuskyLens identifies the color and sends its ID to the Arduino.
7. The Arduino turns on the matching RGB LED.

---

# 💻 Code Explanation

The Arduino program:

- Initializes the HuskyLens camera.
- Starts I2C communication.
- Uses the **Color Recognition** algorithm.
- Reads the detected color ID.
- Controls the RGB LED according to the detected color.

| Color ID | LED |
|----------|-----|
| 1 | 🔵 Blue |
| 2 | 🟢 Green |
| 3 | 🔴 Red |

If no trained object is detected, all LEDs remain OFF.

---


# 🚀 Future Improvements

- Detect additional colors.
- Display the detected color on an OLED display.
- Add sound feedback using a buzzer.
- Expand the system for object sorting applications.

---

# 👩‍💻 Author

**Ebtihal Fawaz Alamri**

Computer and Network Engineering Student

University of Jeddah
