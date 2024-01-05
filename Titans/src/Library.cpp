#include "Library.h"
Library::Library()
{
    numOfBooks=0;
    numOfBorrowedBooks=0;
    numOfavailableBooks=0;
}
    void Library::addBook(Book book)
    {
        numOfBooks++;
        numOfavailableBooks++;
        catlog.insertRight(book);
    }
    void Library::returnBook(Book book)
    {
        numOfBorrowedBooks--;
        numOfavailableBooks++;
        catlog.insertRight(book);
    }
    void Library::withdrawBook(Book book)
    {
        int bookIdx = catlog.search(book);
        if (bookIdx != -1)
        {
            numOfBorrowedBooks++;
            numOfavailableBooks--;
            catlog.removeAtPosition(bookIdx);
        }
    }
    void Library::allowedBooks()
    {
        cout<<"The available books are:\n";
        catlog.print();
    }
    void Library::sort()
    {
        catlog.sortList();
    }
    void Library::printStatistics()
    {
        cout<<"Number of books in the library is "<<numOfBooks<<"\n";
        cout<<"Number of borrowed books in the library is "<<numOfBorrowedBooks<<"\n";
        cout<<"Number of available books in the library is "<<numOfavailableBooks<<"\n\n";
    }
    void Library::printMenu()
    {
        cout << "Library System Menu:" << endl;
        cout << "1. Add a book" << endl;
        cout << "2. return a book" << endl;
        cout << "3. withdraw a book" << endl;
        cout << "4. What are the available books?" << endl;
        cout << "5. sort the current available books" << endl;
        cout << "6. print the statistics of the library" << endl;
        cout << "7. Quit" << endl;
        cout << "Enter your choice (1-7): "<<endl;
    }
    void Library::run()
    {
        while (true)
        {
            printMenu();
            int choice;
            cin >> choice;
            system("cls");
            switch (choice)
            {
            case 1:
            {
                Book book;
                book.readData();
                addBook(book);
                break;
            }
            case 2:
            {
                Book book;
                book.readData();
                returnBook(book);
                break;
            }
            case 3:
            {
                Book book;
                book.readData();
                withdrawBook(book);
                break;
            }
            case 4:
            {
                allowedBooks();
                break;
            }
            case 5:
            {
                sort();
                break;
            }
            case 6:
            {
                printStatistics();
                break;
            }
            case 7:
            {
                cout << "Exiting the program." << endl;
                return;
            }
            default:
                cout << "Invalid choice. Please enter a valid option (1-7)." << endl;
            }
        }
    }
