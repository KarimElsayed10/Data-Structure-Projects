#include "Book.h"
#include <iostream>
using namespace std;
Book::Book(string title, string author, string ISBN, string genre, bool available)
{
    this->title=title;
    this->author=author;
    this->ISBN=ISBN;
    this->genre=genre;
    this->available=available;
}
bool Book::operator<(const Book&other)const
{
    return title<other.title;
}
bool Book::operator==(const Book&other)const
{
    return title==other.title;
}
bool Book::operator>(const Book&other)const
{
    return title>other.title;
}
void Book::readData()
{
    cout<<"Enter the title of the book: "<<endl;
    cin>>title;
    cout<<"\nEnter the author of the book: "<<endl;
    cin>>author;
    cout<<"\nEnter the ISBN of the book: "<<endl;
    cin>>ISBN;
    cout<<"\nEnter the genre of the book: "<<endl;
    cin>>genre;
    cout<<"The Book is Saved Successfully"<<endl<<endl;
}
ostream & operator<<(ostream &output,Book book)
{
    output<<"Book's title is "<<book.title<<endl;
    output<<"Book's author is "<<book.author<<endl;
    output<<"Book's ISBN is "<<book.ISBN<<endl;
    output<<"Book's number of reservations is "<<book.genre<<endl;
    return output;
}
