#include <iostream>

using namespace std;

//Author: Justin Schieck
//Date: May 15 2017


const int waterC = 100;
const int mercuryC = 357;
const int copperC = 1187;
const int silverC = 2193;
const int goldC = 2660;

const int waterF = (waterC + 32) * 9 / 5;
const int mercuryF = (mercuryC + 32) * 9 / 5;
const int copperF = (copperC + 32) * 9 / 5;
const int silverF = (silverF + 32) * 9 / 5;
const int goldF = (goldC + 32) * 9 / 5;
 
const int waterK = waterC + 273.15;
const int mercuryK = mercuryC + 273.15; 
const int copperK = copperC + 273.15;
const int silverK = silverC + 273.15;
const int goldK = goldC + 273.15;


int main() {

	int input;
	int choice;

	cout << "Please enter 1 for Celcius, 2 for Farhrenhiet or 3 for Kelvin:   ";
	cin >> choice;


	switch (choice) {
	case 1:
		cout << "Please enter the current observed temperature in Celcius:   ";
		cin >> input;

		if (input <= waterC * 1.05 && input >= waterC / 1.05) {
			cout << "You are boiling Water! Dont burn it!" << endl;
		}
		else if (input <= mercuryC * 1.05 && input >= mercuryC / 1.05) {
			cout << "You are boiling Mercury! Be careful" << endl;
		}
		else if (input <= copperC * 1.05 && input >= copperC / 1.05) {
			cout << "You are boiling Copper! Good money!" << endl;
		}
		else if (input <= silverC * 1.05 && input >= silverC / 1.05) {
			cout << "You are boiling Silver! Dont burn yourself!" << endl;
		}
		else if (input <= goldC * 1.05 && input >= goldC / 1.05) {
			cout << "You are boiling Gold! I LOVE GOLD (Austin Powers Reference)" << endl;
		}
		else {
			cout << "Substance Unknown" << endl;
		}
		break;
	case 2:
		cout << "Please enter the current observed temperature in Fahrenheit:   ";
		cin >> input;

		if (input <= waterF * 1.05 && input >= waterF / 1.05) {
			cout << "You are boiling Water! Dont burn it!" << endl;
		}
		else if (input <= mercuryF * 1.05 && input >= mercuryF / 1.05) {
			cout << "You are boiling Mercury! Be careful" << endl;
		}
		else if (input <= copperF * 1.05 && input >= copperF / 1.05) {
			cout << "You are boiling Copper! Good money!" << endl;
		}
		else if (input <= silverF * 1.05 && input >= silverF / 1.05) {
			cout << "You are boiling Silver! Dont burn yourself!" << endl;
		}
		else if (input <= goldF * 1.05 && input >= goldF / 1.05) {
			cout << "You are boiling Gold! I LOVE GOLD (Austin Powers Reference)" << endl;
		}
		else {
			cout << "Substance Unknown" << endl;
		}
		break;
	case 3:
		cout << "Please enter the current observed temperature in Kelvin:   ";
		cin >> input;

		if (input <= waterK * 1.05 && input >= waterK / 1.05) {
			cout << "You are boiling Water! Dont burn it" << endl;
		}
		else if (input <= mercuryK * 1.05 && input >= mercuryK / 1.05) {
			cout << "You are boiling Mercury! Be careful" << endl;
		}
		else if (input <= copperK * 1.05 && input >= copperK / 1.05) {
			cout << "You are boiling Copper! Good money!" << endl;
		}
		else if (input <= silverK * 1.05 && input >= silverK / 1.05) {
			cout << "You are boiling Silver! Dont burn yourself!" << endl;
		}
		else if (input <= goldK * 1.05 && input >= goldK / 1.05) {
			cout << "You are boiling Gold! I LOVE GOLD (Austin Powers Reference)" << endl;
		}
		else {
			cout << "Substance Unknown" << endl;
		}
		break;
	}
	system("pause");
	return(0);

}
 









