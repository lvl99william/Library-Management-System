#include <iostream>
#include "../include/Book.h"

void printMenu();

int main() {
    bool exit = false;
    int choice;

    while (!exit) {
        printMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Adding a new book...\n";
            // Code to add a new book
            break;
            case 2:
                std::cout << "Borrowing a book...\n";
            // Code to borrow a book
            break;
            case 3:
                std::cout << "Returning a book...\n";
            // Code to return a book
            break;
            case 4:
                std::cout << "Displaying all books...\n";
            // Display details of book1 for now as an example
            break;
            case 5:
                exit = true;
            std::cout << "Exiting...\n";
            break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
            break;
        }
    }

    return 0;
}

void printMenu() {
    std::cout << "=========================\n";
    std::cout << " Library Management Menu \n";
    std::cout << "=========================\n";
    std::cout << "1. Add a new book\n";
    std::cout << "2. Borrow a book\n";
    std::cout << "3. Return a book\n";
    std::cout << "4. Display all books\n";
    std::cout << "5. Exit\n";
    std::cout << "=========================\n";
    std::cout << "Please enter your choice: ";
}
