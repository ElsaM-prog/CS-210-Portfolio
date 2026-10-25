
#include <iostream>
#include <limits>
#include "CornerGrocer.h"

using namespace std;

int main() {
    CornerGrocer grocery;
    grocery.loadData("CS210_Project_Three_Input_File.txt");

    int choice;

    while (true) {
        cout << "\n===== CORNER GROCER MENU =====\n";
        cout << "1. Search for an item\n";
        cout << "2. Display all item frequencies\n";
        cout << "3. Display frequency histogram\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Enter a number from 1 to 4.\n";
            continue;
        }

        switch (choice) {
            case 1:
                grocery.searchItem();
                break;
            case 2:
                grocery.displayFrequencies();
                break;
            case 3:
                grocery.displayHistogram();
                break;
            case 4:
                cout << "Thank you for using Corner Grocer!\n";
                return 0;
            default:
                cout << "Please select an option from 1 to 4.\n";
        }
    }
}

