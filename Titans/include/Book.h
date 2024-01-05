#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

class Book
{
public:
    string title, author, ISBN, genre;
    bool available;
    Book(string title = "", string author = "", string ISBN = "", string genre = "", bool available = 1);
    bool operator<(const Book&other)const;
    bool operator==(const Book&other)const;
    bool operator>(const Book&other)const;
    friend ostream & operator<<(ostream &output,Book book);
    void readData();

};

#endif // BOOK_H
