#include <iostream>
#include "funcs.h"

using namespace std;

int main()

{
	setlocale(LC_ALL, "Rus");
	double a, b, c;
	char z;

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
		cout « MySub(a, b) « endl;
		break;

	case "*":
		cout « " * in progress";
		break;


	case '/':
		if (b == 0) {
			cout « "Nelza" « endl;
		}
		else
			cout « " / in progress";

		break;


	default: cout « " net deistviya";;


	}
	return 0;

}