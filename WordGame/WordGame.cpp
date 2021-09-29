// A simple word game to demonstrate the use of the built-in
// cin functions of getline, get, and ignore. 

#include <iostream>
#include <string> //To use string variables
using namespace std;

int main()
{
	string name;
	string age;
	string city;
	string college;
	string profession;
	string animal;
	string petname;


	cout << "This is a fantastic Word Game!!!";
	cout << "\nPlease enter the information asked for and watch the fun unfold!" << endl;

	cout << "\nWhat is your name: ";
	getline(cin, name); //To account for spaces in case the user inputs their full name
	cout << "\nHow old are you or at least how old you claim to be: ";
	cin >> age;
	cin.ignore(); //To make sure to not skip any other characters and use them for other inputs
	cout << "\nName your favorite city: ";
	getline(cin, city); //Again, account for whitespaces in case their city name is more than one word
						// eg: San Antonio, New York City, Los Angeles, etc.
	cout << "\nName a college: ";
	getline(cin, college); //Account for multiple word college names
	cout << "\nWhat profession do you want to be when you grow up: ";
	getline(cin, profession); //Specific professions may have more than one word in their name
	cout << "\nWhat is your favorite animal: ";
	getline(cin, animal); //Some animals have more than one word in their name
						  //eg: Bald Eagle, Black Vulture, African Wild Dog, etc.
	cout << "\nWhat is your pet's name (current, future, or past): ";
	getline(cin, petname); //Some pet names have more than one word, though I have not encountered
						   //one that does yet.
	cout << "\n\nReady for fun? Press [Enter] or [Return]?";
	cin.get(); //waits for the user to input the enter or return key on their keyboard.

	cout << "\n\n\nThere was once a person named " << name << " who lived in " << city << ".";
	cout << "\nAt the age of " << age << ", " << name << " went to college at " << college << "." << endl;
	cout << name << " graduated and went to work as a " << profession << ".";
	cout << "\nThen, " << name << " adopted a(n) " << animal << " named " << petname << ".";
	cout << "\nThey both lived happily ever after!" << endl;
	return 0;
}