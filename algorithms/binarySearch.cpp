#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define DEBUG(x) cout << #x << " = " << x << endl;


// Function which takes 2 points, and binary search for a value between those two pointers
template <class RandomAccessIterator, class T>
int binarySearch(RandomAccessIterator it_f, RandomAccessIterator it_s, T value) {
    const RandomAccessIterator begin = it_f;
    const RandomAccessIterator end = it_s;
    
    if(*it_f == value) return 0;

    int mid, dist;
    while (it_f < it_s && it_f != it_s) {
        dist = distance(it_f, it_s);
        mid = dist/2;
        T midVal = *(it_f + mid);

        // Special case occurs, if dist is exactly 1
        if (dist == 1) {
            return *it_f == value ? distance(begin, it_f) : -1; 
        }

        // If the value is less than mid value, check from first to mid
        // Else check from mid to end
        if ( value < midVal ) {
            it_s = it_f + mid;
        } else if (value > midVal ) {
            it_f += mid;
        } else {
            return distance(begin, it_f + mid);
        }

    }

    return -1;
};


// Test runner exception
class FailedTest: public exception {
    private: 
        string a;
    public:
        FailedTest(string err) :  a(err) {
            cout << err << endl;
        }
};

// Test function
void run_tests() {
    vector<int> a = {1,2,4,5,6};

    if (binarySearch(a.begin(), a.end(), 1) != 0) throw FailedTest("Result index must be 0");
    if (binarySearch(a.begin(), a.end(), 6) != 4) throw FailedTest("Result index must be 4");
    if (binarySearch(a.begin(), a.end(), 4) != 2) throw FailedTest("Result index must be 2");
    if (binarySearch(a.begin(), a.end(), -2) != -1) throw FailedTest("Result index must be -1");
    if (binarySearch(a.begin(), a.end(), 7) != -1) throw FailedTest("Result index must be -1");
    if (binarySearch(a.begin(), a.end(), 3) != -1) throw FailedTest("Result index must be -1");

    cout << "All test passed!" << endl;

}

int main() {

    run_tests();


    return 0;
}