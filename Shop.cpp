#include "Shop.h"

Shop::Shop()
{

}

Shop::~Shop()
{
	for (auto item:shop)
	{
		delete item;
	}
}

void Shop::addProduct(Products::Product* obj)
{
	shop.push_back(obj);
}

void Shop::showList() const
{
	for (auto item:shop)
	{
		item->show();
		std::cout << "Final price: " << item->calcPrice() << "\n\n";
	}
}
