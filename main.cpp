#include "SortingMethods.cpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    vector<int> arr = {34, 7, 23, 32, 5, 62};

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n Selection sort: \n";

    selectionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}