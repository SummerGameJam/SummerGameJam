#include <iostream>
#include <string> 
#include <fstream>

void SongType() {
    if (SongType == "A" ) { //need to globa define songtype??? Same with below? 
std::ifstream RockSongs;
    };

    if (SongType == "B") {
std::ifstream PopSongs;
    }
}

int main() {
		/*
		all log in sytem variables are defined here for some reason
		dunno what i was thinking 
		but cba changing, maybe later
		*/
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

    std::cout << "Welcome!\n";
    std::string gameinfo;
    std::cout << "Are you ready to play the game? y/n: \n";
    std::cin >> gameinfo;

    if (gameinfo == "n") {
        std::cout << "Ok, we are here when you are ready :)\n";
				//call function to exit here
		}
    else {
        std::cout << "Lets go and have some fun :)\n";
    };

    std::string instructions;
    std::cout << "Do you want to hear the instructions? y/n: \n";
    std::cin >> instructions;
    if (instructions == "y") {
        std::cout << "...Thease are the instructions...";
		}
    else {
        std::cout << "Thats fine, we shall continue";
    };

    std::cout << "You can pick what type of songs you wish to be played";
    std::cout << "A = Rock Songs";
    std::cout << "B = Pop Songs";
    std::string SongType;
    std::cout << "Pleae enter what group you want - A,B...: \n";
    std::cin >> SongType;

		//call the song type function
		// need to define counter and points
    counter = 0; //need ;?
    points = 0; //need ;?

    while (counter < 5) { //need to define counter outside of it???
		//call the song type function 
        //Play a random song from the folder with the correct song type 
    }

};