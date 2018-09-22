#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include<string.h>
namespace iotek 
{
	class Animal
	{
	public:
		Animal(int age);
		virtual ~Animal();

		void setAge(int age);
		int getAge()const;
		virtual void makeSound()const;//虚函数

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
		void makeSound()const;
		
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
		void makeSound()const;
		
	private:
		int m_weight;
	};
}

#endif
