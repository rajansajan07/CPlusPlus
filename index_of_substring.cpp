// Program to find the first occurrenece of the string in a given string
#include <iostream>
#include <string.h>

int find_occurrence(std::string str, std::string x)
{
    int pos = str.find(x);
    if (pos != std::string::npos)
    {
        return pos;
    }
    else {
        return -1;
    }
}
int main()
{
    std::string str = "Facebook";
    std::string x = "book";

    int index = find_occurrence(str, x);
    std::cout << index << std::endl;
    return 0;
}