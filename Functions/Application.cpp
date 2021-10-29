#include <iostream>
using namespace std;

// Simple function decleration
void myFunction();

// One Argument
void introducingMySelf(string name);

// Multiple Arguments
// Default values, works from RIGHT to LEFT
// ! WE CAN'T SET DEFAULT VALUE for middle argument or left argument before setting for the last one
void introduceYourSelf(string name, int age = 0, double height = 0.0);

int main()
{
	string n;
	int a;
	double h;

	myFunction();
	//introducingMySelf("anis");
	//introduceYourSelf("George");

	std::cout << "Enter your name: ";
	std::cin >> n;
	std::cout << "Enter your age: ";
	std::cin >> a;
	std::cout << "Enter your height: ";
	std::cin >> h;

	introduceYourSelf(n, a, h);

	system("pause");
}

// Simple function defenition
void myFunction()	
{
	std::cout << "Hello and Welcome to my first functon!" << std::endl;
}

// One Argument
void introducingMySelf(string name)
{
	std::cout << "My name is " << name << " thank you!" << std::endl;
}

// Multiple Arguments
void introduceYourSelf(string name, int age, double height)
{
	if (age != 0 && height != 0.0)
		std::cout << "My name is " << name << ", " << age << " years old, and " << height << " height" << std::endl;
	else
		std::cout << "My name is " << name << std::endl;
}