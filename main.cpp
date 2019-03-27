#include <stdio.h>
#include <iostream>

int key1;
int key2;
int key3;
std::string name; 

std::string beginning() //The beginning path should start the game and lead to the seperate files with their own paths but lead back to home hopefully after finding the key.
	{
    int path;
    std::cout << "Here are your paths to find the keys, what will you choose, where could they be?\n\n";
		std::cout << "1)  \n"; // Path for Myles
		std::cout << "2)  \n"; // Path Fabian
		std::cout << "3)  \n"; // Path for Marcos
		std::cin >> path;
		if (path == 1) 
		{
      std::cout << "Going to Myles path\n"; // Name should be changed after path is created
		  //Path
		} else if (path == 2) 
		{
      std::cout << "Going to Fabian path\n"; // Name should be changed after path is created
		  //Path
		} else if (path == 3) {
      std::cout << "Going to Marcos path\n"; // Name should be changed after path is created
		  //Path
		} else {
			std::cout << "Invalid try again.\n";
		}
		return 0;
	}

std::string home() //Home function. Every path that ends should lead here
  {
		std::cout << "You are Home.\n";
		std::cout << "=======================\n";
    std::cout << "Do you have the 3 keys?\n";
		std::cout << "=======================\n";
		std::cout << "Key 1: ";
		std::cin >> key1;
		std::cout << "\nKey 2: ";
		std::cin >> key2;
		std::cout << "\nKey 3: ";
		std::cin >> key3;

		if (key1 == 3016 && key2 == 6271 && key3 == 4001) //If all the keys are found run the End game
		{
      std::cout << "You have opened the chest!\n";
      std::cout << "Inside there is another key with a letter.\n";
			std::cout << "=========================\n";
			std::cout << "It reads...\n";
			std::cout << "Congratulations! You have completed the Quest and opened the chest.\n";
			std::cout << "You are truly magnificent!\n";
			std::cout << "Inside this chest is a key, a key to a kingdom that belongs to you\n";
			std::cout << "All hail " + name + "the Magnificent you are truly great\n";
			std::cout << "End of letter\n";
			std::cout << "=========================\n";
			std::cout << "Here is you Kingdom rule with great Authority!\n";
			std::cout << ""; //Temporary will put a kingdom of characters
		} else { //If the correct keys weren't found they need to keep looking
			std::cout << "Thats not it keep looking.\n";
      beginning();
		}
		return 0;
  }

int main() //The main function plays everything out
{
	std::cout << "\n\nWhat is your name? :";
	std::cin >> name;
	if(name == "")
	{
		name = "User1";
	}
  std::cout << "Hello, " + name + "\n";
  std::cout << "This is a choose your own adventure game.\n";
  std::cout << "If you want to win, you must find all three keys and come back here to the beginning\n";
  std::cout << "Once you have all the keys you can unlock this chest.\n";
  std::cout << "Good luck and be safe!\n\n\n";
  
	home();
  beginning();
	return 0;
}