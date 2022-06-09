// Tarrant County College - COSC 1436
// Spring / 2022
// Professor Keith Smelser
// Assignment 2 - Week 7
#include<iostream>
#include<string>

using namespace std;

int main() {
	char veteranStatus;
	int myAge;
	char hasDriversLicense = 'N',
		hasBeenOutsideUSA;

	// prompt for veteranStatus
	cout << "Are you a veteran (Y or N)? " << endl;
	cin >> veteranStatus;
	veteranStatus = toupper(veteranStatus);

	// prompt for currrent age
	cout << "What is your current age? " << endl;
	cin >> myAge;

	//prompt if user has been outside USA
	cout << "Have you been outside USA (Y or N)? " << endl;
	cin >> hasBeenOutsideUSA;
	hasBeenOutsideUSA = toupper(hasBeenOutsideUSA);

	if (veteranStatus == 'Y') {
		cout << "Thank you for your service " << endl;
		cout << "*****************************************" << endl;
	}
	if (myAge > 15) {
		//prompt for drivers license
		cout << "Do you have a drivers licence(Y or N) " << endl;
		cin >> hasDriversLicense;
		hasDriversLicense = toupper(hasDriversLicense);
	}
	if (hasDriversLicense == 'Y') {
		cout << "Don't text and drive" << endl;
	}
	if (myAge >= 18) {
		cout << "You can vote" << endl;
	}
	if (myAge >= 65) {
		cout << "You can take free classes at TCC!" << endl;
	}

	if (hasBeenOutsideUSA == 'Y')
	{
		if (veteranStatus == 'Y')
			cout << " Ask if person was stationed overseas" << endl;
		else
			cout << "Ask person which countries were visited" << endl;
	}
	return 0;
}