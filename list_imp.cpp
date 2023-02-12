// List (Doubly linked list) implementation


#include <iostream>
#include <list>

int main()
{
    // create a doubly linked list
    std::list<int> my_list;

    // insert elements to the list
    my_list.push_back(1);
    my_list.push_back(2);
    my_list.push_back(3);

    for (auto it = my_list.begin(); it != my_list.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;



}