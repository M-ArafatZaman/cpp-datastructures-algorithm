#include <iostream>
using namespace std;

void swap_elements(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}

// A function which bubble sorts an array
void bubbleSort(int arr[], int size) {
    bool sorted = false;

    do {
        sorted = false;

        for (int i = 0; i < size; i++) {
            // If current elem is greater then the next element and current elem is not the last elem
            if ((arr[i] > arr[i+1]) && (i+1 < size)) {
                swap_elements( arr[i], arr[i+1] );
                sorted = true;
            }
        }

    } while (sorted == true);

}

int main() {

    int a[6] = {4,1,6,3,9,7};
    cout << "Before sorting : ";
    //printList(a, 5);
    bubbleSort(a, 5); // usage
    cout << "After sorting: ";
    //printList(a, 5);
    // printList(int a[], int size) is a function which prints an integart array

}

