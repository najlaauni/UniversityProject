# 📚 Library Book Checkout System (Late Fees Calculator)

This project is a C++ program that models a basic library book borrowing system. Users of the application can determine the cost of returning books late and get to know the library's basic information through a menu-based interface.

---

## 🧠 Project Overview

The late fees for the overdue books are assessed through a tiered system of daily fines calculated by the system. It is a good example of the implementation of functions, conditional statements, loops, and menu-driven programming in C++.

---

## ✨ Features
- Calculate late fees based on overdue days
- Display library information
- Menu-driven system using do-while loop
- Modular design using multiple functions

---

## 💰 Late Fee Structure
| Overdue Days | Charges |
|--------------|---------|
| 1 – 7 days | RM 0.50 per day |
| 8 – 14 days	| RM 1.00 per day |
| 15+ days | RM 2.00 per day |

The total fee is calculated cumulatively based on these tiers.

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

## 🎯 Learning Outcomes
- Improved understanding of function-based programming
- Practice with conditional logic and loops
- Experience in creating user-friendly console applications
- Strengthened problem-solving skills in C++
