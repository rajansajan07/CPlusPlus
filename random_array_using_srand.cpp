// 1. function to generate the random array
// 2. pass the array to the function to convert to a vector
// 3. get the vector and display

#include <iostream>
#include <vector>
#include <random>

// function to generate the random array
int* random_array(int size)
{
   int* result = new int[size];
   std::srand(10);
   for (int i = 0; i < size; i++)
   {
      result[i] = rand() % 100;
   }
   return result;
}

// function to print the array
void print_array(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      std::cout << arr[i] << " ";
   }
   std::cout << std::endl;
}

int main()
{
   int* given_array = random_array(10);
   int size = 10;

   print_array(given_array, size);
   return 0;
}