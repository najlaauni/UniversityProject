📚 Library Book Checkout System (Late Fees Calculator)

This project is a C++ console-based application that simulates a simple library book checkout system. The program allows users to calculate late return fees for overdue books and view basic library information through a menu-driven interface.

🧠 Project Overview

The system calculates late fees based on the number of days a book is overdue using a tiered charging structure. It demonstrates the use of functions, conditional statements, loops, and menu-driven programming in C++.

✨ Features

📅 Calculate late fees based on overdue days

📖 Display library information

🔁 Menu-driven system using do-while loop

🧩 Modular design using multiple functions

💰 Late Fee Structure
Overdue Days	Charges
1 – 7 days	RM 0.50 per day
8 – 14 days	RM 1.00 per day
15+ days	RM 2.00 per day

The total fee is calculated cumulatively based on these tiers.

🛠️ Functions Used

calculateLateFees(int days) – Calculates total late fees

displayMenu() – Displays the main menu

displayLibraryInfo() – Shows library details

getUserInput(int &days) – Gets overdue days from user

▶️ How to Run

Clone this repository:

git clone https://github.com/your-username/library-late-fees.git


Compile the program:

g++ library.cpp -o library


Run the executable:

./library

📌 Sample Menu Output
******** Library Book Checkout System ******
1. Calculate Late Fees
2. Display Library Information
3. Quit
Enter your choice (1-3):

🎯 Learning Outcomes

Improved understanding of function-based programming

Practice with conditional logic and loops

Experience in creating user-friendly console applications

Strengthened problem-solving skills in C++
