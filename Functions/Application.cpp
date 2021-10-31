#include <iostream>
using namespace std;

// Simple Function Decleration
void myFunction();

// One Argument
void introducingMySelf(string name);

// Multiple Arguments
// Default values, works from RIGHT to LEFT
// ! WE CAN'T SET DEFAULT VALUE for middle argument or left argument before setting for the last one
void introduceYourSelf(string name, int age = 0, double height = 0.0);

// Prime number Function Definitions
bool checkIfPrimeNumber(int number);

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



	/* START: Prime Number */

	int number;

	std::cout << "Enter a number: ";
	std::cin >> number;

	bool isPrimeNumberFlag = checkIfPrimeNumber(number);

	if (isPrimeNumberFlag)
		std::cout << number << " is a prime number!" << std::endl;
	else
		std:cout << number << " is not a prime number!" << std::endl;

	/*END: Prime Number */


	system("pause");
}

// Simple function definition
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

// Prime Number 
bool checkIfPrimeNumber(int number)
{
	//bool isPrimeNumberFlag = true;

	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			//isPrimeNumberFlag = false;
			//break;
			return false;
	}
	//return isPrimeNumberFlag;
	return true;
}