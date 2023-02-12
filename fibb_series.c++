// Program to print the first N fibonacci series
#include <iostream>
#include <vector>

std::vector<long long> print_fibb(int N)
{
    std::vector<long long> fibb_numbers;

    fibb_numbers.push_back(1);
    fibb_numbers.push_back(1);
    for (int i = 2; i < N; i++)
    {
        fibb_numbers.push_back(fibb_numbers[i - 1] + fibb_numbers[i - 2]);
    }
    return fibb_numbers;
}
int main()
{
    std::vector<long long> fibb_numbers = print_fibb(10);
    for (long long& it : fibb_numbers)
    {
        std::cout << it << " ";
    }
    return 0;
}