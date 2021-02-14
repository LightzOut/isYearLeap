// testic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int option;
int year;
int month;
bool result;
bool res1;
int res2;

bool isLeapYear(int y) {
	if (y >= 1 && y <= 9999) {
		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {
			//cout << " godina " << y << " je leap" << endl;
			return 1;
		}
		else {
			//cout << "godina " << y << " nije leap godina" << endl;
			return 0;
		}
	}
	else {
		//cout << y << " je manji od 1 ili veci od 9999" << endl;
		return -1;
	}
}
int getDaysInMonth(int m, int y) {
	if ((m < 1 || m > 12) || (y <= 1 || y >= 9999)) {
		//cout << "input nije dobar. y je " << year << " a m je " << m << endl;
		return -1;
	}
	else {
		//cout << "input je dobar " << endl;
		result = isLeapYear(y);
		if (result == true) {
			switch (m)
			{
			case 1:
				return 31;
			case 2:
				return 29;
			case 3:
				return 31;
			case 4:
				return 30;
			case 5:
				return 31;
			case 6:
				return 30;
			case 7:
				return 31;
			case 8:
				return 31;
			case 9:
				return 30;
			case 10:
				return 31;
			case 11:
				return 30;
			case 12:
				return 31;
			default:
				break;
			}
		}
		else {
			switch (m)
			{
			case 1:
				return 31;
			case 2:
				return 28;
			case 3:
				return 31;
			case 4:
				return 30;
			case 5:
				return 31;
			case 6:
				return 30;
			case 7:
				return 31;
			case 8:
				return 31;
			case 9:
				return 30;
			case 10:
				return 31;
			case 11:
				return 30;
			case 12:
				return 31;
			default:

				break;
			}
		}
	}
}


int main()
{	
	res1;
	res2;
	//res1 = isLeapYear(2020);
	res2 = getDaysInMonth(2, 1600);
	cout << res2 << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
