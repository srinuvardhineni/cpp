#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    double average;
    double sum;

    std::vector<double> list = {10.0, 20.0, 30.0, 40.0};
    sum = accumulate(list.begin(), list.end(), 0.0);

    std::cout << "The average of the numbers is: " << sum / list.size() << std::endl;

    return 0;
}