# 🌱 Plant_Watering_Circuit

An **automatic plant watering system** developed using Arduino 💧  
Keep your plants hydrated without lifting a finger!

---

## 🎯 Objective  

Build a **self-watering circuit** that monitors soil moisture and activates a water pump when the soil gets too dry.

---

## 🔧 Materials Used

1. **Arduino 5V 1-Channel Relay Module (JK-5V-1RS)**  
   🔗 [Purchase here](https://shorturl.at/cDOVt)

2. **Arduino Water Pump Motor (3–5V)**  
   🔗 [Purchase here](https://shorturl.at/oQvXE)

3. **Arduino Uno R3 Compatible Practice Kit (ARD-S)**  
   🔗 [Purchase here](https://shorturl.at/X8Yei)

4. **Soil Moisture Detection Sensor Module**  
   🔗 [Purchase here](https://shorturl.at/SH7LM)

5. **Air Hose for Water Pump**  
   🔗 [Purchase here](https://shorturl.at/lv2gv)

6. **Jumper Wires**  
   🔗 [Example link](https://shorturl.at/xH2F4)

---

## 🧠 Step 1: Planning

Proper planning is key! Here are **two wiring schemes** reviewed and approved by my ECE professor:

### ⚙️ Option 1 – Basic Relay Module Setup:

📷 ![Wiring Diagram 1](https://github.com/user-attachments/assets/e7e913be-3a02-41e6-b5c2-cfda8f21cbc1)

**How it works:**

- The **soil sensor** uses **Digital Output (DO)** to transmit "wet" or "dry" data to the Arduino.  
- Connect **VCC** and **GND** to Arduino’s **5V** and **0V** respectively.  
- The **relay module** acts as a **switch** to protect the Arduino from overcurrent.  
- A **3–5V battery** connects to **Common Contact (CC)**.  
- The **pump** connects to the **Normally Open (NO)** pin and activates only when the soil is dry.

---

### ⚙️ Option 2 – MOSFET-Controlled Setup:

📷 ![Wiring Diagram 2](https://github.com/user-attachments/assets/156b4302-d7b7-410f-8ac0-798ab03f5fc9)

**What's different?**

- This version uses a **[MOSFET](https://www.youtube.com/watch?v=AwRJsze_9m4)** instead of a relay to control the water pump.  
- **Caution** ⚠️: The pump is directly connected to the Arduino, which may be risky if the pump draws more current than the board can safely handle.  
- It's essential to **measure the pump’s minimum current draw** before using this method.

---

## ⚙️ Step 2: Implementation

### ✅ Soil Sensor Test

- When the sensor touches water, the **green light turns on**.  
- When the sensor is dry, the **light turns off**.  

📹 [Watch the test](https://www.youtube.com/watch?v=sHx4R_FgRFo)

---

### 🧪 Test 1: Method 1 Implementation (Relay)

📹 [Watch the circuit in action](https://www.youtube.com/shorts/cVmAhkiixCI)

📸 Implementation snapshot:  
*(Note: The pump is temporarily powered by the Arduino’s 5V pin, which is **not recommended** for long-term use. A separate power source should be used for safety.)*

![Implementation Photo](https://github.com/user-attachments/assets/f836e61f-09c0-440c-89b1-cead8887eb5a)

---

Stay tuned for:
- 🔌 **Measuring pump current draw**  
- 💻 **Uploading and testing Arduino code**  
- 🧪 **Final testing and troubleshooting guide**

Happy planting! 🌿 Let your Arduino do the watering! 😄

