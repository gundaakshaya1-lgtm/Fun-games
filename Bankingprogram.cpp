#include <iostream>
#include <iomanip> // iomanip, header file included to set floating point precicion.(check line#40 )
void showbalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main()
{ 
  double balance=0;
  int choice=0;
do{  std::cout <<"How can we help you ? Select from the following choices.\n";
  std::cout <<"1. Show balance\n";
  std::cout <<"2. Deposit Amount\n";
  std::cout <<"3. Withdraw Amount\n";
  std::cout <<"4. Exit\n";
  std::cin >> choice;
   
 std::cin.clear();   //stops our program going in crazy like oo loop, when we enter someother character. 
 fflush(stdin);      // i.e clears input buffer.
   switch(choice)
   {
     case 1: show balance(balance);
             break;
     case 2: balance += deposit(balance);
             std::cout <<"Now, your balance = $"<< balance<<'\n';
             break;
     case 3: balance -= withdraw(balance);
             std::cout <<"Now, your balance = $"<< balance<<'\n';
             break;
     case 4: std::cout <<"Thankyou fro visiting us :)\n";
             break;
     default: std::cout <<"Invalid choice\n";
             break;
   }
  }while(choice!=4); 
}

void showbalance(double balance)
{
  std::cout <<"Your balance = $"<<std::setprecision(2) <<std::fixed << balance<<'\n'; //iomanip application.
}

double deposit(double balance)
{
  double amount;
  std::cout <<"Enter the amount to be deposited\n";
  std::cin >> amount;
  if(amount<0)
  {
    std::cout <<"Invalid amount entered:(\n";
    return 0;
  }
  else
    return amount;
}
    
double withdraw(double balance)
{
  double amount;
  std::cout <<"Enter the amount to be withdrawn\n";
  std::cin >> amount;
if(amount>balance)
{
  std::cout <<"Insufficient balance\n";
  return 0;
}
else if(amount<0)
{
  std::cout <<"Invalid Amount entered:(\n";
  return 0;
}
else
 return amount;
}  
