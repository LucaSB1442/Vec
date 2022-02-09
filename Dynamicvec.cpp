#include <iostream>
#include <vector>
#include <numeric>

int main()
{


    char selection{};
    int val{};
    
    

    std::vector<int> vec{8,4,6};
    int valMin = vec[0];
    int valMax = vec[0];
    


    while(selection != 'q' && 'Q')
    {    
        std::cout << "\n--------------------------"<< std::endl;
        std::cout << "A - Add Numbers" << std::endl;
        std::cout << "P - Print Numbers" << std::endl;
        std::cout << "M - Display Mean Value" << std::endl;
        std::cout << "S - Display Smallest Number" << std::endl;
        std::cout << "L - Display Largest Number" << std:: endl;
        std::cout << "Q - Quit" << std::endl;


        std::cout << "What would you like to do? : ";
        std::cin >> selection;
        
        switch(selection)
        {
            case 'a':
            case 'A':
            {
                std::cout << "what number would you like to add?";
                std::cin >> val;
                vec.push_back(val);
            } 
            break;
            case 'p': 
            case 'P': for(auto i = 0 ; i < vec.size() ; i++ )
                    {std::cout << vec[i] << " " ; }
            break;
            case 'm': 
            case 'M': std::cout << std::accumulate(vec.begin() , vec.end(), 0)/vec.size() ;
            break;
            case 's':
            case 'S': for(int valCheckMin : vec)
            {
                if(valCheckMin < valMin)
                {
                    valMin = valCheckMin;
                }
                
            }
            std::cout << valMin;
            break;
            case 'l':
            case 'L': for(int valCheckMax : vec )
            {
                if(valCheckMax > valMax)
                {
                    valMax = valCheckMax;
                }
            } 
            std::cout << valMax;
            break;
            case 'q':
            case 'Q': std::cout << "Goodbye";        
            break;
            default: std:: cout << "incorrect selection try again ";
        }
        
    }   




    


}