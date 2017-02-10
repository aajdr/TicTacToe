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

  bool testForWin()
  {
    //horizontals
    for(int i=0; i<3; i++)
    {
      if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
      {
        return true;
      }
    }
    //collumns
    for(int i=0; i<3; i++)
    {
      if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board [0][i] != ' ')
      {
        return true;
      }
    }
    //diagonal right
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
      return true;
    }
    //diagonal left
    if(board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
    {
      return true;
    }
    return false;
  }
};

#endif
