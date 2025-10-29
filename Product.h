#pragma once
#include <iostream>
#include <string>
#include <fstream>

namespace Products
{
	class Product
	{
	protected:
		std::string name;
		float price;
		std::string manufacture;
		int age;
	public:
		Product();
		Product(std::string name, float price, std::string manufacture, int age);
		virtual ~Product();

		void setname(std::string name);
		void setprice(float price);
		void setmanufacture(std::string manufacture);
		void setage(int age);
		std::string getname()const;
		float getprice()const;
		std::string getmanufacture()const;
		int getage()const;

		virtual void show()const = 0;
		virtual float calcPrice()const = 0;
		virtual void saveToFile(std::ofstream& file) const = 0;
		virtual void loadFromFile(std::ifstream& file) = 0;
	};
}