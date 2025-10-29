#include "Book.h"

Products::Fun::Book::Book()
{
    author = "undefined";
    genre = "undefined";
    pages = 0;
}

Products::Fun::Book::Book(std::string name, float price, std::string manufacture, int age, std::string author, std::string genre, int pages) :Product(name, price, manufacture, age)
{
    this->author = author;
    this->genre = genre;
    this->pages = pages;
}

void Products::Fun::Book::setAuthor(std::string author)
{
    this->author = author;
}

void Products::Fun::Book::setGenre(std::string genre)
{
    this->genre = genre;
}

void Products::Fun::Book::setPages(int pages)
{
    this->pages = pages;
}

std::string Products::Fun::Book::getAuthor() const
{
    return author;
}

std::string Products::Fun::Book::getGenre() const
{
    return genre;
}

int Products::Fun::Book::getPages() const
{
    return pages;
}

void Products::Fun::Book::show() const
{
    using namespace std;
    cout << "\tBOOK\n";
    cout << "Name: " << name << endl;
    cout << "Edition: " << manufacture << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
    cout << "Age: " << age << endl;
    cout << "Genre: " << genre << endl;
    cout << "Pages: " << pages << endl;
}

float Products::Fun::Book::calcPrice() const
{
    return price + pages / 100 * price * 0.1 + (age < 7 ? price * 0.1 : 0);
}