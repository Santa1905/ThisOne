#include <iostream>
#include "funcs.h"

using namespace std; 

int main()
{


	setlocale(LC_ALL, "Rus");
	double a, b, c;
	char z;



	cout << "Pervoe chislo : ";
	cin >> a;

	cout << "Vtoroe: ";
	cin >> b;

	cout << "Deistvie: ";
	cin >> z;

	switch (z)
	{
	case '+':
		cout << MySum(a, b) << endl;
		break;

	case '-':
		cout << MySub(a, b) << endl;
		break;

	case '/':
		cout << MyDiv(a, b) << endl;
		break;

        case '*':
		cout << MyMul(a, b) << endl;
		break;

	default: cout << " net deistviya";;


	}
	return 0;
}

