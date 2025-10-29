#include "SportsEquipment.h"

Products::Sport::SportEquipment::SportEquipment()
{
    kind = "undefined";
    weight = 0;
}

Products::Sport::SportEquipment::SportEquipment(std::string name, float price, std::string manufacture, int age, std::string kind, float weight) : Product(name, price, manufacture, age)
{
    this->kind = kind;
    this->weight = weight;
}

void Products::Sport::SportEquipment::setKind(std::string kind)
{
    this->kind = kind;
}

void Products::Sport::SportEquipment::setWeight(float weight)
{
    this->weight = weight;
}

std::string Products::Sport::SportEquipment::getKind() const
{
    return kind;
}

float Products::Sport::SportEquipment::getWeight() const
{
    return weight;
}

void Products::Sport::SportEquipment::show() const
{
    using namespace std;
    cout << "\tSPORT EQUIPMENT\n";
    cout << "Name: " << name << endl;
    cout << "Manufacture: " << manufacture << endl;
    cout << "Kind: " << kind << endl;
    cout << "Price: " << price << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
}

float Products::Sport::SportEquipment::calcPrice() const
{
    return price + (age < 7 ? price * 0.1 : 0);
}
