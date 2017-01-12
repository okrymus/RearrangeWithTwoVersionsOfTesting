// This program rearrage numbers
// Driver testing the rearrange function
// Programmer: Panupong Leenawarat
// Last modified: 11/23/15

#include <iostream>
#include <iomanip>
using namespace std;

void rearrange(int &x, int &y, int &z);
void mySwap(int &x, int &y);

void main()
{
	int x, y, z;
	cout << endl
		<< "\t          Lab on \"Driver testing the rearrange function.\" "
		<< "\t\t                                by Lee. Panupong          " << endl;
	// PART 1
	x = 1, y = 2, z = 3;
	cout
		<< endl
		<< "Before the call: x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl;       rearrange(x, y, z);
	cout
		<< "After the call : x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl << endl;

	// PART 2
	x = 1; y = 3; z = 2;
	cout
		<< endl
		<< "Before the call: x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl;       rearrange(x, y, z);

	cout
		<< "After the call : x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl << endl;

	// PART 3
	x = 2; y = 1; z = 3;
	cout
		<< endl
		<< "Before the call: x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl;       rearrange(x, y, z);
	cout
		<< "After the call : x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl << endl;

	// PART 4
	x = 2; y = 3; z = 1;
	cout
		<< endl
		<< "Before the call: x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl;       rearrange(x, y, z);

	cout
		<< "After the call : x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl << endl;

	// PART 5
	x = 3; y = 1; z = 2;
	cout
		<< endl
		<< "Before the call: x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl;       rearrange(x, y, z);
	
	cout
		<< "After the call : x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl << endl;

	// PART 1
	x = 3; y = 2; z = 1;
	cout
		<< endl
		<< "Before the call: x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl;       rearrange(x, y, z);
	
	cout
		<< "After the call : x = " << x << " y = " << y << " z = " << z << endl
		<< x << y << z << endl << endl;

	system("pause");

	cout << "\n\tBETTER way to test (using a for loop and a table format)" << endl << endl;

	cout
		<< setw(9) << "" << setw(5) << "x" << setw(5) << "y" << setw(5) << "z" << endl
		<< setw(9) << "" << "=================" << endl;

	for (int count = 1; count <= 6; count++)
	{
		switch (count)
		{
		case 1:	 x = 1;     y = 2;      z = 3;	    break;
		case 2:	 x = 1;     y = 3;      z = 2;	    break;
		case 3:	 x = 2;     y = 1;      z = 3;      break;
		case 4:  x = 2;     y = 3;      z = 1;      break;
		case 5:  x = 3;     y = 1;      z = 2;      break;
		case 6:  x = 3;     y = 2;      z = 1;
		}
		cout << setw(9) << "Start:" << setw(5) << x << setw(5) << y << setw(5) << z << endl;
		rearrange(x, y, z);
		cout << setw(9) << "End:" << setw(5) << x << setw(5) << y << setw(5) << z << endl << endl;
	}
	system("pause");
	return ;
}

void rearrange(int &x, int &y, int &z)
{
	if (x > y)
		mySwap(x, y);
	if (y > z)
		mySwap(y, z);
	if (x > y)
		mySwap(x, y);
}

void mySwap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}