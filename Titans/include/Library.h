#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <Book.h>
#include <LinkedList.h>
using namespace std;

class Library
{
private:
    LinkedList<Book> catlog;
    int numOfBooks, numOfBorrowedBooks, numOfavailableBooks;
public:
    Library();
    void addBook(Book book);
    void returnBook(Book book);
    void withdrawBook(Book book);
    void allowedBooks();
    void sort();
    void printStatistics();
    void printMenu();
    void run();

};

#endif // LIBRARY_H
