#include <iostream>

int main()
{
    std::string user_name;
    int user_age;
    
    std::cout << "Enter user name: ";
    std::cin >> user_name;
    std::cout << "Enter user_age: ";
    std::cin >> user_age;

    std::cout << user_name << std::endl;
    std::cout << user_age << std::endl;

    return 0;
}