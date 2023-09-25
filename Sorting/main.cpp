#include "SortingMethods.cpp"
#include <iostream>
#include <string>
#include <chrono>
#include <iomanip>

using namespace std;
using namespace std::chrono;

int main()
{
    int n = 50000;
    vector<int> arr = generateRandomVector(n);

    auto start = high_resolution_clock::now();
    selectionSort(arr); // SORTING ALGORITHM HERE
    auto stop = high_resolution_clock::now();

    duration<double> elapsed = stop - start;
    
    cout << "first 10 elements: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n"
         << "time taken: " << fixed << setprecision(2) << elapsed.count() << " s" << endl;

    return 0;
}