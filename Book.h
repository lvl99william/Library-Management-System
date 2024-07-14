//
// Created by william on 7/14/24.
//

#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>


class Book {
private:
    std::string title;
    std::string author;
    int yearPublished;
    bool available;
public:
    Book(std::string title, std::string author, int yearPublished);

    std::string getTitle() const;
    std::string getAuthor() const;
    int getYearPublished() const;
    bool isAvailable() const;
    void borrowBook();
    void returnBook();
    void displayDetails() const;

};



#endif //BOOK_H
