#include <iostream>

int main(){

  std::string office;
  std::string car;
  std::string money;

  std::cout << "Do you have money?\n";
  std::cin >> money;

  if (money == "yes") {
    std::cout << "Do you want an office?\n";
    std::cin >> office;
    if (office == "yes"){
      std::cout << "Do you have a car?\n";
      std::cin >> car;
      if (car == "yes"){
        std::cout << "Buy an office\n";
      }
      else {
        std::cout << "Buy a car\n";
      };
    }
    else {
      std::cout << "Don't buy an office\n";
    };
  }
  else {
    std::cout << "Sounds like a you issue\n";
  };

};

//pixie wrote this to show me how shit mine was