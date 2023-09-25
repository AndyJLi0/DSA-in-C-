#include "SortingMethods.cpp"
#include <iostream>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    int n = 10000; // For example, generate a vector of size 10,000
    std::vector<int> arr = generateRandomVector(n);

    auto start = high_resolution_clock::now(); // Start timing
    insertionSort(arr);                        // Call your sorting function
    auto stop = high_resolution_clock::now();  // Stop timing

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "first 10 elements: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n"
         << "Time taken to sort: "
         << duration.count() << " microseconds" << endl;

    return 0;
}