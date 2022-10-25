#include <iostream>
#include <vector>
using namespace std;

// BEGINHELPERFUNCTIONS

#define DEBUG(x) cout << #x << " = " << x << endl;

template <class T>
void print_v(T& a) {
    cout << "{";
    for (const auto& i: a) {
        cout << i << ",";
    }
    cout << "}" << endl;
};


template <class RandomAccessIterator>
void swapPointerValues(RandomAccessIterator a, RandomAccessIterator b) {
    auto temp = *a;
    *a = *b;
    *b = temp;
    return;
}

// ENDHELPERFUNCTIONS

template <class RandomAccessIterator>
void selectionSort(RandomAccessIterator begin, RandomAccessIterator end) {
    
    // Store the sorted part of the array
    RandomAccessIterator sorted = begin;
    RandomAccessIterator smallest, curr;

    while (sorted < end) {
        // Get the next smallest element
        smallest = sorted;
        curr = smallest;
        while (curr < end) {
            if (*curr < *smallest) {
                smallest = curr;
            };
            ++curr;
        }
        // Swap with smallest
        swapPointerValues(sorted, smallest);
        ++sorted;
    }

};

int main() {

    vector<int> a = {3,4,1,5,2};

    print_v(a);
    selectionSort(a.begin(), a.end());
    print_v(a);
 
    return 0;
}