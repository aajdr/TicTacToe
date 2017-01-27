#include <iostream>

char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

void printBoard()//print the board
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      std::cout << board[i][j];
    }
    std::cout << std::endl;
  }

}

int main()
{
  int turn = 0;
  bool gameOver = false;
  int rowIn;
  int colIn;

  std::cout << "welcome to tic tac toe!" << std::endl;

  while(gameOver == false)
  {
    printBoard();
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

    if(turn==0)
    {
      board[rowIn][colIn] = 'X';
    }
    else
    {
      board[rowIn][colIn] = 'O';
    }


    turn++;
    turn %= 2;
  }
}
