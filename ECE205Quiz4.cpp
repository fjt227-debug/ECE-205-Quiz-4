#include <iostream>
using namespace std;

class Book
{
public:
    void get_input();
    void book_in_lib();
private:
    string cat;
    int year;
    int ISB_N;
};

void Book::get_input()
{
    cout << "Enter category of book " << endl;
    cin >> cat;
    cout << "Enter the year of the book " << endl;
    cin >> year;
    cout << "Enter the ISBN of the book " << endl;
    cin >> ISB_N;
}

void Book::book_in_lib()
{
    if (year > 1950 || cat == "history")
    {
        cout << "The book is avalible in the store" << endl;
    }
    else
    {
        cout << "The book is not avalible in the store" << endl;
    }
}

int main()
{
    Book myBook;
    myBook.get_input();
    myBook.book_in_lib();
    return 0;
}


