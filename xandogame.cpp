#include <iostream>
#include <ctime>  //include for rand and srand fn.
  
//X and O game(tic tac toe)
void drawboard(char *spaces);
void playermove(char *spaces, char player);
void computermove(char *spaces, char computer);
bool checkwinner(char *spaces, char player, char computer);
bool checktie(char *spaces);

int main()
{
   char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
   char player ='x';
   char computer = 'o';
   bool running = true;
    
   drawboard(spaces);

   while(running)
   {
    playermove(spaces, player);
    drawboard(spaces);
    if(checkwinner(spaces, player, computer))
    { running = false;
        break;
    }
    else if(checktie(spaces))
    { running = false;
        break;
    }
    
    computermove(spaces, computer);
    drawboard(spaces);
     if(checkwinner(spaces, player, computer))
    { running = false;
        break;
    }
    else if(checktie(spaces))
    { running = false;
        break;
    }
   }
   
   return 0;
}
void drawboard(char *spaces)
{  std::cout <<'\n';
   std::cout <<"     |     |     "<<'\n';
   std::cout <<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"   "<<'\n';
   std::cout <<"_____|_____|_____"<<'\n';
   std::cout <<"     |     |     "<<'\n';
   std::cout <<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"   "<<'\n';
   std::cout <<"_____|_____|_____"<<'\n';
   std::cout <<"     |     |     "<<'\n';
   std::cout <<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"   "<<'\n';
   std::cout <<"     |     |     "<<'\n';
   std::cout <<'\n';

}
void playermove(char *spaces, char player)
{  int num;
do{
   std::cout <<"Enter into which box you want to mark(1-9)\n";
   std::cin >> num;
   num--;               // one is reduced as the inzex of spaces[] starts at 0.
   if(spaces[num] == ' ')
   {  
    spaces[num] = player;
    break;
   }
}while(num >=0 and num< 9);
}
void computermove(char *spaces, char computer)
{  int num;
   srand(time(0));
   do{                      //Instead simple use while(true){};
   num = rand() % 9;
   if(spaces[num] == ' ')
   {  
    spaces[num] = computer;
    break;
   }
}while(num >= 0 and num < 9);


}
bool checkwinner(char *spaces, char player, char computer)
{  
if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])          //rows match
    spaces[0] == player ? std::cout <<"You win!\n" : std::cout << "You lose\n";
else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    spaces[3] == player ? std::cout <<"You win!\n" : std::cout << "You lose\n";
else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    spaces[6] == player ? std::cout <<"You win!\n" : std::cout << "You lose\n";

else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])    //columns match
    spaces[0] == player ? std::cout <<"You win!\n" : std::cout << "You lose\n";
else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    spaces[1] == player ? std::cout <<"You win!\n" : std::cout << "You lose\n";
else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    spaces[2] == player ? std::cout <<"You win!\n" : std::cout << "You lose\n";

else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])   //diagonal match
    spaces[0] == player ? std::cout <<"You win!\n" : std::cout << "You lose\n";
else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    spaces[2] == player ? std::cout <<"You win!\n" : std::cout << "You lose\n";
else
return false; //No one wins

return true; //Somebody won.

}
bool checktie(char *spaces)
{
   for(int i=0; i<9; i++){
    if(spaces[i] == ' ')
    return false;
   }
   std::cout <<"It is a tie\n";
   return true;
}
