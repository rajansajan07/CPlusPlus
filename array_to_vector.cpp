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

   std::random_device rd;
   std::mt19937 gen(rd());
   std::uniform_int_distribution ris(1, 100);
   for (int i = 0; i < size; i++)
   {
      result[i] = ris(gen);
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

// function to convert the array to vector
std::vector<int> array_to_vector(int arr[], int size)
{
   std::vector<int> vec;
   for (int i = 0; i < size; i++)
   {
      vec.push_back(arr[i]);
   }
   return vec;
}


// function to print the vector
void print_vector(std::vector<int> vec)
{
   for (const int& it : vec)
   {
      std::cout << it << " ";
   }
   std::cout << std::endl;
}

int main()
{
   int* given_array = random_array(10);
   int size = 10;

   std::cout << "Given array: ";
   print_array(given_array, size);

   std::cout << "Generate vector: ";
   std::vector<int> v = array_to_vector(given_array, size);
   print_vector(v);

   return 0;
}