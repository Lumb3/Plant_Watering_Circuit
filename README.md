# 🌱 Plant_Watering_Circuit

An automatic plant watering system developed using Arduino 💧

## 🎯 Objective  
Design and build a fully functional **automatic plant watering circuit** using an Arduino and essential sensors to keep your plants happy and hydrated — even when you're away!

---

## 🔧 Materials Used

1. **Arduino 5V 1-Channel Relay Module (JK-5V-1RS)**  
   🔗 [Purchase here](https://shorturl.at/cDOVt)

2. **Arduino Water Pump Motor (3–5V)**  
   🔗 [Purchase here](https://shorturl.at/oQvXE)

3. **Arduino Uno R3 Compatible Practice Kit (ARD-S)**  
   🔗 [Purchase here](https://shorturl.at/X8Yei)

4. **Soil Moisture Detection Sensor Module for Arduino**  
   🔗 [Purchase here](https://shorturl.at/SH7LM)

5. **Air Hose for Water Pump**  
   🔗 [Purchase here](https://shorturl.at/lv2gv)

---

## 🧠 Step 1: Planning

Thorough planning is essential to the success of any project. Below are **two verified wiring schemes**, approved by an ECE professor, for implementing the circuit. 

### ⚙️ Option 1 – Basic Wiring Setup:

📷 ![Wiring Diagram 1](https://github.com/user-attachments/assets/e7e913be-3a02-41e6-b5c2-cfda8f21cbc1)

**Description:**

- The **Soil Moisture Sensor** uses the **Digital Output (DO)** to transmit moisture data to the Arduino.  
- **VCC** and **GND** are connected to Arduino's **5V** and **0V** (ground), respectively.  
- The **Relay Module** acts as a **switch**, powered by **5V VCC**, protecting the Arduino from current overload when the pump is active.  
- A **3–5V power supply** connects to **Common Contact (CC)** on the relay.  
- The **Water Pump** is connected to the **Normally Open (NO)** pin, activating only when the soil is dry.

📷 ![Wiring Diagram 2](https://github.com/user-attachments/assets/156b4302-d7b7-410f-8ac0-798ab03f5fc9)

