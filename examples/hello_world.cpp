#include <iostream>
#include <string>

int main()          
{         
        std::cout << "Enter your name: ";
        string name; //variable declaration
        std::cin >> name; //name request
        std::cout >> "Hello World from " << name << std::endl; //prints the text 
        return 0;                                   
}
