#include <iostream>
#include <string> 
#include <fstream> //for file stuff

void SongTypeFunc(std::string songType) {

	if (songType == "A") {
		std::ifstream RockSongs;
	}

	if (songType == "B") {
		std::ifstream PopSongs;
	}
};

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
	}

	std::cout << "Welcome!\n";
	std::string gameinfo;
	std::cout << "Are you ready to play the game? y/n: \n";
	std::cin >> gameinfo;

	if (gameinfo == "n") {
		std::cout << "Ok, we are here when you are ready :)\n";
		std::terminate();
	}
	else {
		std::cout << "Lets go and have some fun :)\n";
	}

	std::string instructions;
	std::cout << "Do you want to hear the instructions? y/n: \n";
	std::cin >> instructions;
	if (instructions == "y") {
		std::cout << "...Thease are the instructions...\n";
	}
	else {
		std::cout << "Thats fine, we shall continue\n";
	}

	std::cout << "You can pick what type of songs you wish to be played\n";
	std::cout << "A = Rock Songs\n";
	std::cout << "B = Pop Songs\n";
	std::string songType;
	std::cout << "Please enter what group you want - A,B...: \n";
	std::cin >> songType;

	SongTypeFunc(songType);

	int counter;
	int points;
	int lifes;

	std::string SoundLocation;

	counter = 0;
	points = 0;
	lifes = 4;

	while (counter < 5) {

		SongTypeFunc(songType);
		counter += 1; //increase counter by one

		if (songType == "A") {
			SoundLocation = "E:\Documents\GitHub\SummerGameJam\Snowbs music game\Files\Audio\RockSongs"; //file directory of RockSongs folder;
		}

		if (songType == "B") {
			SoundLocation = "E:\Documents\GitHub\SummerGameJam\Snowbs music game\Files\Audio\PopSongs"; //file directory of PopSongs
		}

		std::string PlayedSong;
		PlayedSong = "Hello"; //this needs to = the song that was played

		std::string ThoughtPlayedSong;
		std::cout << "What song do you think was played?: \n";
		std::cin >> ThoughtPlayedSong;

		std::cout << "The list of songs were\n";

		SongTypeFunc(songType);

		if ((PlayedSong == ThoughtPlayedSong) && (counter == 1)) {
			points = points + 3;
			std::cout << "Well done, you have got three points.\n";
		}
		else {
			lifes = lifes - 1;
			std::cout << "Not quite right, try again.\n";
			std::cout << "You have, " << lifes << " left";
		}

		if ((PlayedSong == ThoughtPlayedSong) && (counter == 2)) {
			points = points + 2;
			std::cout << "Well done, you have got two points.";
		}
		else {
			lifes = lifes - 1;
			std::cout << "Not quite right, try again.\n";
			std::cout << "You have, " << lifes << " left";
		}

		if ((PlayedSong == ThoughtPlayedSong) && (counter == 3)) {
			points = points + 1;
			std::cout << "Well done, you have got one point.";
		}
		else {
			lifes = lifes - 1;
			std::cout << "Not quite right, try again.\n";
			std::cout << "You have, " << lifes << " left";
		}

		//loop back to start of while statment

		//global statment so if at any point lives = 0 it shows the score board function 

		//global statment so if at end point user types STOP the game quits and the quit stuff is shown (Scorebord funtino would be called in that)

		//should write you values to your acount file so you can continue playing once you have logged in. This will prob be in versino 2.0

		/*
		make the directory a variable
		make a new function inside the main one
		like if songType is A then VARIABLENAME == rocksongs

		(folder)
		then do the same thing for B and other ones
		then assing the song name to a variable
		and if the user input = that variable then points and so on
		*/
	}
	return 0;
	//test update
};