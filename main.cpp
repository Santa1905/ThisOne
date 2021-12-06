#include <iostream>
<<<<<<< HEAD
using namespace std;
int main()
=======
#include "funcs.h"

using namespace std;

int main()

>>>>>>> ef299d07efd605275be9d8f9f01c65539abd0b56
{
	setlocale(LC_ALL, "Rus");
	double a, b, c;
	char z;
<<<<<<< HEAD
	double procent;

	cout « "Pervoe chislo : ";
	cin » a;
	cout « "Vtoroe: ";
	cin » b;
	cout « "Deistvie: ";
	cin » z;
=======



	cout « "Pervoe chislo : ";
	cin » a;

	cout « "Vtoroe: ";
	cin » b;

	cout « "Deistvie: ";
	cin » z;

>>>>>>> ef299d07efd605275be9d8f9f01c65539abd0b56
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

<<<<<<< HEAD
	case '/':
		cout « " / in progress";
		break;


	default: cout « " ne to deistvie";;
	}

=======

	case '/':
		if (b == 0) {
			cout « "Nelza" « endl;
		}
		else
			cout « " / in progress";

		break;


	default: cout « " net deistviya";;


	}
>>>>>>> ef299d07efd605275be9d8f9f01c65539abd0b56
	return 0;

}