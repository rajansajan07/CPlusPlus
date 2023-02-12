// Program to compare the two array

// 1. function to generate same random array
// 2. function to generate diff random array
// 3. function to sort the array
// 4. function to conver the array to vector
// 5. Driver code to

#include <iostream>
#include <conio.h>
#include <random>
#include <algorithm>


// function to generate the same random array evey time
int* same_random_array(int size)
{
    int* result = new int[size];
    std::mt19937 gen(40);
    std::uniform_int_distribution ris(-10, 20);
    for (int i = 0; i < size; i++)
    {
        result[i] = ris(gen);
    }
    return result;
}
// function to generate the diff. random array every time
int* diff_random_array(int size)
{
    int* result = new int[size];
    std::random_device rd;
    std::mt19937 gen(rd);
    std::uniform_int_distribution ris(-10, 20);

    for (int i = 0; i < size; i++)
    {
        result[i] = ris(gen);
    }
    return result;
}
// method to sort the array using merge sort
void merge_sort(int arr[], int n)
{
    if (n > 1)
    {
        int mid = n / 2;
        
    }
}

// function to compare the array
bool compare_array(int arr1[], int arr2[]) 
{

}