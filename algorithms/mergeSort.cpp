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

/**
 * [HELPER FUNCTION TO mergeSort()]
 * This function merges two arrays in an ascending order
*/
template <class T>
vector<T> merge(vector<T>& first, vector<T>& second) {
    int f = 0, f_n = first.size();
    int s = 0, s_n = second.size();
    
    vector<T> mergedArr;

    /* 
    Select two elements from each arr, and add the smaller element only.
     */ 
    while (f < f_n && s < s_n) {
        if (first[f] < second[s]) {
            mergedArr.push_back(first[f]);
            ++f;
        } else if (second[s] < first[f]) {
            mergedArr.push_back(second[s]);
            ++s; 
        } else {
            // Both are equal
            mergedArr.push_back(second[s]);
            mergedArr.push_back(first[f]);
            ++s; ++f;
        }
    }
    
    // Fill any remainin elements
    while (f < f_n) {
        mergedArr.push_back(first[f]); ++f;
    }

    while (s < s_n) {
        mergedArr.push_back(second[s]); ++s;
    }

    return mergedArr;
};

// The merge sort algorithm
template <class T>
vector<int> mergeSort(vector<T>& arr) {
    int size = arr.size();
    int mid = size/2;

    // A single element array is already sorted
    if (size == 1) {
        return arr;
    }

    // Merge two sides from the middle
    vector<int> first(arr.begin(), arr.begin()+mid), second(arr.begin()+mid, arr.end());

    // Merge sort each individual arr;
    vector<int> firstSorted = mergeSort(first);
    vector<int> secondSorted = mergeSort(second);
    
    vector<int> finalMerged = merge(firstSorted, secondSorted);


    return finalMerged;
};

// Test runner exception
class FailedTest: public exception {
    public:
        FailedTest(string err) {
            cout << err << endl;
        }
};


void test_runner() {

    // Test merge function
    vector<int> _m1 = {1,3,5};
    vector<int> _m2 = {2,4,6};
    vector<int> _m3 = {1,2,3,4,5,6};
    vector<int> _m3_test = merge(_m1, _m2);

    if (_m3_test != _m3) throw FailedTest("merge(a, b) did not merge properly.");

    // Test mergeSort function
    vector<int> m1 = {3,5,1,2,7,6};
    vector<int> m2 = {1,2,3,5,6,7};
    vector<int> m2_test = mergeSort(m1);

    if (m2_test != m2) throw FailedTest("mergeSort(a) did sort sort properly.");

    cout << "All tests passed!" << endl;

    return;
}


int main() {

    test_runner();

    return 0;
}