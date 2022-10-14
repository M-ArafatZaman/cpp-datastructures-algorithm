#include <iostream>
#include <vector>
using namespace std;

#define DEBUG(x) cout << #x << " = " << x << endl;

// Function to print vector
template <class T>
void printV(vector<T>& a) {
    cout << "{";
    for (const auto & b : a) {
        cout << b << ",";
    };
    cout << "}" << endl;
};

// Function which swaps two pointers
template <class PointerClass>
void swapPointerValues(PointerClass a, PointerClass b) {
    auto temp = *a;
    *a = *b;
    *b = temp;
    return;
}

// Takes in two pointers, the beginning and the end and quicksorts from the beginning to the end
template <class IterClass>
void quickSort(IterClass begin, IterClass end, bool exec=true) {
    // If there is just one element
    if (begin == end) return;

    // The pivot is taken to be the end
    IterClass pivot = end-1;
    IterClass low = begin;
    IterClass high = pivot-1;

    // High values are meant to be greater than pivot
    while (low <= high) {
        // Only swap if low is greater than or equal to pivot
        if (*low < *pivot) {
            ++low;
        } else {
            // Swap
            swapPointerValues(low, high);
            --high;
        }
    }
    // Bring pivot down to low
    // Low is basically the pivot
    swapPointerValues(low, pivot);

    // Quick sort the two partitions
    quickSort(begin, low, true);
    quickSort(low+1, end, true);

};

// Test runner exception
class FailedTest: public exception {
    public:
        FailedTest(string err) {
            cout << err << endl;
        }
};

void test_runner() {

    vector<int> a = {3,5,8,10,1,2,6,9,7};
    vector<int> b = {1,2,3,5,6,7,8,9,10};
    
    quickSort(a.begin(), a.end());
    if (a != b) throw FailedTest("Quicksort could not properly sort the given array.");
 
    cout << "All test passed!" << endl;

};

int main() {

    test_runner();

    return 1;

}


