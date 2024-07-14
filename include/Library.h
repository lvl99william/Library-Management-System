//
// Created by william on 7/14/24.
//

#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;

public:
    Library();

    void addBook(const Book& book);

    void displayAllBooks() const;

    void borrowBook(const std::string& title);

    void returnBook(const std::string& title);
};



#endif //LIBRARY_H
