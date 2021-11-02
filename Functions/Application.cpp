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

// Recursion 
// Sum Numbers between (m & n)
// Recursion Function Declarartion
int RecursiveSum(int smallerNumber, int biggerNumber);

// Recursion
// Factorial of a number 
// Recursion Function Declararion
int RecursiveFactorial(int numberToFactorial);

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

	/*START: Sum Recursion*/

	int smallerNumber = 2, biggerNumber = 4, sum = 0;

	// Sum solved in a forloop then recursive
	//for (int i = smallerNumber; i<= biggerNumber; i++)
	//{
	//	sum += i;
	//}

	std::cout << "The sum is " << RecursiveSum(smallerNumber, biggerNumber) << std::endl;

	/*END: Sum Recursion*/

	/*START: Factorial Recursion*/

	int numberToFact = 5;
	//int resultOfFact = 1;
	//int count = 1;

	//for (int i = 2; i <= numberToFact ; i++)
	//{
	//	resultOfFact *= i;
	//}

	std::cout << numberToFact << "! = " << RecursiveFactorial(numberToFact) << std::endl;

	/*END: Factorial Recusrion*/


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

int RecursiveSum(int smallerNumber, int biggerNumber)
{
	if (biggerNumber == smallerNumber)	// Base Case to break the recursion
		return biggerNumber;		   // Important part in recursive function, to avoid Stack Overflow

	return smallerNumber + RecursiveSum(smallerNumber + 1, biggerNumber);
}

int RecursiveFactorial(int numberToFactorial)
{
	if (numberToFactorial > 1)
		return numberToFactorial * RecursiveFactorial(numberToFactorial - 1); // 5-1, 4-1, until >1
	else return 1;
}