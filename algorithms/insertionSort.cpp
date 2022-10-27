#include <iostream>
#include <vector>
using namespace std;

#define DEBUG(x) cout << #x << " = " << x << endl;

template <class T>
void print_v(vector<T>& arr) {
    cout << "{";
    for (auto& i: arr) {
        cout << i << ",";
    };

    cout << "}" << endl;
    return;
}

// Function to swap pointer values
template <class PointerClass>
void swapPointerValues(PointerClass a, PointerClass b) {
    auto temp = *a;
    *a = *b;
    *b = temp;
    return;
}


// Insertion sort function
template <class RandomAccessIterator>
void insertionSort(RandomAccessIterator begin, RandomAccessIterator end) {
    // Store the sorted part
    RandomAccessIterator sorted = begin + 1;
    RandomAccessIterator curr = sorted;

    while (sorted < end) {
        curr = sorted;

        // Keep swapping until it is in the current position
        while (*curr < *(curr-1) && curr > begin) {
            swapPointerValues(curr, curr-1);
            curr--;
        }

        sorted++;
    }

    return;
}

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
    
    insertionSort(a.begin(), a.end());
    if (a != b) throw FailedTest("Insertion sort could not properly sort the given array.");
 
    cout << "All test passed!" << endl;

};

int main() {

    test_runner();

    return 0;
}