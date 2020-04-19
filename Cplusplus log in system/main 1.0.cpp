#include <iostream>
#include <string> 
#include <fstream>

int main() {

    std::string welcome;
    
    std::string username;
    std::string password;
    std::string password1;

    bool correct = false;

    std::string login1;
    std::string login2;

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
            std::ofstream myfile;
            myfile.open (username + ".txt");
            myfile << (username + ":" + password);
            myfile.close();
            correct = true;
          }
          else {
            std::cout << "Your passwords do not match, please try again\n";
        };
    };
  };
};