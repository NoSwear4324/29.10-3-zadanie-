#include <iostream>
#include "Shop.h"

int main()
{
    Shop ItStep;
    ItStep.addProduct(new Products::Fun::Book("C++", 1000, "ranok", 10, "Straustrub", "Study", 200));
    ItStep.addProduct(new Products::Sport::SportEquipment("Ball", 5000, "China", 2, "Football", 1));
    ItStep.showList();
}

