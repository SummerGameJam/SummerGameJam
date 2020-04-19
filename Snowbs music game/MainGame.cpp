#include <iostream>
#include <string> 
#include <fstream>

int main() {

    std::string welcome;
    
    std::string username;
    std::string password;
    std::string password1;

    bool correct = false;

    std::ifstream ifile;

    std::string login1;
    std::string login2;
		std::string data;
		
		bool real = true;

    int x;
    int sum;
    sum = 0;

    std::cout << "Password sytem\n";

    std::cout << "Do you have an account already? y/n: ";
    std::cin >> welcome; 
    if (welcome == "n" ) {
        while (correct == false) {
          std::cout << "Enter a username: ";
          std::cin >> username;

          std::cout << "Enter a password: ";
          std::cin >> password;

          std::cout << "Enter your password again: ";
          std::cin >> password1;

          if (password == password1) {
            std::ofstream ofile;
            ofile.open (username + ".txt");
            ofile << (username + ":" + password);
            ofile.close();
            correct = true;
          }
          else {
            std::cout << "Your passwords do not match, please try again\n";
        };
    };
  };
    if (welcome == "y") {
        
        while (real == true) {
            std::cout << "Please enter your username: \n";
            std::cin >> login1;
            std::cout << "Please enter your password: \n";
            std::cin >> login2;
            ifile.open (login1 + ".txt");
            ifile >> data;
            if (ifile || data == login1 + ":" + login2){
              std::cout << "Welcome back\n";
              ifile.close();
              real = false;
            }
            else {
                std::cout << "Your username or password is invalid, please try again\n";
            };
        };
    };
    std::cout << "Testing 123";
};