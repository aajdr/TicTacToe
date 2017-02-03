#ifndef GAME_H
#define GAME_H

class Game
{
public:
  char board[3][3];

  Game()//sets all squares to nothing
  {
    for(int i=0; i<3; i++)
    {
      for(int j=0; j<3; j++)
      {
        board[j][i] = ' ';
      }
    }
  }

  void printBoard()//print the board
  {
    std::cout << "  0 1 2" << std::endl;
    for(int i=0; i<3; i++)
    {
      std::cout << i << " ";
      for(int j=0; j<3; j++)
      {

        std::cout << board[i][j] ;
        if(j<2)
        {
          std::cout << "|";
        }
      }
      std::cout << std::endl;
      if (i<2)
      {
        std::cout << "  -----" ;
        std::cout << std::endl;
      }

    }

  }

  bool makeMove(int turn, int rowIn, int colIn)//makes inputed box, x or o
  {
    if(rowIn<0 || rowIn>2 || colIn<0 || colIn>2)
    {
      std::cout << "Invalid move, that is outside the board" << std::endl;
      return false;
    }
    else if(board[rowIn][colIn] != ' ')
    {
      std::cout << "That space is taken!" << std::endl;
      return false;
    }
    else
    {
      if(turn==0)
      {
        board[rowIn][colIn] = 'X';
      }
      else
      {
        board[rowIn][colIn] = 'O';
      }
      return true;
    }
  }
};

#endif
