#ifndef SORTINGMETHODS
#define SORTINGMETHODS

#include <vector>
#include <random>
using namespace std;

namespace sorting
{
    class SortingMethods
    {

        void selectionSort(vector<int> &arr);

        void insertionSort(vector<int> &arr);

        /**
         * Helper functions
         */
        int indexOfMin(vector<int> &arr, int a);

        void slide(vector<int> &arr, int p);

        vector<int> generateRandomVector(int n);
    };
}

#endif