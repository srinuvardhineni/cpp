#include <iostream>

void say_hello(std::string user_name, int user_age)
{
    std::cout << "Hello " << user_name << ", you are " 
            << user_age << std::endl;
}

int triple_number(int number)
{
    return number * 3;
}

void print_triple_number(int number)
{
    std::cout << triple_number(number) << std::endl;
}

int main()
{
    say_hello("Srinivasulu", 34);
    say_hello("Srihari", 34);
    int result = triple_number(4);
    std::cout << result << std::endl;
    print_triple_number(4);
    return 0;
}
