#include <iostream>

int main()
{
    int num1;
    int num2;

    std::cout << "Enter number 1: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter number 2: " << std::endl;
    std::cin >> num2;
    
    std::cout << "The sum of the numbers is: ";
    std::cout << num1 + num2 << std::endl;
    return 0;
}