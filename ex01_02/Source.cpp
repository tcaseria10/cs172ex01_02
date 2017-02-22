#include <iostream>	
#include <cmath>
#include <string>
using namespace std;

// Tyler Caseria
// CS 172
// ex01_02
// 6 February 2017

void ex03() {
	double length, width, hypotenuse;
	cout << "Input the length of a right triangle: ";
	cin >> length;
	cout << endl;
	cout << "Input the width of a right triangle: ";
	cin >> width;
	cout << endl;
	hypotenuse = sqrt(pow(length, 2) + pow(width, 2));
	cout << "The length of the hypotenuse is " << hypotenuse << "." << endl;
	char response;
	cout << "Input 'y' or 'n': ";
	cin >> response;
	cout << endl;
	if (response == 'y')
		cout << "yes" << endl;
	if (response == 'n')
		cout << "no" << endl;
	char tab = 9;
	cin.ignore();
	cout << "Input your mailing address: ";
	string mailingAddress;
	getline(cin, mailingAddress);
	cout << endl;
	cout << mailingAddress << endl;
	cin.ignore();
	string empty = "";

}

int main() {
	ex03();
	return 0;
}