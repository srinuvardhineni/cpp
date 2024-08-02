#include <iostream>

int main()
{
    double temperature_list[4] = {34.5, 27.8, 26.8, 22.0};

    std::cout << temperature_list[3] << std::endl;
    temperature_list[3] = 15.4;
    std::cout << temperature_list[3] << std::endl;
    return 0;
}