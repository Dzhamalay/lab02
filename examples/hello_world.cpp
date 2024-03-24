#include <iostream>
#include <string>

int main()          
{         
        std::cout << "Enter your name: ";
        string name; //объявление переменной
        std::cin >> name; //запрос имени
        std::cout >> "Hello World from " << name << std::endl; //печатает текст 
        return 0;                                   

}
