#include <iostream>
#include <ctime>  

char userchoice();
char compchoice();
void showchoice(char ch);
void winner(char uch, char cch);



int main()
{ 
    char uch, cch;
    int con;
   do{
    std::cout <<"********Rock-Paper-Scissor Game***********\n";
    uch = userchoice();
    std::cout << "User choice = ";
      showchoice(uch);
    cch = compchoice();
    std::cout << "Computer choice = ";
    showchoice(cch);

    winner(uch, cch);
    std::cout <<"*******************************************\n";
    std::cout <<"Do you want to play again(0/1)?";
    std::cin >> con;
    std::cout <<"*******************************************\n";
   }while(con!=0);
}

char userchoice()
{   char uch;
    std::cout <<"Enter you choice(r/p/s)\n";
    std::cin >> uch;
    return uch;
}
char compchoice()
{   srand(time(0)); // if we keep it here only, it provides seeding. when I placed in main(), the computer choice isn't changing.
    int n= (rand()%3)+1;
    switch(n)
    {
        case 1 : return 'r';
                 break;
        case 2 : return 'p';
                 break;         
        case 3 : return 's';
                 break;
        default: return 'r';
                 break;
    }

}
void showchoice(char ch)
{
    switch(ch)
    {
        case 'r': std::cout <<"Rock\n";
                  break;
        case 'p': std::cout <<"Paper\n";
                  break;
        case 's': std::cout <<"Scissor\n";
                  break;
        default: std::cout <<"Invalid choice\n";
                  break;
    }
}
void winner(char uch, char cch)
{
    if(uch == 'r')
    { 
        if(cch =='p')
            std::cout <<"Computer wins!\n";
        else if(cch =='s')
          std::cout <<"You win!\n";
        else
          std::cout<<"Draw\n";

    }
    else if(uch == 'p')
    { 
        if(cch =='s')
            std::cout <<"Computer wins!\n";
        else if(cch =='r')
          std::cout <<"You win!\n";
        else
          std::cout<<"Draw\n";
          
    }
    else if(uch == 's')
    { 
        if(cch =='r')
            std::cout <<"Computer wins!\n";
        else if(cch =='p')
          std::cout <<"You win!\n";
        else
          std::cout<<"Draw\n";
    }
    else
    std::cout <<"Invalid game input:(\n";
}
