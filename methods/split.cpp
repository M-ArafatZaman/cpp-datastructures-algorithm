#include <iostream>
#include <vector>
#include <string>
using namespace std;

// A function which splits a string with a delimiter
vector<string> split(string str, string delimiter = " ") {
    vector<string> arr;

    int delimiter_len = delimiter.length();

    // Iterators
    int start_i = 0, curr_i = 0, curr_len = 0;

    for (curr_i = 0; curr_i < str.length(); curr_i++) {

        // Check if delimiter is matched
        if (str.substr(curr_i, delimiter_len) == delimiter) {
            // Append to array
            arr.push_back( str.substr(start_i, curr_len) );
            // Reset iterators
            curr_i += delimiter_len - 1;
            start_i = curr_i + delimiter_len - 1;
            curr_len = 0;
            continue;
        }

        curr_len++;
    }
    arr.push_back( str.substr(start_i, curr_len) );

    return arr;
};

void printList(vector<string>& arr) {
    cout << "[";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ",";
    }
    cout << "]" << endl;
}

int main() {

    string str;
    getline(cin, str);

    vector<string> a = split(str, "QT");

    printList(a);

}

