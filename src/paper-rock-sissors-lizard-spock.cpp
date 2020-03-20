//
// File: paper-rock-sissors-lizard-spock.cpp
// Last Modified: 20 March 2000
// Topic: Conditional loops
//

#include <iostream>
#include <stdlib.h>

std::string prsls(int var) {

  std::string output;

  switch(var) {
    case 1:
      output = "Rock";
      break;
    case 2:
      output = "Paper";
      break;
    case 3:
      output = "Scissors";
      break;
    case 4:
      output = "Lizard";
      break;
    case 5:
      output = "Spock";
      break;
    default:
      std::cout << "***Error: Wrong answer! Try again!***\n";
    }
    return output;
}

int main() {
  srand(time(NULL));

  int computer = rand() % 5 + 1;
  int user = 0;
  int switch_var;

  std::cout << "=====================\n";
  std::cout << " rock paper scissors \n";
  std::cout << "    lizard  spock    \n";
  std::cout << "=====================\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";

  std::cout << "\nShoot! ";
  std::cin >> user;

  switch_var = computer;
  std::cout << "\nComputer: " << prsls(switch_var) << "\n";
  switch_var = user;
  std::cout << "User:     " << prsls(switch_var) << "\n";

  if (user == 1 and computer == 3) {
    std::cout << "\nRock crushes scissors!\nYou win!\n\n";
  } else if (user == 1 and computer == 4) {
    std::cout << "\nRock crushes lizard!\nYou win!\n\n";
  } else if (user == 2 and computer == 1) {
    std::cout << "\nPaper covers rock!\nYou win!\n\n";
  } else if (user == 2 and computer == 5) {
    std::cout << "\nPaper disproves Spock!\nYou win!\n\n";
  } else if (user == 3 and computer == 2) {
    std::cout << "\nScissors cuts paper!\nYou win!\n\n";
  } else if (user == 3 and computer == 4) {
    std::cout << "\nScissors decapitates lizard!\nYou win!\n\n";
  } else if (user == 4 and computer == 2) {
    std::cout << "\nLizard eats paper!\nYou win!\n\n";
  } else if (user == 4 and computer == 5) {
    std::cout << "\nLizard poisons spock!\nYou win!\n\n";
  } else if (user == 5 and computer == 1) {
    std::cout << "\nSpock vapourizes rock!\nYou win!\n\n";
  } else if (user == 5 and computer == 3) {
    std::cout << "\nSpock smashes scissors!\nYou win!\n\n";
  } else if (computer == 1 and user == 3) {
    std::cout << "\nRock crushes scissors!\nYou lose!\n\n";
  } else if (computer == 1 and user == 4) {
    std::cout << "\nRock crushes lizard!\nYou lose!\n\n";
  } else if (computer == 2 and user == 1) {
    std::cout << "\nPaper covers rock!\nYou lose!\n\n";
  } else if (computer == 2 and user == 5) {
    std::cout << "\nPaper disproves Spock!\nYou lose!\n\n";
  } else if (computer == 3 and user == 2) {
    std::cout << "\nScissors cuts paper!\nYou lose!\n\n";
  } else if (computer == 3 and user == 4) {
    std::cout << "\nScissors decapitates lizard!\nYou lose!\n\n";
  } else if (computer == 4 and user == 2) {
    std::cout << "\nLizard eats paper!\nYou win!\n\n";
  } else if (computer == 4 and user == 5) {
    std::cout << "\nLizard poisons spock!\nYou lose!\n\n";
  } else if (computer == 5 and user == 1) {
    std::cout << "\nSpock vapourizes rock!\nYou lose!\n\n";
  } else if (computer == 5 and user == 3) {
    std::cout << "\nSpock smashes scissors!\nYou lose!\n\n";
  } else if (user == computer){
    std::cout << "\nIt's a draw!\n\n";
  } else {
    std::cout << "\nTry again\n\n";
  }

  return 0;
}
