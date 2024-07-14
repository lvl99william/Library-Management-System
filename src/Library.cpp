// Library.cpp

#include "../include/Library.h"
#include <iostream>

Library::Library() {
}

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::displayAllBooks() const {
    if (books.empty()) {
        std::cout << "The library is empty.\n";
    } else {
        std::cout << "Library Catalog:\n";
        for (const auto& book : books) {
            book.displayDetails();
            std::cout << "---------------------\n";
        }
    }
}


void Library::borrowBook(const std::string& title) {
    for (auto& book : books) {
        if (book.getTitle() == title && book.isAvailable()) {
            book.borrowBook();
            std::cout << "You have borrowed the book: " << title << std::endl;
            return;
        }
    }
    std::cout << "Book \"" << title << "\" is either not available or not found.\n";
}


void Library::returnBook(const std::string& title) {
    for (auto& book : books) {
        if (book.getTitle() == title && !book.isAvailable()) {
            book.returnBook();
            std::cout << "You have returned the book: " << title << std::endl;
            return;
        }
    }
    std::cout << "Book \"" << title << "\" was not borrowed or not found.\n";
}
