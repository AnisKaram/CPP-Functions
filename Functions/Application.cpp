#include <iostream>
using namespace std;

// Simple Function Declaration
void myFunction();

// One Argument Declaration
void introducingMySelf(string name);

// Multiple Arguments Declaration
// Default values, works from RIGHT to LEFT
// ! WE CAN'T SET DEFAULT VALUE for middle argument or left argument before setting for the last one
void introduceYourSelf(string name, int age = 0, double height = 0.0);

// Prime number Function Declaration
bool checkIfPrimeNumber(int number);

// Function Overloading Declaration
int sumOverloading(int numberOne, int numberTwo);
double sumOverloading(double numberOne, double numberTwo);
float sumOverloading(float numberOne, float numberTwo, float numberThree);

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

	/*START: Function Overloading*/

	std::cout << "Sum Integer numbers: " << sumOverloading(10, 30) << std::endl;
	std::cout << "Sum Double numbers: " << sumOverloading(10.52, 30.532) << std::endl;
	std::cout << "Sum Float numbers: " << sumOverloading(10.52, 30.532, 40.512) << std::endl;

	/*END: Function Overloading*/


	system("pause");
}

// Simple function Definition
void myFunction()	
{
	std::cout << "Hello and Welcome to my first functon!" << std::endl;
}

// One Argument Definiiton
void introducingMySelf(string name)
{
	std::cout << "My name is " << name << " thank you!" << std::endl;
}

// Multiple Arguments Definition
void introduceYourSelf(string name, int age, double height)
{
	if (age != 0 && height != 0.0)
		std::cout << "My name is " << name << ", " << age << " years old, and " << height << " height" << std::endl;
	else
		std::cout << "My name is " << name << std::endl;
}

// Prime Number Definition
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

// Function Overloading Definition
int sumOverloading(int numberOne, int numberTwo)
{
	int _result;

	_result = numberOne + numberTwo;

	return _result;
}

double sumOverloading(double numberOne, double numberTwo)
{
	double _result;

	_result = numberOne + numberTwo;

	return _result;
}

float sumOverloading(float numberOne, float numberTwo, float numberThree)
{
	return numberOne + numberTwo + numberThree;
}