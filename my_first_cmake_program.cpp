#include <iostream>
#include <windows.h>	  

int main()
{
    SetConsoleCP(1251);								 					
    SetConsoleOutputCP(1251);											
    std::string my_name;
    std::cout << "������� ���: ";
    std::cin >> my_name;
    std::cout << "������������, " << my_name << "!";
    return 0;
}