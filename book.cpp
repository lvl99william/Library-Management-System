#include <iostream>
#include <string>

class Book {
private:
    string title;
    string author;
    int yearPublished;
    bool available;  

public:

    Book(string title, string author, int yearPublished)
        : title(title), author(author), yearPublished(yearPublished), available(true) {}

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    int getYearPublished() const { return yearPublished; }
    bool isAvailable() const { return available; }

    void borrowBook() { available = false; }

    void returnBook() { available = true; }

    void displayDetails() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year Published: " << yearPublished << endl;
        cout << "Status: " << (available ? "Available" : "Borrowed") << endl;
    }
};

