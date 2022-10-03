#include <cmath>
#include <iostream>
using namespace std;


int main()
{
	float height;
	float weight;
	float bmi;
	
	// Welcome the user.
	cout << "\nWelcome to BMI calculator.\n\n";
	
	// Get the height of the user.
	cout << "Please enter your height in meters: ";
	if ( ! (cin >> height) ) { cout << "Bad input. Please enter a number next time.\n"; cout << "Aborting BMI calculator.\n"; abort(); }
	
	// Make sure that the received height is reasonable. The user might enter an input in wrong units.
	if (height > 3) { cout << "This height is inhuman. Have you entered the height in meters unit? Please try again.\n"; cout << "Aborting BMI calculator.\n"; abort(); }
	else if (height < 0.2) { cout << "Have you entered the correct height? the input must be positive, and can't be below 0.2 meters. Please try again.\n"; cout << "Aborting BMI calculator.\n"; abort(); }
	
	// Get the weight of the user.
	cout << "Please enter your weight in kg: ";
	if ( ! (cin >> weight) ) { cout << "Bad input. Please enter a number next time.\n"; "Aborting BMI calculator.\n"; abort(); }
	
	// Make sure that the received weight is reasonable. The user might enter an input in wrong units.
	if (weight > 800) { cout << "This weight is inhuman. Have you entered the weight in kg unit? Please try again.\n"; cout << "Aborting BMI calculator.\n"; abort(); }
	else if (weight < 0.3) { cout << "Have you entered the correct weight? the input must be positive, and can't be below 0.3 kg. Please try again.\n"; cout << "Aborting BMI calculator.\n"; abort(); }
	
	// Calculate the bmi of the user.
	bmi = weight / (pow(height, 2));
	
	// Update the user with the results.
	cout << "\nYour BMI is: " << bmi << ".";
}