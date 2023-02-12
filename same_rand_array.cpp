// Program to generate the same random array every time
#include <iostream>
#include <conio.h>
#include <random>

std::vector<int> generate_random_array() 
{
   const int size = 10;

   std::mt19937 gen(49);
   std::uniform_int_distribution dis(1, 15);

   std::vector<int> vector_array(size);
   for (int i = 0; i < size; i++) 
   {
      vector_array[i] = dis(gen);
   }

   return vector_array;
}
int main()
{
   // std::system("cls");
   std::vector<int> v = generate_random_array();

   for (int i = 0; i < v.size(); i++)
   {
      std::cout << v[i] << " ";
   }
   std::cout << std::endl;
   
   return 0;
}