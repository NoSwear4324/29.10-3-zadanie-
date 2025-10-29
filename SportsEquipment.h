#pragma once
#include "Product.h"

namespace Products
{
	namespace Sport
	{
		class SportEquipment : public Product
		{
		protected:
			std::string kind;
			float weight;
		public:
			SportEquipment();
			SportEquipment(std::string name, float price, std::string manufacture, int age, std::string kind, float weight);

			void setKind(std::string kind);
			void setWeight(float weight);

			std::string getKind()const;
			float getWeight()const;

			virtual void show()const override;
			virtual float calcPrice()const override;
		};
	}
}


