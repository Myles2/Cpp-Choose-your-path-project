#include <stdio.h>
#include <iostream>
#include "Paths.h"

int key1; // These keys are
int key2; // for winning the
int key3; // game.
int pass = 0; //Variable checks if you won the game.
std::string name; //Holds users name.

void beginning() //The beginning path should start the game and lead to the seperate files with their own paths but lead back to home hopefully after finding the key.
	{
    int path; //Variable for the first path to be chosen.
    std::cout << "\nHere are your paths to find the keys, what will you choose, where could they be?\n\n";
		std::cout << "1) Cave \n";
		std::cout << "2) Fabian path \n";
		std::cout << "3) Village \n";
		std::cin >> path;       //Holds path chosen.
		if(path == 1) {         //Cave Path.
			std::cout << "Entered Cave\n";
			cave();
		} else if (path == 2) { // Path.
			std::cout << "Entered Fabian path\n";
			fabian();
		} else if (path == 3) { //Village Path.
			std::cout << "Entered Village\n";
			village();
		} else {
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Invalid try again.\n";
		}
		return beginning();
	}

void home() //Home function. Every path that ends should lead here
  {
		std::cout << "You are Home.\n";
		std::cout << "=======================\n";
    std::cout << "Do you have the 3 keys?\n";
		std::cout << "=======================\n";
		start:
		std::cout << "Key 1: \n";
		std::cin >> key1;
		std::cout << "Key 2: \n";
		std::cin >> key2;
		std::cout << "Key 3: \n";
		std::cin >> key3;
		if(std::cin.fail()) 
      {
        std::cout << "Not an option! Only numbers!" << std::endl;
        std::cin.clear();
        std::cin.ignore();
        goto start;
      }

		if (key1 == 3016 && key2 == 6271 && key3 == 4001) //If all the keys are found you Win!
		{

      std::cout << "You have opened the chest!\n";
      std::cout << "Inside there is another key with a letter.\n";
			std::cout << "===================================================================\n";
			std::cout << "It reads...\n";
			std::cout << "Congratulations! You have completed the Quest and opened the chest.\n";
			std::cout << "You are truly magnificent!\n";
			std::cout << "Inside this chest is a key, a key to a kingdom that belongs to you\n";
			std::cout << "All hail " + name + " the Magnificent you are truly great\n";
			std::cout << "End of letter\n";
			std::cout << "===================================================================\n";
			std::cout << "Here is your Kingdom rule with great Authority!\n";
			std::cout << "    /\\                                                        /\\ \n";
			std::cout << "   |  |                                                      |  |\n";
			std::cout << "  /----\\            Castle of The Magnificent               /----\\ \n";
			std::cout << " [______]             "+name +" The Magnificent                [______]\n";
			std::cout << "  |    |        _____                        _____          |    |\n";
			std::cout << "  |[]  |       [     ]                      [     ]         |  []|\n";
			std::cout << "  |    |      [_______][ ][ ][ ][][ ][ ][ ][_______]        |    |\n";
			std::cout << "  |   [ ][ ][ ]|     |  ,----------------,  |     |[ ][ ][ ]     |\n";
			std::cout << "  |            |     |/'    ____..____    '\\|     |              |\n";
			std::cout << "  \\ []         |     |    /'    ||     '\\   |     |        []   /\n";
			std::cout << "   |      []   |     |   |o     ||     o|   |     |  []        |\n";
			std::cout << "   |           |  _  |   |     _||_     |   |  _  |            |\n";
			std::cout << "   |   []      | (_) |   |    (_||_)    |   | (_) |       []   |\n";
			std::cout << "   |           |     |   |     (||)     |   |     |            |\n";
			std::cout << "   |           |     |   |      ||      |   |     |            |\n";
			std::cout << "  /''          |     |   |o     ||     o|   |     |          ''\\ \n";
			std::cout << " [_____________[_______]-'------''------'-[_______]_____________]\n"; 
		  pass = 1;
		} else { //If the correct keys weren't found they need to keep looking
			std::cout << "\nThats not it keep looking.\n";
      beginning();
		}
  }

int main() //The main function plays everything out
{
	std::cout << "\n\nWhat is your name? :";
	std::cin >> name;
	if(name.length() < 2)
	{
		name = "User1";
	}
	std::cout << "===============================================================================\n";
  std::cout << "Hello, " + name + "\n";
  std::cout << "This is a choose your own adventure game.\n";
  std::cout << "If you want to win, you must find all three keys and come back here to the Home.\n";
  std::cout << "Once you have all the keys you can unlock this chest.\n";
  std::cout << "Good luck and be safe!\n\n";
	std::cout << "===============================================================================\n";
  
	home(); //This is to check if the won already, if so it ends the game.
	if(pass == 1) {
		return 0;
	}
  beginning(); //This runs to give the option of the paths you want to take.
	return 0;
}