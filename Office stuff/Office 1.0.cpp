#include <iostream>
#include <string>

std::string Car() {
  std::string car;
  std::cout << "Do you have a car?\n";
  std::cin >> car;
  return car;
};

std::string Office() {
  std::string office;
  std::cout << "Do you want an office?\n";
  std::cin >> office;
  if (office == "yes") {
    return "yes";
  } 
  else {
    std::cout << "Don't buy an office\n";
    return "no";
  };
};

void havecar() {
  std::string car;
  car = Car();

  if (car == "yes"){
    std::cout << "Buy an office";
  }
  else if (car == "no") {
    std::cout << "You need to buy a car first";
  };
};

std::string Money() {
  std::string money;
  std::cout << "Do you have money?\n";
  std::cin >> money;

  return money;
  };

int main() {

  std::string money;
  std::string office;
  money = Money();

  if ((money == "yes") || (money == "Yes")){
      office = Office();
    if (office == "yes"){
      havecar();
    };
  };

  return 0;
};


//thanks pixie :)
//written at two in morning. - IK its shit ;) 
//first ever C++ thing