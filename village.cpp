#include <iostream>
#include <stdlib.h>
#include "Paths.h"

int first_village_path;

void village()
{
  int baker; //Holds the users choice of which baker they go to.
  std::cout << "=====================================================================================\n" << std::endl;
  std::cout << "It's a bright sunny day" << std::endl;
  std::cout << "Townspeople are bustling in the streets" << std::endl;
  std::cout << "You see children playing, people working, everything seems to be going as it should be" << std::endl;
  std::cout << "You are walking along the street when a Baker invites you to try some of his baked goods" << std::endl;
  std::cout << "You have keys to find, but this might help what do you do?\n" << std::endl;
  std::cout << "1) Talk to the Baker" << std::endl;
  std::cout << "2) No thanks! (Keep looking)" << std::endl;
  std::cout << "=====================================================================================\n" << std::endl;
  retry:
  std::cout << "What is your choice? :";
  std::cin >> baker;

  if(std::cin.fail()) 
  {
    std::cout << "Not an option! Press either 1 or 2" << std::endl;
    std::cin.clear();
    std::cin.ignore();
    goto retry;
  }
  if(baker == 1) //This runs if you chose to speak to the Baker.
  {
    int why;
    std::cout << "================================================================\n" << std::endl;
    std::cout << "You decided to go speak with the Baker" << std::endl;
    std::cout << "You start to have a conversation with him" << std::endl;
    std::cout << "Baker: \"Please come and try the bread, baked fresh this morning!\"" << std::endl;
    std::cout << name + ": \"Sure I\'ll try some\""  << std::endl;
    std::cout << "Baker: \"What\'s your name? I\'ve never seen you here before\"" << std::endl;
    std::cout << name + ": \"My name is " + name + ". I\'m not from around here\"" << std::endl;
    std::cout << "Baker: \"Nice to meet you " + name + ". So what brings you here?\"\n" << std::endl;
    std::cout << "1) Ask him about the Keys" << std::endl;
    std::cout << "2) I'm just visiting." << std::endl;
    std::cout << "================================================================\n" << std::endl;
    bake:
    std::cout << "What is your choice? :";
    std::cin >> why;

    if(std::cin.fail()) 
    {
      std::cout << "Not an option! Press either 1 or 2" << std::endl;
      std::cin.clear();
      std::cin.ignore();
      goto bake;
    }
    if (why == 1)
    {
      std::cout << "\n" + name + ": \"I\'m actually on this adventure to find keys to a special chest have you heard anything about this?\""  << std::endl;
      std::cout << "Baker: \"I\'ve heard some say \"" << std::endl;
      std::cout << name + ": \"\"" << std::endl;
      std::cout << "Baker: \"\"" << std::endl;
    } else if (why == 2)
    {
      std::cout << "\n" + name + ": \"Um... I'm just visiting, I heard this town was special.\""  << std::endl;
      std::cout << "Baker: \"Oh yes it\'s really special there is even a legend of a special key hidden in the town\"" << std::endl;
      std::cout << name + ": \"\"" << std::endl;
      std::cout << "Baker: \"\"" << std::endl;
    }
    else 
    {
      std::cout << "Not an option! Press either 1 or 2" << std::endl;
      goto bake;
    }
    first_village_path = 1;
  } 
  else if(baker == 2) //This runs if you chose not to speak to the Baker.
  {
    std::cout << "====================================================\n" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    first_village_path = 2;
  }
  else 
  {
    std::cout << "Not an option! Press either 1 or 2" << std::endl;
    goto retry;
  }

}



/* Create a path you want to create and hide the key 
somewhere in the path for the user to find also change 
the name to this file to whatever you want the theme to 
be like dungeon, sewer, village, space_ship 

Also you can make the key whatever you want but let myles know so he can change 
the keys that must be found in the home function or if you want you can use the
default which is: Key 2 == 6271

If you find a bug try to fix it or leave a note so that we can watch out for it and
hopefully fix it

Make sure to export this function so that it can be used in the main function
Good luck, if you need help just ask let's do this! Happy coding!*/