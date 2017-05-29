#include <iostream>

using namespace std;

const int water = 100;
const int mercury = 357;
const int copper = 1187;
const int silver = 2193;
const int gold = 2660;



int main() {

	int input;

	cout << "Please enter the current observed temperature in Celcius:   ";
	cin >> input;


		if (input <= water * 1.05 && input >= water/1.05) {
			cout << "You are boiling Water!" << endl;
		}
		else if (input <= mercury * 1.05 && input >= mercury/ 1.05) {
			cout << "You are boiling Mercury! Be careful" << endl;
		}
		else if (input <= copper * 1.05 && input >= copper/ 1.05) {
			cout << "You are boiling Copper! Good money!" << endl;
		}
		else if (input <= silver * 1.05 && input >= silver / 1.05) {
			cout << "You are boiling Silver! Dont burn yourself!" << endl;
		}
		else if (input <= gold * 1.05 && input >= gold / 1.05) {
			cout << "You are boiling Gold! I LOVE GOLD (Austin Powers Reference)" << endl;
		}
		else {
			cout << "Substance Unknown" << endl;
		}
		system("pause");
		return(0);
	}


	





