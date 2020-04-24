#include <iostream>
#include <string> 
#include <fstream> 

int main() {

	bool correct = false;
	bool real = true;

	int x;
	int sum;
	sum = 0;

	std::cout << "Welcome to this music game!\n";

	std::string welcome;
	std::cout << "Do you have an account already? y/n: ";
	std::cin >> welcome;

	if ((welcome == "n") || (welcome == "y")) {

		if (welcome == "n") {

			while (correct == false) {

				std::string username;
				std::cout << "Enter a username: ";
				std::cin >> username;

				std::string password;
				std::cout << "Enter a password: ";
				std::cin >> password;

				std::string password1;
				std::cout << "Enter your password again: ";
				std::cin >> password1;

				if (password == password1) {
					std::ofstream ofile;
					ofile.open(username + ".txt");
					ofile << (username + ":" + password);
					ofile.close();
					correct = true;
				}
				else {
					std::cout << "Your passwords do not match, please try again\n";
				};
			}
		}
		if (welcome == "y") {

			while (real == true) {

				std::string login1;
				std::cout << "Please enter your username: \n";
				std::cin >> login1;

				std::string login2;
				std::cout << "Please enter your password: \n";
				std::cin >> login2;

				std::string data;
				std::ifstream ifile;
				ifile.open(login1 + ".txt");
				ifile >> data;

				if (ifile || data == login1 + ":" + login2) {
					ifile.close();
				}
				else {
					std::cout << "Your username or password is invalid, please try again\n";
				};
			};
		}

		std::cout << "Welcome!\n";
	}
	else {
		std::terminate();
		//end proggram
	}
};