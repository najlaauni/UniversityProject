#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const int numproducts = 5;
const float taxrate = 0.05;
const float discountrate = 0.10;

struct Product {
    int id;
    string name;
    float price;
};

struct OrderItem {
    int id;
    string name;
    float price;
    int quantity;
};

// Product list
Product products[numproducts] = {
    {1001, "Bed", 500.00},
    {1002, "Pillow", 30.00},
    {1003, "Blanket", 15.00},
    {1004, "Table", 80.00},
    {1005, "Lamp", 25.00}
};

// Tracking daily totals
int totalCustomers = 0;
float totalIncome = 0;

// Function prototypes
void displayMenu();
float processOrder(float &subtotal, float &tax, float &discount, OrderItem orderItems[], int &itemCount);
void printReceipt(string, string, string, float, float, float, float, OrderItem[], int);
void closingReport();

int main() {
    char choice;

    cout << "\n========== WELCOME TO NZ'S STORE ==========\n";

    do {
     cout << "Press any key to serve a customer or 'X' to close the day: ";
        cin >> choice;
        cin.ignore(); // clear newline

        if (choice == 'X') {
            break;
        }

        string name, address, contact;
        float subtotal, tax, discount, total;
        OrderItem orderItems[10]; // assume max 10 items per customer
        int itemCount = 0;

        cout << "\n--- Customer Information ---\n";
        cout << "Enter customer name: ";
        getline(cin, name);
        cout << "Enter customer address: ";
        getline(cin, address);
        cout << "Enter contact number: ";
        getline(cin, contact);

        total = processOrder(subtotal, tax, discount, orderItems, itemCount);
        printReceipt(name, address, contact, subtotal, tax, discount, total, orderItems, itemCount);

        totalIncome += total;
        totalCustomers++;

    } while (true);

    closingReport();

    return 0;
}

// Display available products
void displayMenu() {
    cout << "\n========== PRODUCT MENU ==========\n";
    for (int i = 0; i < numproducts; i++) {
        cout << "ID: " << products[i].id << " | " << products[i].name
             << " | RM" << fixed << setprecision(2) << products[i].price << "\n";
    }
}

// Process customer order
float processOrder(float &subtotal, float &tax, float &discount, OrderItem orderItems[], int &itemCount) {
    int prodID, quantity;
    char more;
    subtotal = 0;
    itemCount = 0;

    displayMenu();

    do {
     cout << "\nEnter product ID[1001, 1002, 1003, 1004, 1005]: ";
        cin >> prodID;

        if (prodID == 1001) {
            // Product is Bed
            cout << "Enter quantity: ";
            cin >> quantity;

            orderItems[itemCount].id = products[0].id;
            orderItems[itemCount].name = products[0].name;
            orderItems[itemCount].price = products[0].price;
            orderItems[itemCount].quantity = quantity;
            itemCount++;

            subtotal += products[0].price * quantity;
        }
        else if (prodID == 1002) {
            // Product is Pillow
            cout << "Enter quantity: ";
            cin >> quantity;

            orderItems[itemCount].id = products[1].id;
            orderItems[itemCount].name = products[1].name;
            orderItems[itemCount].price = products[1].price;
            orderItems[itemCount].quantity = quantity;
            itemCount++;

            subtotal += products[1].price * quantity;
        }
        else if (prodID == 1003) {
            // Product is Blanket
            cout << "Enter quantity: ";
            cin >> quantity;

            orderItems[itemCount].id = products[2].id;
            orderItems[itemCount].name = products[2].name;
            orderItems[itemCount].price = products[2].price;
            orderItems[itemCount].quantity = quantity;
            itemCount++;

            subtotal += products[2].price * quantity;
        }
        else if (prodID == 1004) {
            // Product is Table
            cout << "Enter quantity: ";
            cin >> quantity;

            orderItems[itemCount].id = products[3].id;
            orderItems[itemCount].name = products[3].name;
            orderItems[itemCount].price = products[3].price;
            orderItems[itemCount].quantity = quantity;
            itemCount++;

            subtotal += products[3].price * quantity;
        }
        else if (prodID == 1005) {
            // Product is Lamp
            cout << "Enter quantity: ";
            cin >> quantity;

            orderItems[itemCount].id = products[4].id;
            orderItems[itemCount].name = products[4].name;
            orderItems[itemCount].price = products[4].price;
            orderItems[itemCount].quantity = quantity;
            itemCount++;

            subtotal += products[4].price * quantity;
        }
        else {
            cout << "Invalid ID! Please try again.\n";
            cin.ignore();
            cin.clear ();
            cout << "\nEnter product ID[1001, 1002, 1003, 1004, 1005]: ";
            cin >> prodID;
            break;
        }

        cout << "Add more items? (Y/N): ";
        cin >> more;
    } while ( more == 'Y');

    tax = subtotal * taxrate;
    discount = (subtotal >= 100) ? subtotal * discountrate : 0;
    float total = subtotal + tax - discount;

    return total;
}

// Print receipt for customer
void printReceipt(string name, string address, string contact, float subtotal, float tax, float discount, float total, OrderItem orderItems[], int itemCount) {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "\n========== CUSTOMER RECEIPT ==========\n";
    cout << "      __  \n";
    cout << "| \\ |  ___  /   \n";
    cout << "|  \\| |  / /    \n";
    cout << "| |\\  | / /_    \n";
    cout << "|_| \\_|/____|   \n";
    cout << "NZ's Store\n123A, Jalan Indah, Taman Terap\n063000 Kuala Nerang, Kedah\nContact: 04-7860922\n";
    cout << "Date: " << (1900 + ltm->tm_year) << "-" << (1 + ltm->tm_mon) << "-" << ltm->tm_mday << "\n";
    cout << "Customer Name: " << name << "\nAddress: " << address << "\nContact: " << contact << "\n";
    cout << "--------------------------------------\n";
    cout << "Items Purchased:\n";
    cout << "Name\t\tID\tQty\tPrice\t\tTotal\n";

    for (int i = 0; i < itemCount; i++) {
        float itemTotal = orderItems[i].price * orderItems[i].quantity;
        cout << orderItems[i].name << "\t\t" << orderItems[i].id << "\t" << orderItems[i].quantity << "\tRM" << fixed << setprecision(2) << orderItems[i].price << "\t\tRM" << itemTotal << "\n";
    }

    cout << "--------------------------------------\n";
    cout << "Subtotal:\tRM" << subtotal << "\n";
    cout << "Tax (5%):\tRM" << tax << "\n";
    cout << "Discount:\t-RM" << discount << "\n";
    cout << "TOTAL:\t\tRM" << total << "\n";
    cout << "======================================\n";
    cout << "Thank you for shopping with us!\n";
    cout << "======================================\n";
}

// Show daily report at closing
void closingReport() {
    cout << "\n========== DAILY CLOSING REPORT ==========\n";
    cout << "Total Customers Served: " << totalCustomers << "\n";
    cout << "Total Income: RM" << fixed << setprecision(2) << totalIncome << "\n";
    cout << "=========================================\n";
}
