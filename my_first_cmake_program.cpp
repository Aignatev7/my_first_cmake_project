#include <iostream>
#include <windows.h>	  

int main()
{
    SetConsoleCP(1251);								 					
    SetConsoleOutputCP(1251);											
    std::string my_name;
    std::cout << "Введите имя: ";
    std::cin >> my_name;
    std::cout << "Здравствуйте, " << my_name << "!";
    return 0;
}