#ifndef SORTINGMETHODS
#define SORTINGMETHODS

#include <vector>

using namespace std;

class SortingMethods {

    void selectionSort(vector<int>& arr);

    /**
     * Helper functions
    */
    int indexOfMin(vector<int>& arr, int a);
};

#endif