#include <iostream>

int main()
{
    std::string user_name;
    int user_age;
    
    std::cout << "Enter user name: ";
    std::cin >> user_name;
    std::cout << "Enter user_age: ";
    std::cin >> user_age;

    std::cout << "Your name is " << user_name << " and age is " << user_age << "." << std::endl;

    return 0;
}