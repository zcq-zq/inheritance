#include"animal.h"
#include<iostream>
using namespace::std;
using namespace::iotek;

void func(const Animal& animal)
{
	animal.makeSound();
}

int main()
{
	{
		Cat cat(1, 1);
		cat.setAge(2);
		cat.setColor(2);

		Dog dog(2, 2);
		dog.setAge(3);
		dog.setWeight(3);
		cout << "cat.age=" << cat.getAge() << endl << "cat.color=" << cat.getColor() << endl;
		cout << "dog.age=" << dog.getAge() << endl << "dog.weight=" << dog.getWeight() << endl;
		
		func(dog);
		func(cat);
	}
	system("pause");
	return 0;
}
