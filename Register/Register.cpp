#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {

int choice;

	cout << "Hello and welcome to the registration system!\n" << endl;

	cout << "1.LOGIN\n";
	cout << "2.SGINUP\n";

	cin >> choice;

	if (choice == 1) {

		cout << "Work in progress! \n" << endl;













	}
	else if (choice == 2) {

		

		
		string username;
		int pass;


		cout << "User Name: ";
		cin >> username;

		cout << "Password(Only numarics): ";
		cin >> pass;

		ofstream testFile(username + ".txt");

		
		testFile <<"UserName: " << username << endl;
		testFile <<"Password: " << pass << endl;

		
		testFile.close();

		cout << "you are sgined up! \n" << endl;
		

	}





}