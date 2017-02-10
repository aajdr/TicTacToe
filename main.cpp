#include <iostream>
#include "game.hpp"

int main()
{
  Game myGame;
  int turn = 0;
  bool gameOver = false;
  int rowIn;
  int colIn;
  bool turnOver = false;

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

    while(turnOver == false)
    {
      //do the turn
      std::cout << "Pick a Row: ";
      std::cin >> rowIn;
      std::cout << "Pick a Collumn: ";
      std::cin >> colIn;

      turnOver = myGame.makeMove(turn,rowIn,colIn);
    }
      turnOver = false;

      gameOver = myGame.testForWin();

      turn++;
      turn %= 2;
    }
    myGame.printBoard();
    if(turn == 1)
    {
      std::cout << "X's Win!!" << std::endl;
    }
    else
    {
    std::cout << "O's Win!!" << std::endl;
    }
}
