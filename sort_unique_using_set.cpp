// Program to display the numbers of an array in increasing order using set
#include <iostream>
#include <conio.h>
#include <random>
#include <set>
#include <algorithm>


std::vector<int> generate_random_array()
{
   const int size = 10;
   std::random_device rd;
   std::mt19937 gen(rd());
   std::uniform_int_distribution dis(-10, 10);
   
   std::vector<int> random_arr(size);
   for (int i = 0; i < size; i++) {
      random_arr[i] = dis(gen);
   }
   return random_arr;
}

void display(std::vector<int> arr) 
{
   // initialize a set and put the array elements into the set
   std::set<int> s;
   int n = arr.size();
   for (int i = 0; i < n; i++) 
   {
      s.insert(arr[i]);
   }

   // display the set elements
   for (const int& it : s) 
   {
      std::cout << it << " ";
   }
   std::cout << std::endl;
}

int main()
{
   std::system("cls");

   std::vector<int> given_arr = generate_random_array();
   int n = given_arr.size();
   for (int i = 0; i < n; i++) 
   {
      std::cout << given_arr[i] << " ";
   }
   std::cout << std::endl;

   display(given_arr);
   return 0;
}