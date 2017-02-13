#include <iostream>

int long input;
int main()
{
  bool done = false;
    while(done == false)
  {
    std::cout << "Type a number(-1 to end)" << std::endl;
    std::cin >> input;
    if(input == -1)
    {
      done = true;
    }
    else if(input%2 == 0)//tests if input divided by 2 has a remainder of 0
    {
      std::cout << "The number is even" << std::endl;
    }
    else if(input%2 == 1)//tests if input divided by 2 has a remainder of 1
    {
      std::cout << "Number is odd" << std::endl;
    }


  }




}
