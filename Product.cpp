#include "Product.h"

Products::Product::Product()
{
    name = "noname";
    price = 0;
    manufacture = "undefined";
    age = 0;
}

Products::Product::Product(std::string name, float price, std::string manufacture, int age)
{
    this->name = name;
    this->price = price;
    this->manufacture = manufacture;
    this->age = age;
}

Products::Product::~Product()
{

}

void Products::Product::setname(std::string name)
{
    this->name = name;
}

void Products::Product::setprice(float price)
{
    this->price = price;
}

void Products::Product::setmanufacture(std::string manufacture)
{
    this->manufacture = manufacture;
}

void Products::Product::setage(int age)
{
    this->age = age;
}

std::string Products::Product::getname() const
{
    return name;
}

float Products::Product::getprice() const
{
    return price;
}

std::string Products::Product::getmanufacture() const
{
    return manufacture;
}

int Products::Product::getage() const
{
    return age;
}
