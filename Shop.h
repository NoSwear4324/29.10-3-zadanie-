#pragma once
#include "Book.h"
#include "SportsEquipment.h"
#include <vector>
#include <algorithm>

class Shop
{
	std::vector<Products::Product*>shop;
public:
	Shop();
	~Shop();
	void addProduct(Products::Product*obj);
	void showList()const;

};

