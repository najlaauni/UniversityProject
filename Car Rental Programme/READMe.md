# Projects: Car Rental Program — Debugging Report (C++)

## Problem Statement
This task involves debugging a Car Rental Program written in C++. The original code contained several syntax errors, logical mistakes, and incorrect conditions that prevented it from running properly. My objective was to identify all errors based on the labels given in the source code (Error 1–Error 10) and fix them so the program could function as intended.

---

## Purpose
This question tests the ability to:
- Analyze pre-written code
- Detect logical and runtime errors
- Correct misuse of operators, data types, and function parameters
- Ensure program flow is valid and produces the correct output
- This debugging exercise helps strengthen attention to detail and understanding of C++ fundamentals.

---

## Overview
The Car Rental Program is a menu-driven system that allows users to:
- View the list of available cars
- Rent a car by choosing a model and entering rental hours
- Calculate rental costs based on hourly rates and rate increases
- Display a complete rental summary
- The program also validates user inputs and allows repeated usage until the user chooses to exit.

---

## Objective of Debugging
- Fix invalid comparison logic in menu validation
- Correct data type issues in function parameters
- Ensure switch-case uses the correct values
- Adjust loop conditions for proper repetition
- Repair incorrect mathematical calculations
- Ensure correct return values and function calls
The goal was not to redesign the program but strictly to correct the given code so that it runs as intended.

---

## Scope of Errors Fixed
- Menu Validation (Error 1 & Error 2)

Incorrect logical operators and return handling were corrected so that option validation works correctly.

- Car Selection Logic (Error 6)

Input range checking was fixed to ensure only valid car models (1–4) are accepted.

- Function Parameter & Switch-Case (Error 3)

The function calcRentCar() originally used a char for the car model input; this was corrected so the correct numeric comparison is used.

- Rental Rate Calculation (Errors 5 & 9)

Conditional blocks and formula calculations were corrected to properly apply:

    - Normal rate (first 12 hours)

    - +2% rate increase (12–24 hours)

    - +5% rate increase (after 24 hours)

- Loop Control (Error 7)

The loop previously terminated incorrectly; it was corrected so the program continues only when the user enters 'y'.

- Function Call (Error 8)

The correct data types and variable names were passed to the rental calculation function.

---

## Summary of the Debugged Program
After correcting all errors:
- The menu displays and validates user input properly
- Car model selection works correctly with proper error handling
- Rental price is calculated accurately based on hours and rate rules
- The program shows a clear rental summary containing name, model, hours, and total price
- The program loops smoothly until the user chooses to exit

---

## Conclusion
This debugging task reinforced key C++ skills such as:
- Understanding logical operators
- Handling user input safely
- Using switches and functions correctly
- Performing multi-stage calculations
- Structuring menu-driven programs

By fixing the provided code, the program now performs accurately and demonstrates clean, correct flow.
