#include <iostream>
#include <vector>
#include "printList.h"
using namespace std;

template <class T>
void printList(vector<T>& arr) {
    cout << "[";
    for (auto i : arr) {
        cout << i << ",";
    }
    cout << "\b]" << endl;
};

template <class T>
void printList(T& arr) {
    cout << "[";
    for (auto i : arr) {
        cout << i << ",";
    }
    cout << "\b]" << endl; 
};

int main() {
    
    return 0;
}


/* int main() {

    int a[] = {1,2,3,4,5};
    vector<int> b = {6, 7,8,9,10};

    printList(a);
    printList(b);
} */

