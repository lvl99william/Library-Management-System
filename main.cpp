#include <iostream>
#include "Book.h"
#include "iostream"

void print_menu();

int main() {
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    book1.displayDetails();
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