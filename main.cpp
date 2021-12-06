#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c;
	char z;
	double procent;

	cout « "Pervoe chislo : ";
	cin » a;
	cout « "Vtoroe: ";
	cin » b;
	cout « "Deistvie: ";
	cin » z;
	switch (z)
	{
	case '+':
		cout « " + in progress";
		break;

	case '-':
		cout « " - in progress";
		break;

	case "*":
		cout « " * in progress";
		break;

	case '/':
		cout « " / in progress";
		break;


	default: cout « " ne to deistvie";;
	}

	return 0;

}