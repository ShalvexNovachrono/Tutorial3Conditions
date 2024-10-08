#include <iostream>
#include <string>

using namespace std;


string MyNameIs = "Shalvex Novachrono";

int main() {
	// 2.a
	cout << "2.a" << endl;
	cout << (5 < 1) << endl;


	// 2.b
	cout << "2.b" << endl;
	cout << (5 > 1) << endl;


	// 2.c
	cout << "2.c" << endl;
	cout << (5 == 1) << endl;


	// 2.d
	cout << "2.d" << endl;
	cout << (90 != 90) << endl;


	// 2.e
	cout << "2.e" << endl;
	cout << ((-5 * 2) == (5 * 2)) << endl;


	// 3.a
	cout << "3.a" << endl;
	float grade;
	cout << "Enter your grade please: ";
	cin >> grade;
	cout << "passed: " << (grade >= 40) << endl;


	// 3.b
	cout << "3.b" << endl;
	cout << "Enter your first grade please: ";
	cin >> grade;
	float grade2;
	cout << "Enter your second grade please: ";
	cin >> grade2;
	if (grade >= 75 && grade2 >= 75) {
		cout << "1st class grade" << endl;
	} else {
		cout << "passed: " << ((grade >= 40) ? "2" : "1") << ":" << ((grade2 >= 40) ? "2" : "1") << endl;
	}


	// 3.c
	cout << "3.c" << endl;
	string name;
	cout << "Enter your name: ";
	cin >> name;
	if (name == "bob") {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}


	// 3.d
	cout << "3.d" << endl;
	cout << ("bob" > "car") << endl;
	cout << ("bob" < "car") << endl;
	// It checks if alphabet is Decimal is more than the other 

	// 3.e
	int playerAmmo = 0;
	const int MAX_AMMO = 10;
	bool isPlayerOutOfAmmo = (playerAmmo < 0) ? true : false;
	cout << "isPlayerOutOfAmmo: " << isPlayerOutOfAmmo << endl;



	// Logical operators
	int Percentage = 5;
	cout << (Percentage >= 0) << endl;
	cout << (Percentage <= 100) << endl;

	//
	cout << (5 < 10) && !(5 > 10); // true
	//
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << (num >= 70 & num <= 100) ? "1" : "0";
	//
	name;
	cout << "Enter your name: ";
	getline(cin, name);
	if (name != "bob") {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}


	// Global vs Locals 
	cout << "Name: " << MyNameIs;


}
