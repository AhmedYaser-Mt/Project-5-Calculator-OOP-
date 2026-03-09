# 🧮 OOP Calculator – Encapsulation & Abstraction Demo

This project is a simple **Calculator** implemented in **C++** as part of the **Programming Advices** roadmap on the [AbouHadhood Platform](https://programmingadvices.com/).  
It demonstrates the core **OOP principles of Encapsulation and Abstraction** using a single, reusable class.

---

## 🚀 Features
- **Basic Arithmetic Operations:**  
  ➕ Add  
  ➖ Subtract  
  ✖️ Multiply  
  ➗ Divide (handles division by zero by replacing 0 with 1 – for demonstration purposes)

- **Operation History Tracking:**  
  - Tracks last operation performed  
  - Tracks last number used  
  - Tracks previous result before the last operation

- **Utility Functions:**  
  - `Clear()` → resets the calculator  
  - `CancelLastOperation()` → undo the last operation  
  - `PrintResult()` → displays the result after each operation  
  - `GetFinalResult()` → fetches the final result  

---

## 🎯 Concepts Practiced
- **Encapsulation:** data members (`_Result`, `_LastNumber`, `_PreviousResult`, `_LastOperation`) are private to the class.  
- **Abstraction:** unnecessary internal details (like `_IsZero` check) are hidden from the user, exposing only high-level operations.

---

## 🛠 Technologies Used
- **Language:** C++  
- **Paradigm:** Object-Oriented Programming (OOP)  
- **Tools:** Microsoft Visual Studio 2022  

---

## 💡 Learning Outcomes
- Implemented a fully functional class-based calculator.  
- Applied OOP principles practically to ensure clean, maintainable, and reusable code.  
- Learned to handle edge cases like division by zero elegantly.  
- Practiced designing utility functions that simplify user interaction with the class.  

---
