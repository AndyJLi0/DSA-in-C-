#include "SortingMethods.hpp"

using namespace std;

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

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int min = indexOfMin(arr, i);
        swap(arr[i], arr[min]);
    }
}


