#include <iostream>
#include <vector>
using namespace std;

// A function which prints a list or array
void printList(int arr[], int size);
void printList(vector<int> arr);

int main() {

    int a[] = {1,2,3,4,5};
    vector<int> b = {6, 7,8,9,10};

    printList(a, (sizeof(a))/(sizeof(*a)));
    printList(b);
}

// Print integar array
void printList(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ",";
    }
    cout << "]" << endl;
};

// Print integar vector
void printList(vector<int> arr) {
    cout << "[";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ",";
    }
    cout << "]" << endl;
}
