# 🎨 Arduino HuskyLens Color Detection

A color detection system built using **Arduino Uno**, **HuskyLens**, and an **RGB LED**.  
The HuskyLens camera detects trained colors and sends the detected color ID to the Arduino through the I2C protocol. According to the detected color, the corresponding RGB LED lights up.

---

## 📌 Project Overview

This project demonstrates real-time color recognition using the HuskyLens AI camera. Three colors were trained:

- 🔵 Blue
- 🟢 Green
- 🔴 Red

When a color is recognized, the RGB LED lights with the matching color.

---

## 🛠 Hardware Components

- Arduino Uno
- HuskyLens AI Camera
- RGB LED (Common Anode)
- 220Ω Resistors
- Breadboard
- Jumper Wires
- USB Cable

---

## 📚 Software

- Arduino IDE
- HuskyLens Library
- Wire Library

---

## ⚡ Wiring

| HuskyLens | Arduino |
|-----------|----------|
| VCC | 5V |
| GND | GND |
| SDA | SDA |
| SCL | SCL |

### RGB LED

| LED Pin | Arduino Pin |
|---------|-------------|
| Red | D10 |
| Green | D9 |
| Blue | D11 |

---

# 📂 Project Structure

```
Arduino-HuskyLens-Color-Detection/
│
├── README.md
├── Color_Detection.ino
│
└── images/
    ├── setup.jpg
    ├── blue-detection.jpg
    ├── green-detection.jpg
    ├── red-detection.jpg
    └── color-detection-red-green-demo.png
```

---

# 🚀 How It Works

1. Upload the Arduino code.
2. Connect HuskyLens through I2C.
3. Select **Color Recognition** algorithm.
4. Train Blue, Green, and Red colors.
5. Present a trained color to the camera.
6. HuskyLens sends the detected ID.
7. Arduino turns on the corresponding RGB LED.

---

# 💻 Code Explanation

The Arduino program performs the following tasks:

- Initializes communication with HuskyLens using I2C.
- Starts the Color Recognition algorithm.
- Reads the detected object ID.
- Controls the RGB LED according to the detected color.

| Color ID | LED |
|----------|-----|
| 1 | 🔵 Blue |
| 2 | 🟢 Green |
| 3 | 🔴 Red |

If no trained color is detected, all LEDs remain OFF.

---

# 📷 Project Images

## Hardware Setup

![Hardware Setup](images/setup.jpg)

---

## Blue Detection

![Blue Detection](images/blue-detection.jpg)

---

## Green Detection

![Green Detection](images/green-detection.jpg)

---

## Red Detection

![Red Detection](images/red-detection.jpg)

---

## Detection Results

![Detection Results](images/color-detection-red-green-demo.png)

---

# 💻 Arduino Code

The complete Arduino source code is available in:

```
Color_Detection.ino
```

---

# 🎯 Results

✅ Successfully recognized three trained colors.

✅ Activated the matching RGB LED.

✅ Real-time communication between HuskyLens and Arduino.

---

# 🔮 Future Improvements

- Detect more colors.
- Display color names on an OLED screen.
- Add a buzzer for audio feedback.
- Control external devices based on detected colors.

---

## 👩‍💻 Author

**Ebtihal**

Computer and Network Engineering Student

University of Jeddah
