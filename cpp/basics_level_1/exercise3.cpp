#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    double average;
    std::vector<double> list = {10.0, 20.0, 30.0, 40.0};
    std::cout << "The average of the numbers is: ";
    std::cout << accumulate(list.begin(), list.end(), 0.0) / list.size() << std::endl;


    return 0;
}