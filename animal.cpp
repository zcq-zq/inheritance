#include"animal.h"
#include<iostream>

using namespace::std;
using namespace::iotek;

Animal::Animal(int age):m_age(age)
{
	cout << "Animal constructing" << endl;
}

Animal::~Animal()
{
	cout << "Animal destructing" << endl;
}
int Animal::getAge()const
{
	return m_age;
}
void Animal::setAge(int age)
{
	m_age = age;
}
void Animal::makeSound()const
{
	cout << "Animal make sound" << endl;
}

Cat::Cat(int age, int color)
	:Animal(age),m_color(color)  //³õÊ¼»¯¸¸Àà£»
{
	cout << "Cat constructing" << endl;
}

Cat::~Cat()
{
	cout << "Cat destucting" << endl;
}

int Cat::getColor()const
{
	return m_color;
}

void Cat::setColor(int color)
{
	m_color = color;
}

void Cat::makeSound()const
{
	cout << "Cat make sound" << endl;
}

Dog::Dog(int age, int weight)
	:Animal(age),m_weight(weight)
{
	cout << "Dog constructing"<<endl;
}

Dog::~Dog()
{
	cout << "Dog destucting" << endl;
}

int Dog::getWeight()const
{
	return m_weight;
}

void Dog::setWeight(int weight)
{
	m_weight = weight;
}

void Dog::makeSound()const
{
	cout << "Dog make sound" << endl;
}
