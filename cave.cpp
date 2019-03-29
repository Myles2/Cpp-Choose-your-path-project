#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "Paths.h"

int first_path;
int second_second_path;

void cave_end() 
{
int bear1;
int bear2;
int bear3;
int hang;
switch(second_second_path)
  {
    case 1:
      std::cout << "1) Do you Attack the Bear?" << std::endl;
      std::cout << "2) Do you Offer some Chocolate?" << std::endl;
      std::cout << "=====================================================================\n" << std::endl;
      first:
      std::cout << "\nWhat is your choice? :";
      std::cin >> bear1;
      if(std::cin.fail()) 
      {
        std::cout << "Not an option! Press either 1 or 2" << std::endl;
        std::cin.clear();
        std::cin.ignore();
        goto first;
      }
      if(bear1 == 1) 
      {
        std::cout << "==========================================================================\n" << std::endl;
        std::cout << "So you Attacked the Bear!" << std::endl;
        std::cout << "Who do you think you are!! Your gonna fight a BEAR!!" << std::endl;
        std::cout << "Anyone could have told you that wasn't gonna end well" << std::endl;
        std::cout << "You actually hit the Bear in the face" << std::endl;
        std::cout << "Then the Bear speaks! and says..........." << std::endl;
        std::cout << "\"Ouch! what was that for? You come into my house and hit me!? Please leave\"" << std::endl;
        std::cout << "Feeling bad you have no choice other than to leave." << std::endl;
        std::cout << "===========================================================================\n" << std::endl;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
        _getch();
        home();
      } 
      else if (bear1 == 2) 
      {
        std::cout << "=====================================================================================\n" << std::endl;
        std::cout << "So you Offered the Bear chocolate!" << std::endl;
        std::cout << "Not really the most conventional thing to do but...." << std::endl;
        std::cout << "It seemed to work, the Bear seems really thankful" << std::endl;
        std::cout << "Then the Bear speaks! and says..........." << std::endl;
        std::cout << "\"In all of my years living in this cave no one has ever done anything this nice for me!\"" << std::endl;
        std::cout << "I want to give you something for your generosity\n" << std::endl;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
        _getch();
        std::cout << "\"I don\'t know what this goes to but I found it a while back it seems important\"" << std::endl;
        std::cout << "\"I want you to have it maybe you can find a use for it\"\n" << std::endl;
        std::cout << "It's a Key! You found Key 3\n" << std::endl;
        std::cout << "Key 3 is 4001\n" << std::endl;
        std::cout << "Note: Remember this Key's number and key code you will need it to beat the game.\n" << std::endl;
        std::cout << "=====================================================================================\n" << std::endl;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
        _getch();
        home();
      }
      else 
      {
        std::cout << "Not an option! Press either 1 or 2" << std::endl;
        goto first;
      }
      break;
    case 2:
      std::cout << "1) Do you Attack the Bear?" << std::endl;
      std::cout << "2) Do you Stay Quiet?" << std::endl;
      std::cout << "=====================================================================\n" << std::endl;
      second:
      std::cout << "\nWhat is your choice? :";
      std::cin >> bear2;
      if(std::cin.fail()) 
      {
        std::cout << "Not an option! Press either 1 or 2" << std::endl;
        std::cin.clear();
        std::cin.ignore();
        goto second;
      }
      if(bear2 == 1) 
      {
        std::cout << "=============================================================\n" << std::endl;
        std::cout << "So you Attacked the Bear!" << std::endl;
        std::cout << "Who do you think you are!! Your gonna fight a BEAR!!" << std::endl;
        std::cout << "Anyone could have told you that wasn't gonna end well" << std::endl;
        std::cout << "You actually hit the Bear in the eye" << std::endl;
        std::cout << "Then the Bear speaks! and says..........." << std::endl;
        std::cout << "\"Ouch! what was that for? You come into my home and hit me!?\"" << std::endl;
        std::cout << "\"All I was gonna do is ask if you needed some help, " << std::endl;
        std::cout << "and see if you wanted to hang out. Maybe you should just go\"" << std::endl;
        std::cout << "Feeling bad you have no choice other than to leave." << std::endl;
        std::cout << "=============================================================\n" << std::endl;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
        _getch();
        home();
      } 
      else if (bear2 == 2) 
      {
        std::cout << "=========================================================================================\n" << std::endl;
        std::cout << "So you stay quiet!" << std::endl;
        std::cout << "But there is a BEAR!! RIGHT IN FRONT OF YOU!!!" << std::endl;
        std::cout << "Even the sound of your breath can grab his attention" << std::endl;
        std::cout << "You hold your breath, but you can even hear your heartbeat" << std::endl;
        std::cout << "Even with you being the most quiet you have ever been in your life" << std::endl;
        std::cout << "The Bear notices you. In your mind your thinking \"I'm done for.\"" << std::endl;
        std::cout << "The Bear approaches you then..........." << std::endl;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
        _getch();
        std::cout << "The Bear starts to speak! and says............" << std::endl;
        std::cout << "\"What is it your looking for? Let me guess it's some type of treasure! " << std::endl;
        std::cout << "Thats all you humans ever want. Ok well between you and me I heard there's a chest on the" << std::endl;
        std::cout << "right side of this cave maybe you should check it out. When your done you wanna hang out?\n" << std::endl;
        std::cout << "1) Sure! Sound's fun!" << std::endl;
        std::cout << "2) No I've got things to do." << std::endl;
        std::cout << "=========================================================================================\n" << std::endl;
        out:
        std::cout << "\nWhat is your choice? :";
        std::cin >> hang;
        if(std::cin.fail()) 
        {
          std::cout << "Not an option! Press either 1 or 2" << std::endl;
          std::cin.clear();
          std::cin.ignore();
          goto out;
        }
        if(hang == 1) 
        {
          std::cout << "Yes! That's awesome! I never really make that many friends." << std::endl;
          std::cout << "Note: If you try a different choice before meeting the Bear you'll get different options\n" << std::endl;
        } else if (hang == 2)
        {
          std::cout << "Really why does everyone hate me!" << std::endl;
        } else 
        {
          std::cout << "Not an option! Press either 1 or 2" << std::endl;
          goto out;
        }
        std::cout << "==========================================================================================\n" << std::endl;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
        _getch();
        cave();
      }
      else 
      {
        std::cout << "Not an option! Press either 1 or 2" << std::endl;
        goto first;
      }
      break;
    case 3:
      std::cout << "1) Do you Attack the Bear?" << std::endl;
      std::cout << "2) Do you run?" << std::endl;
      std::cout << "=====================================================================\n" << std::endl;
      third:
      std::cout << "\nWhat is your choice? :";
      std::cin >> bear3;
      if(std::cin.fail()) 
      {
        std::cout << "Not an option! Press either 1 or 2" << std::endl;
        std::cin.clear();
        std::cin.ignore();
        goto third;
      }
      if(bear3 == 1) 
      {
        std::cout << "==========================================================================\n" << std::endl;
        std::cout << "So you Attacked the Bear!" << std::endl;
        std::cout << "Who do you think you are!! Your gonna fight a BEAR!!" << std::endl;
        std::cout << "Anyone could have told you that wasn't gonna end well" << std::endl;
        std::cout << "You actually hit the Bear in the nose" << std::endl;
        std::cout << "Then the Bear speaks! and says..........." << std::endl;
        std::cout << "\"Ouch! what was that for? You come into my living quarters and hit me!?\"" << std::endl;
        std::cout << "\"All I was gonna do is ask if you needed some help, " << std::endl;
        std::cout << "and see if you wanted to hang out. Maybe you should just go\"" << std::endl;
        std::cout << "Feeling bad you have no choice other than to leave." << std::endl;
        std::cout << "===========================================================================\n" << std::endl;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
        _getch();
        home();
      } 
      else if (bear3 == 2) 
      {
        std::cout << "=====================================================================================\n" << std::endl;
        std::cout << "So you run, but you did run the first time. Eitherway...." << std::endl;
        std::cout << "As you run, you can see the entrance to the cave" << std::endl;
        std::cout << "Your getting closer your almost out......." << std::endl;
        std::cout << "But right before you reach the end you trip" << std::endl;
        std::cout << "And hit your head on a rock, you bleed out and die." << std::endl;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
        _getch();
        std::cout << "Don't be a wimp!" << std::endl;
        std::cout << "Why did you even come to the cave in the first place" << std::endl;
        std::cout << "Are you trying to find the key?" << std::endl;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
        _getch();
        home();
      }
      else 
      {
        std::cout << "Not an option! Press either 1 or 2" << std::endl;
        goto third;
      }
      break;
  }
}

void cave()
{
  int side;
  std::cout << "=====================================================================================\n" << std::endl;
  std::cout << "It's dark and eerie" << std::endl;
  std::cout << "You immediately regret your decision, but you know the key could possibly be in here" << std::endl;
  std::cout << "So you march on nervous but confident" << std::endl;
  std::cout << "As you slowly walk deeper, and deeper in the cave with your small flashlight" << std::endl;
  std::cout << "You encounter a seperation in the cave which side do you go through?\n" << std::endl;
  std::cout << "1) Left side" << std::endl;
  std::cout << "2) Right side" << std::endl;
  std::cout << "=====================================================================================\n" << std::endl;
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
    std::cout << "==================================================\n" << std::endl;
    std::cout << "You decided to go to the Left" << std::endl;
    std::cout << "You slowly walk deeper in the cave" << std::endl;
    std::cout << "Suddenly you hear a faint noise" << std::endl;
    std::cout << "It gets louder.... and louder..." << std::endl;
    std::cout << "Then you hear a loud roar and realize it's a BEAR!" << std::endl;
    std::cout << "You have to think quick what do you do??" << std::endl;
    std::cout << "==================================================\n" << std::endl;
    first_path = 1;
  } 
  else if (side == 2) 
  {
    std::cout << "====================================================\n" << std::endl;
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
        std::cout << "=====================================================================\n" << std::endl;
        std::cout << "So you hid who wouldn't" << std::endl;
        std::cout << "Terrified out of your mind you stay as quiet as possible" << std::endl;
        std::cout << "The bear approaches and suddenly stops right in front of you" << std::endl;
        std::cout << "Every second feels like hours, you really wish this moment would pass" << std::endl;
        std::cout << "You don't want to make any decisions at this moment but..." << std::endl;
        std::cout << "The bear notices you!!!" << std::endl;
        std::cout << "What do you do?" << std::endl;
        std::cout << "=====================================================================\n" << std::endl;
        cave_end();
      } 
      else if (bear == 2) 
      {
        std::cout << "================================================\n" << std::endl;
        std::cout << "So you ran who wouldn't there's a BEAR!!" << std::endl;
        std::cout << "As you run, you can see the entrance to the cave" << std::endl;
        std::cout << "Your getting closer your almost out......." << std::endl;
        std::cout << "And you made it out!!" << std::endl;
        std::cout << "But you didn't find the key what are you doing!?" << std::endl;
        std::cout << "You need the key, The cave is not for the timid!\n" << std::endl;
        std::cout << "================================================\n" << std::endl;
        second_second_path = 3;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
        _getch();
        home();
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
      std::cout << "====================================================\n" << std::endl;
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
        std::cout << "==========================================================\n" << std::endl;
        std::cout << "You opened the chest!" << std::endl;
        std::cout << "There is a key inside!" << std::endl;
        std::cout << "You found a key!" << std::endl;
        std::cout << "You grab the key!" << std::endl;
        std::cout << "\n     ..................But...................     \n" << std::endl;
        std::cout << "As you grab the key a puff of smoke comes out of the chest" << std::endl;
        std::cout << "It is highly poisonous and you fall to the ground and die." << std::endl;
        std::cout << "==========================================================\n" << std::endl;
        second_second_path = 1;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
        _getch();
        home();
      } 
      else if (chest == 2) 
      {
        std::cout << "==========================================================\n" << std::endl;
        std::cout << "So you didn't open it you might regret that" << std::endl;
        std::cout << "But nevertheless you proceed on" << std::endl;
        std::cout << "As you go deeper you start to lose your sense of direction" << std::endl;
        std::cout << "Soon you start to realize your back where you started" << std::endl;
        std::cout << "You have to make a decision what do you do?" << std::endl;
        std::cout << "==========================================================\n";
        second_second_path = 2;
        std::cout << "\n------------------------Press any key to continue--------------------------\n" << std::endl;
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