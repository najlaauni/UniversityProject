#include <iostream>
using namespace std;

double calculateLateFees (int days)
{
    double lateFees =0.0;

    if (days > 0 && days <= 7)
        lateFees = 0.5 * days;
    else if (days > 7 && days <= 14)
        lateFees = (0.5 * 7) + (1 * (days-7));
    else if (days > 14)
        lateFees = (0.5 * 7) + (1 * 7) + (2 * (days-14));

    return lateFees;
}

void displayMenu ()
{
    cout << "\n******** Library Book Checkout System ******" << endl;
    cout << "1. Calculate Late Fees" << endl;
    cout << "2. Display Library Information" << endl;
    cout << "3. Quit" << endl;
    cout << "Enter your choice (1-3): ";
}

void displayLibraryInfo ()
{
    cout << "Library Name: UTM Library" << endl;
    cout << "Address: Skudai, Johor" << endl;
    cout << " Contact: (123) 456 7890";
}

void getUserInput (int &days)
{
    cout << "Enter number of days the book is overdue: ";
    cin >> days;
}

int main ()
{
    int option, days;
    double fees;

    do
    {    
        displayMenu();
        cin >> option;
        switch(option){
            case 1 :getUserInput (days);
                    fees = calculateLateFees (days);

                    if(fees > 0)
                        cout << "Late fees: RM " << fees << endl;
                    else
                        cout << "No charge. Book return on time." << endl;
                    break;   

            case 2 :displayLibraryInfo();
                    break;

            case 3:
                cout << "Exiting the program. Thankyou!" << endl;
                break;
            
            default:
                cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
        }

    } while (option != 3);
    
    return 0;
}
