#include <iostream>
#include <string>

int main()          
{         
        std::cout << "Enter your name: ";
        string name; //variable aussage
        std::cin >> name; //namensanfrage
        std::cout >> "Hello World from " << name << std::endl; //druckt Text 
        return 0;                                   
}
