# Library Book Checkout System (Late Fees Calculator)

This project is a C++ program that models a basic library book borrowing system. Users of the application can determine the cost of returning books late and get to know the library's basic information through a menu-based interface.

---

## 🧠 Problem Statement
This project involves developing a Library Book Checkout System using C++. The program is designed to calculate late return fees for overdue library books and provide basic library information through a menu-driven interface. The objective of this task is to apply fundamental C++ programming concepts such as functions, conditional statements, and loops to create a functional and user-friendly console application.

---

## 📝 Purpose
This program tests the ability to:

- Design a menu-driven C++ application
- Implement functions with parameters and return values
- Apply conditional logic for tier-based calculations
- Handle user input and output correctly
- Control program flow using loops

This exercise strengthens problem-solving skills and reinforces core C++ fundamentals.

---

## 💎 Overview

The Library Book Checkout System allows users to:
- Calculate late fees based on the number of overdue days
- Display basic library information
- Navigate the system using a menu-based interface
- Repeat operations until the user chooses to exit

The system applies different late fee rates depending on the length of the overdue period.

---

## 💡 Objective of the Program

The main objectives of this program are to:
- Accurately calculate late fees using a tiered fee structure
- Ensure clear separation of tasks using modular functions
- Validate user choices through menu selection
- Maintain smooth program execution using a loop

The goal of this project is not to build a complex system, but to correctly implement logic that reflects real-world library late fee rules.

---

## 📌 Scope of Implementation

**Late Fee Calculation Logic**
The program calculates late fees based on the following structure:

| Overdue Days | Charges |
|--------------|---------|
| 1 – 7 days | RM 0.50 per day |
| 8 – 14 days	| RM 1.00 per day |
| 15+ days | RM 2.00 per day |

Charges are accumulated progressively according to the overdue duration.

- Menu-Driven Control<br>
  A do-while loop ensures the program continues running until the user selects the exit option.

- Function-Based Design<br>
  The system uses multiple functions to improve readability and modularity, including fee calculation, menu display, user input handling, and library information display.

---

## 🛠️ Functions Used

calculateLateFees(int days) – Calculates total late fees <br>
displayMenu() – Displays the main menu <br>
displayLibraryInfo() – Shows library details <br>
getUserInput(int &days) – Gets overdue days from user <br>

---

## 📌 Sample Menu Output

******** Library Book Checkout System ******<br>
1. Calculate Late Fees<br>
2. Display Library Information<br>
3. Quit<br>

Enter your choice (1-3): 1<br>
Enter number of days the book is overdue: 3<br>
Late fees: RM 1.5<br>

******** Library Book Checkout System ******<br>
1. Calculate Late Fees<br>
2. Display Library Information<br>
3. Quit<br>

Enter your choice (1-3): 2<br>

Library Name: UTM Library<br>
Address: Skudai, Johor<br>
Contact: (123) 456 7890<br>

******** Library Book Checkout System ******<br>
1. Calculate Late Fees<br>
2. Display Library Information<br>
3. Quit<br>

Enter your choice (1-3): 3<br>
Exiting the program. Thankyou!<br>

---

## 💻 Summary of the Program

After implementation:
- Late fees are calculated accurately based on overdue days
- The menu displays clearly and validates user selections
- Library information is displayed correctly upon request
- The program repeats smoothly until the user chooses to quit
- Output messages are clear and user-friendly

---

##

## 🎯 Learning Outcomes
- Improved understanding of function-based programming
- Practice with conditional logic and loops
- Experience in creating user-friendly console applications
- Strengthened problem-solving skills in C++
