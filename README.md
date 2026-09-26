# 🧬 C++ Virtual Functions & Late Binding

## 📖 About the Project
This project demonstrates the transition from Early Binding to **Late Binding** (Run-Time Polymorphism) in C++. By declaring base class methods as `virtual`, the program dynamically evaluates object types at runtime rather than relying strictly on pointer types during compilation.

## ✨ Features
*   **Run-Time Polymorphism:** Utilizes the `virtual` keyword to force the compiler to resolve function calls based on the actual object in memory, bypassing standard Early Binding constraints.
*   **Polymorphic Pointer Execution:** Successfully triggers a Derived Class overridden method (`ProPlayer::display()`) using a Base Class pointer (`StandardPlayer*`).
*   **Memory Scope Safety:** Demonstrates correct data population by accessing derived-specific variables through direct object manipulation prior to polymorphic pointer execution.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Run-Time Polymorphism, Virtual Functions, Late Binding, Method Overriding, Base/Derived Pointers.

## 🛠️ How to Run
1. Clone this repository and compile:
   ```bash
   g++ virtual_functions.cpp -o virtual_functions
