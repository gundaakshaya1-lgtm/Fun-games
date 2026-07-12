#include <iostream>

void quiz(std::string array[], std::string array1[][4], char ans[]);
int main()
{ int s;
    std::string questions[] = {"1. What is capital of telangana?", 
                            "2. What is the famous food in hyderabad?", 
                            "3. What is the national bird?", 
                            "4. What is the national animal?"};

    std::string options[][4] = {{"A. Hyderabad", "B. Delhi", "C. Mumbai", "D. Kolkata"},
                               {"A. Maggi", "B. salad", "C. Biryani ", "D.Panner"},
                               {"A. Parrot", "B. Peacock", "C. Sparrow ", "D.Indian roller"},
                               {"A. tiger", "B. lion", "C. elephant", "D. giraffee"},
                               };

  char answer[] = {'A', 'C', 'B', 'A'};
    
    std::cout<< "**********QUIZ********************\n";
   quiz( questions, options, answer);
}

void quiz(std::string array[],std::string array1[][4], char ans[])
{   char choice;
    int score=0;
    for(int i=0; i<4; i++)
    {
        std::cout << array[i]<<'\n';
        for(int j=0; j<4; j++)
        {
            std::cout << array1[i][j] <<'\n';
        }
        
        std::cout << "Enter your answer(ABCD)\n";
        std::cin >> choice;
        if(choice == ans[i])
        {
            std::cout << "Correct Answer\n";
            score++;
        }
        else
        {
            std::cout <<"Wrong\n" <<"Correct = "<< ans[i] <<'\n';
        }
            
        std::cout <<'\n';

    }
 std::cout << "Your final score= "<< score << " out of 4\n";
 std::cout <<"****************************************\n";
}
