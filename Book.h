#pragma once
#include "Product.h"

namespace Products
{
	namespace Fun
	{
		class Book : public Product
		{
		protected:
			std::string author;
			std::string genre;
			int pages;
		public:
			Book();
			Book(std::string name, float price, std::string manufacture, int age, std::string author, std::string genre, int pages);

			void setAuthor(std::string author);
			void setGenre(std::string genre);
			void setPages(int pages);


			std::string getAuthor() const;
			std::string getGenre() const;
			int getPages() const;

			virtual void show()const override;
			virtual float calcPrice()const override;
		};

	}
}

