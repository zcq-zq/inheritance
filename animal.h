#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include<string.h>
namespace iotek 
{
	class Animal
	{
	public:
		Animal(int age);
		~Animal();

		void setAge(int age);
		int getAge()const;

	private:
		int m_age;
	};

	class Cat : public Animal
	{
	public:
		Cat(int age, int color);
		~Cat();

		int getColor()const;
		void setColor(int color);
	private:
		int m_color;
	};

	class Dog :public Animal
	{
	public:
		Dog(int age,int weight);
		~Dog();
		int getWeight()const;
		void setWeight(int weight);
	private:
		int m_weight;
	};
}

#endif
