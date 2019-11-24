// myTestCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<cmath>

int main()
{
	int Y, x;
	cout << "Enter a value of x : " << endl;
	start:
	cin >> x;
	Y = pow(x, 3);
	if (x > -5 && x <= 3) {
		cout << "the value of Y = " << Y << endl;
	}
	else {
		cout << "Enter a valid number for x: " << endl;
		goto start;
	}


	system("pause");
	return 0;
}
