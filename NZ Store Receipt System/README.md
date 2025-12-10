# NZ Store Receipt System (C++)

## 🧩 Background / Problem Statement
In many small businesses, manual billing can lead to errors, time consumption, and inconsistent records. Owners need a simple, lightweight system that helps:<br>
- Record customer purchases accurately
- Calculate tax and discounts automatically
- Summarize daily income without spreadsheets

## 💡 Proposed Solution
The NZ Store System addresses these issues by providing:<br>
- A structured and automated billing process
- Real-time receipt generation
- Built-in tax and discount calculations
- Daily summary reports to track performance<br>
All of this is achieved using core C++ logic with no external database or GUI required.

## 💻 Overview
NZ Store is my project for Basic Programming at Kolej Mara Kuala Nerang (KMKN).<br>
It is a C++-based Point of Sale (POS) system designed to simulate a simple store billing and receipt process.<br>
It allows the user to manage customer purchases, calculate totals with tax and discounts, and print formatted receipts.<br>
This project demonstrates structured programming concepts, data handling using arrays and structs, and user interaction through a menu-driven interface.

## 🎯 Objective
- To develop a console-based store system that can handle basic sales transactions.
- To practice C++ programming fundamentals, including structures, arrays, loops, conditionals, and functions.
- To simulate a real-world retail billing system with receipt generation and daily income tracking.

## 🔍 Scope
This project focuses on small-scale retail operations such as:<br>
- Product display and selection by product ID
- Customer order processing
- Calculation of subtotal, tax, and discount
- Automatic receipt printing
- Daily report summarizing total customers and income
<br>The system can easily be extended to include features such as inventory tracking, file storage, or GUI integration in the future.

## 💡 Expected Benefits
- Practical Understanding: Strengthens logical thinking and C++ coding skills.
- Efficiency: Simplifies sales and billing for small store scenarios.
- Expandability: Can serve as a foundation for a larger POS or inventory system.
- Automation: Reduces manual calculation errors with automatic receipt generation and total tracking.

## ⚙️ What the Code Does
- Displays a product catalog (Bed, Pillow, Blanket, Table, Lamp) with prices.
  Allows the cashier to:<br>
  Enter customer details<br>
  Select product(s) and quantity<br>
  Automatically calculate subtotal, tax (5%), and discount (10% if applicable)
- Generates a formatted receipt including:<br>
  Store details<br>
  Purchased items and totals<br>
  Tax, discount, and final amount<br>
  Tracks the total number of customers and income for the day.<br>
- Displays a daily closing report when the user exits.

## 🧾 Project Summary
The NZ Store Receipt System replicates a simple real-world store operation where each customer’s transaction is processed individually. <br>
It ensures accurate calculations, clear receipts, and end-of-day reports. All in one efficient C++ program.

## ✅ Conclusion
The NZ Store Receipt System is a practical and functional example of how C++ can be used to simulate real-world business operations.<br>
It enhances understanding of programming fundamentals while providing a foundation for more advanced POS systems in the future.<br>
This project proves that even simple console applications can deliver efficient, organized, and user-friendly solutions.

## 🧠 Tech Stack
- Language: C++
- Compiler: g++ / any C++11+ compatible IDE
- Concepts Used: Structs, Arrays, Functions, Loops, Conditionals, I/O Formatting (iomanip), ctime
