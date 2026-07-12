#include <iostream>

int main()
{
  int x;
  std::cout<<"Enter num\n";
  std::cin >> x;
  int flag =0;
 
  if(x%3 == 0)
{
std::cout << "FIZZ\n";
flag = 1;
}

  if(x%5 == 0)
{
std::cout << "BUZZ\n";
flag = 1;
}

  if(1 == flag)
std::cout <<'\n';
  
}


