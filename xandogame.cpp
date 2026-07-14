#include <iostream>
#include <ctime>

void drawboard(char spaces[9]);
void playermove(char *spaces, char player);
void computermove(char *spaces, char computer);
bool checkwinner(char *spaces, char player, char computer);
bool checktie(char *spaces);

int main()
{   char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    std::cout <<"Enter the player character in the board\n";
    drawboard(spaces);
   

    while(running)
    {
        playermove(spaces, player);
        drawboard(spaces);
        if(checkwinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(checktie(spaces))
        {
            running = false;
            break;
        }

        computermove(spaces, computer);
        drawboard(spaces);
         if(checkwinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(checktie(spaces))
        {
            running = false;
            break;
        }

    }

 return 0;
}

void drawboard(char spaces[9]){
    
    std::cout <<"     |     |     "<<'\n';
    std::cout <<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  "<<'\n';
    std::cout <<"_____|_____|_____"<<'\n';
    std::cout <<"     |     |     "<<'\n';
    std::cout <<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  "<<'\n';
    std::cout <<"_____|_____|_____"<<'\n';
    std::cout <<"     |     |     "<<'\n';
    std::cout <<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  "<<'\n';
    std::cout <<"     |     |     "<<'\n';
    std::cout <<'\n';

}
void playermove(char *spaces, char player){
    int num;
    
    do{
        std::cout <<"Enter in which box you want to mark(1/9):\n";
        std::cin >> num;
         num--;
          if(spaces[num] == ' ')
        {
            spaces[num] = player;
            break;
        }
    }while(num>=0 and num<9);
}

void computermove(char *spaces, char computer){
    int num;
    srand(time(0));
    do{    
         num = rand() % 9; 
         if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[2] == ' ') //rows
            {spaces[2] = computer;
                break;}
            else if(spaces[0] != ' ' && spaces[0] == spaces[2] && spaces[1] == ' ')
            {spaces[1] = computer;
                break;}
            else if(spaces[1] != ' ' && spaces[1] == spaces[2] && spaces[0] == ' ')
            {spaces[0] = computer;
                break;}
            else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[5] == ' ')
            {spaces[5] = computer;
                break;}
            else if(spaces[3] != ' ' && spaces[3] == spaces[5] && spaces[4] == ' ')
            {spaces[4] = computer;
                break;}
            else if(spaces[4] != ' ' && spaces[4] == spaces[5] && spaces[3] == ' ')
            {spaces[3] = computer;
                break;}
            else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[8] == ' ')
           { spaces[8] = computer;
            break;}
            else if(spaces[6] != ' ' && spaces[6] == spaces[8] && spaces[7] == ' ')
            {spaces[7] = computer;
                break;}
            else if(spaces[7] != ' ' && spaces[7] == spaces[8] && spaces[6] == ' ')
            {spaces[6] = computer;
                break;}
                                          //columns
            else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[6] == ' ')
            {spaces[6] = computer;
                break;}
            else if(spaces[0] != ' ' && spaces[0] == spaces[6] && spaces[3] == ' ')
            {spaces[3] = computer;
                break;}
            else if(spaces[3] != ' ' && spaces[3] == spaces[6] && spaces[0] == ' ')
            {spaces[0] = computer;    
                break;}           
            
            else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[7] == ' ')
            {spaces[7] = computer;
                break;}
            else if(spaces[1] != ' ' && spaces[1] == spaces[7] && spaces[4] == ' ')
            {spaces[4] = computer;
                break;}
            else if(spaces[4] != ' ' && spaces[4] == spaces[7] && spaces[1] == ' ')
            {spaces[1] = computer;
                break;}

            else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[8] == ' ')
            {spaces[8] = computer;
                break;}
            else if(spaces[2] != ' ' && spaces[2] == spaces[8] && spaces[5] == ' ')
            {spaces[5] = computer;
                break;}
            else if(spaces[5] != ' ' && spaces[5] == spaces[8] && spaces[2] == ' ')
            {spaces[2] = computer;  
                break;}
                                        //diagonals
            else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[8] == ' ')
            {spaces[8] = computer;
                break;}
            else if(spaces[0] != ' ' && spaces[0] == spaces[8] && spaces[4] == ' ')
            {spaces[4] = computer;
                break;}
            else if(spaces[4] != ' ' && spaces[4] == spaces[8] && spaces[0] == ' ')
            {spaces[0] = computer;
                break;}

            else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[6] == ' ')
            {spaces[6] = computer;
                break;}
            else if(spaces[2] != ' ' && spaces[2] == spaces[6] && spaces[4] == ' ')
            {spaces[4] = computer;
                break;}
            else if(spaces[4] != ' ' && spaces[4] == spaces[6] && spaces[2] == ' ')
            {spaces[2] = computer;
                break;}    
            
            else if(spaces[num] == ' ')
           { spaces[num] = computer;
            break;
           }

        
    }while(num>=0 and num<9);
}

bool checkwinner(char *spaces, char player, char computer)
{  if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])          //rows match
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

return true; //Somebody won
}

bool checktie(char *spaces)
{  
    for(int i=0; i<9; i++)
    if(spaces[i] == ' ')
        return false;
     std::cout <<"It's a tie\n";
     return true;
}
