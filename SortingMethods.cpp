#include "SortingMethods.hpp"

using namespace std;

vector<int> generateRandomVector(int n)
{
    std::random_device rd;                           // Obtain a random number from hardware
    std::mt19937 gen(rd());                          // Seed the generator
    std::uniform_int_distribution<> distrib(1, 100); // Define the range

    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i)
    {
        vec[i] = distrib(gen);
    }
    return vec;
}

int indexOfMin(vector<int> &arr, int a)
{
    int m = a;
    for (int i = a + 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[m])
        {
            m = i;
        }
    }
    return m;
}

void slide(vector<int> &arr, int p)
{
    int temp = arr[p]; // element that wil be sorted
    int j = p;         // index of element
    while (j > 0 && arr[j - 1] > temp)
    {
        arr[j] = arr[j - 1];
        j--;
    }
    arr[j] = temp;
}

void insertionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        slide(arr, i);
    }
}

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int min = indexOfMin(arr, i);
        swap(arr[i], arr[min]);
    }
}
