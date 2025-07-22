# Doll House Project 🏠 (First-Year Arduino)

This project simulates lighting and ventilation inside a miniature doll house using an Arduino.  
It uses **7 switches** to control **5 LEDs** (for lights) and **2 fans** (via motors).

---

## 🧠 Features

- 5 switches control 5 individual LEDs (room lights)
- 2 switches control 2 fans
- Uses Arduino’s built-in `INPUT_PULLUP` for simple wiring
- Minimal code logic — great for learning input/output control

---

## 🔌 Pin Configuration

### Switches (Inputs):
| Switch | Arduino Pin | Function     |
|--------|-------------|--------------|
| 1      | 13          | LED 1        |
| 2      | 12          | LED 2        |
| 3      | 11          | LED 3        |
| 4      | 10          | LED 4        |
| 5      | 9           | LED 5        |
| 6      | 8           | Fan 1        |
| 7      | 7           | Fan 2        |

### Outputs:
| Component | Arduino Pin |
|-----------|-------------|
| LED 1     | 6           |
| LED 2     | 5           |
| LED 3     | 4           |
| LED 4     | 3           |
| LED 5     | 2           |
| Fan 1     | A0          |
| Fan 2     | A1          |

---

## 💡 Circuit Note

This project uses `INPUT_PULLUP` **because the switches didn't work reliably without it.**

- `INPUT_PULLUP` makes the pin **HIGH by default**, and **LOW when the switch is pressed (connected to GND)**.
- This is useful when your switches don’t have external pull-down resistors or behave inconsistently.
- ⚠️ If your switches work fine without it, or you're using external resistors, you should use plain `INPUT` instead.


---

## 🛠️ How to Use

1. Wire 7 push-button switches to pins 13–7 with common GND
2. Connect 5 LEDs (with resistors) to pins 6–2
3. Connect 2 fans via motor drivers or transistors to A0 and A1
4. Upload `doll_house.ino` to your Arduino Uno
5. Press a switch to turn on the corresponding light or fan!

---

## 🔗 EasyEDA Schematic

📎 [View the EasyEDA circuit](https://oshwlab.com/slurpiixd/1st-year)

---

## 📁 Project Files

- `Doll-House.ino` – Main Arduino sketch
- `README.md` – Project documentation

---

## 👤 Author

- **Name:** Kenneth Aldrin C. Contridas 
- **Year:** 1st Year, 2nd Semester  
- **Course/Subject:** Basic Electronics 2

