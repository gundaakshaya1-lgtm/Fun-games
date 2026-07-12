#include <iostream>

void quiz(std::string array[], std::string array1[][4]);
int main()
{
    std::string questions[] = {"1. What is capital of telangana?", 
                            "2. What is the famous food in hyderabad?", 
                            "3. What is the national bird?", 
                            "4. What is the national animal?"};

    std::string options[][4] = {{"A. Hyderabad", "B. Delhi", "C. Mumbai", "D. Kolkata"},
                               {"A. Maggi", "B. salad", "C. Biryani ", "D.Panner"},
                               {"A. Parrot", "B. Peacock", "C. Sparrow ", "D.Indian roller"},
                               {"A. tiger", "B. lion", "C. elephant", "D. giraffee"},
                               };


    
    std::cout<< "**********QUIZ********************\n";
    quiz( questions, options);
}

void quiz(std::string array[],std::string array1[][4])
{   std::string choice;
    for(int i=0; i<4; i++)
    {
        std::cout << array[i]<<'\n';
        for(int j=0; j<4; j++)
        {
            std::cout << array1[i][j] <<'\n';
        }
        
        std::cout << "Enter your answer(ABCD)\n";
        std::cin >> choice;
        if(i==0)
        {
            if(choice == "A")
            std::cout <<"Correct Answer:)\n";
            else
            std::cout << "Wrong answer\n";
        }
        else if(i==1)
        {
            if(choice == "C")
            std::cout <<"Correct Answer\n";
            else
            std::cout << "Wrong answer\n";
        }
        else if(i==2)
        {
            if(choice == "B")
            std::cout <<"Correct Answer\n";
            else
            std::cout << "Wrong answer\n";
        }
        else
        {
            if(choice == "A")
            std::cout <<"Correct Answer\n";
            else
            std::cout << "Wrong answer\n";
        }
        std::cout <<'\n';
        
    }
 std::cout <<"****************************************\n";
}
