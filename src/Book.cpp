//
// Created by william on 7/14/24.
//

#include "../include/Book.h"
Book::Book(std::string title, std::string author, int yearPublished)
    : title(title), author(author), yearPublished(yearPublished), available(true) {}

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
int Book::getYearPublished() const { return yearPublished; }
bool Book::isAvailable() const { return available; }

void Book::borrowBook() { available = false; }
void Book::returnBook() { available = true; }

void Book::displayDetails() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Year Published: " << yearPublished << std::endl;
    std::cout << "Status: " << (available ? "Available" : "Borrowed") << std::endl;
}