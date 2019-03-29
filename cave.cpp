#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "Paths.h"

int first_path;
int first_second_path;
int second_second_path;
void cave()
{
  int side;
  std::cout << "It's dark and eerie" << std::endl;
  std::cout << "You immediately regret your decision, but you know the key could possibly be in here" << std::endl;
  std::cout << "So you march on nervous but confident" << std::endl;
  std::cout << "As you slowly walk deeper, and deeper in the cave with your small flashlight" << std::endl;
  std::cout << "You encounter a seperation in the cave which side do you go through?\n" << std::endl;
  std::cout << "1) Left side" << std::endl;
  std::cout << "2) Right side" << std::endl;
  retry:
  std::cout << "\nWhat is your choice? :";
  std::cin >> side;

  if(std::cin.fail()) 
  {
    std::cout << "Not an option! Press either 1 or 2" << std::endl;
    std::cin.clear();
    std::cin.ignore();
    goto retry;
  }
  if(side == 1) 
  {
    std::cout << "You decided to go to the Left" << std::endl;
    std::cout << "You slowly walk deeper in the cave" << std::endl;
    std::cout << "Suddenly you hear a faint noise" << std::endl;
    std::cout << "It gets louder.... and louder..." << std::endl;
    std::cout << "Then you hear a loud roar and realize it's a BEAR!" << std::endl;
    std::cout << "You have to think quick what do you do??" << std::endl;
    first_path = 1;
  } 
  else if (side == 2) 
  {
    std::cout << "You decided to go to the Right" << std::endl;
    std::cout << "You slowly walk deeper in the cave" << std::endl;
    std::cout << "Surprisingly it's starting to get brighter" << std::endl;
    std::cout << "You realize the stones are glowing in here" << std::endl;
    std::cout << "You see in the distance a shiny object you go closer" << std::endl;
    std::cout << "It's a chest do you open it?" << std::endl;
    first_path = 2;
  }
  else 
  {
    std::cout << "Not an option! Press either 1 or 2" << std::endl;
    goto retry;
  }

  int bear;
  int chest;
  int out_or_in;

  switch(first_path) 
  {
    case 1:
      std::cout << "1) Do you hide?" << std::endl;
      std::cout << "2) Do you run?" << std::endl;
      back:
      std::cout << "\nWhat is your choice? :";
      std::cin >> bear;
      if(std::cin.fail()) 
      {
        std::cout << "Not an option! Press either 1 or 2" << std::endl;
        std::cin.clear();
        std::cin.ignore();
        goto back;
      }
      if(bear == 1) 
      {
        std::cout << "So you hid who wouldn't" << std::endl;
        std::cout << "Terrified out of your mind you stay as quiet as possible" << std::endl;
        std::cout << "The bear approaches and suddenly stops right in front of you" << std::endl;
        std::cout << "Every second feels like hours, you really wish this moment would pass" << std::endl;
        std::cout << "You don't want to make any decisions at this moment but..." << std::endl;
        std::cout << "The bear notices you!!!" << std::endl;
        std::cout << "What do you do?" << std::endl;
        first_second_path = 1;
      } 
      else if (bear == 2) 
      {
        std::cout << "" << std::endl;
        first_second_path = 2;
      }
      else 
      {
        std::cout << "Not an option! Press either 1 or 2" << std::endl;
        goto back;
      }
      break;
    case 2:
      std::cout << "1) Open chest" << std::endl;
      std::cout << "2) Don't open" << std::endl;
      here:
      std::cout << "\nWhat is your choice? :";
      std::cin >> chest;
      if(std::cin.fail()) 
      {
        std::cout << "Not an option! Press either 1 or 2" << std::endl;
        std::cin.clear();
        std::cin.ignore();
        goto here;
      }
      if(chest == 1) 
      {
        std::cout << "You opened the chest!" << std::endl;
        std::cout << "There is a key inside!" << std::endl;
        std::cout << "You found a key!" << std::endl;
        std::cout << "You grab the key!" << std::endl;
        std::cout << "\n     ..................But...................     \n" << std::endl;
        std::cout << "As you grab the key a puff of smoke comes out of the chest" << std::endl;
        std::cout << "It is highly poisonous and you fall to the ground and die." << std::endl;
        std::cout << "\n------------------------Press any key to continue--------------------------\n";
        _getch();
        home();
      } 
      else if (chest == 2) 
      {
        std::cout << "So you didn't open it you might regret that" << std::endl;
        std::cout << "But nevertheless you proceed on" << std::endl;
        std::cout << "As you go deeper you get lost" << std::endl;
        std::cout << "Soon you start to realize your back where you started" << std::endl;
        std::cout << "You have to make a decision what do you do?" << std::endl;
        std::cout << "\n------------------------Press any key to continue--------------------------\n";
        _getch();
        cave();
      }
      else 
      {
        std::cout << "Not an option! Press either 1 or 2" << std::endl;
        goto back;
      }
      break;
  }
}


/*Also you can make the key whatever you want but let myles know so he can change 
the keys that must be found in the home function or if you want you can use the
default which is: Key 3 == 4001

If you find a bug try to fix it or leave a note so that we can watch out for it and
hopefully fix it

Make sure to export this function so that it can be used in the main function
Good luck, if you need help just ask let's do this! Happy coding!*/