#include <iostream>
#include "game.hpp"

int main()
{
  Game myGame;
  int turn = 0;
  bool gameOver = false;
  int rowIn;
  int colIn;

  std::cout << "welcome to tic tac toe!" << std::endl;

  while(gameOver == false)
  {
    myGame.printBoard();
    if(turn == 0)
    {
      std::cout << "It is player One's turn!" << std::endl;
    }
    else
    {
      std::cout << "It is player Two's turn!" <<std::endl;
    }

    //do the turn
    std::cout << "Pick a Row: ";
    std::cin >> rowIn;
    std::cout << "Pick a Collumn: ";
    std::cin >> colIn;

    myGame.makeMove(turn,rowIn,colIn);

    turn++;
    turn %= 2;
  }
}
