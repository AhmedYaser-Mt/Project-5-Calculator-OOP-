# 🧮 OOP Calculator – Encapsulation & Abstraction Demo

This project is a simple **Calculator** implemented in **C++** as part of the 10th course on the [AbouHadhood Platform](https://programmingadvices.com/).  
The goal is to **demonstrate the principles of Encapsulation and Abstraction** using a single class.

---

## 🚀 Features
- Basic arithmetic operations:  
  ➕ Add  
  ➖ Subtract  
  ✖️ Multiply  
  ➗ Divide (handles division by zero by replacing 0 with 1 – for demo purposes)

- Operation history tracking:
  - Last operation performed
  - Last number used
  - Previous result before the last operation

- Utility functions:
  - `Clear()` → resets the calculator  
  - `CancelLastOperation()` → undo the last operation  
  - `PrintResult()` → displays the result after each operation  
  - `GetFinalResult()` → fetches the final result  

---


## 🎯 Concepts Practiced
- **Encapsulation** → data members (`_Result`, `_LastNumber`, etc.) are hidden in the private section.  
- **Abstraction** → unnecessary details (like division-by-zero handling via `_IsZero`) are hidden from the user of the class.  

---
