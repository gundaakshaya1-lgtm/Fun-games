#include <iostream>
#include <ctime>    //header include for time fn use din line 10

int main(){

int num;
int guess;
int c=0;

srand(time(NULL)); // provide changing in seeding i.e gives new initial no. at each run time or else at every run we have to guess same no.
num = (rand() % 100) +1;
std::cout << "NUMBER GUESSISNG GAME\n";

do{
std::cout << "Enter the number (1-100): ";
std::cin >> guess;
c++;             // for counting no. of tries.

if(guess < num){
  std::cout << "Too low dear!\n";

}
else if(guess > num){
  std::cout << "Too high dear!\n";
}
else{
  std::cout << "CORRECT # : "<< guess << " in " << c << " no. of tries" <<'\n';
}
} while(guess != num);

return 0;

}
