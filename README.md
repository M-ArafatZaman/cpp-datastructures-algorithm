# Data structures and algorithms in C++
Some basic data structures and algorithms implemented in C++

---

# Table of contents
- [Algorithms](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm#algorithms)
  - [Binary search](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm#binarysearch)
  - [Bubble sort](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm#bubblesort)
  - [Insertion sort](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm#insertionsort)
  - [Merge sort](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm#mergesort)
  - [Quick sort](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm#quicksort)
  - [Selection sort](#selectionsort)
- [Methods](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm#methods)
  - [Print list](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm#printlist)
  - [Split](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm#split)


---
# Algorithms

### `binarySearch()`

[<img src="https://i.imgur.com/QAPiuXJ.png" height="32px" />](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm/blob/main/algorithms/binarySearch.cpp)

This function performs a binary search on an *already sorted* vector and return the index in an integer format or `-1` if nothing is found.

**Explanation video by Fireship**

[![Binary search video by Fireship](https://img.youtube.com/vi/MFhxShGxHWc/0.jpg)](https://youtu.be/MFhxShGxHWc)

**Function definition** 
```cpp
template <class TypeIterator, class T>
int binarySearch(TypeIterator it_f, TypeIterator it_s, T value);
```

**Example usage**
```cpp
vector<int> a = {3,2,4,6};
cout << binarySearch(a.begin(), a.end(), 2);
```
```
Output >> 1
```

---

### `bubbleSort()`

[<img src="https://i.imgur.com/QAPiuXJ.png" height="32px" />](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm/blob/main/algorithms/bubbleSort.cpp)

This function sorts an integer array using bubble sort.

**Explanation video by geeksforgeeks**

[![Bubble sort explanation video by geeksforgeeks](https://img.youtube.com/vi/nmhjrI-aW5o/0.jpg)](https://youtu.be/nmhjrI-aW5o)

**Function definition**
```cpp
void bubbleSort(int arr[], int size);
```

**Example usage**
```cpp
int a[] = {4,3,2,5,6};
bubbleSort(a, 5);
```
```
Output >> {2,3,4,5,6}
```

---

### `insertionSort()`

[<img src="https://i.imgur.com/QAPiuXJ.png" height="32px" />](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm/blob/main/algorithms/insertionSort.cpp)

This function sorts an integer array using insertion sort.

**Explanation video by geeksforgeeks**

[![Insertion sort explanation video by geeksforgeeks](https://img.youtube.com/vi/OGzPmgsI-pQ/0.jpg)](https://www.youtube.com/watch?v=OGzPmgsI-pQ)

**Function definition**
```cpp
template <class IterClass>
void insertionSort(IterClass begin, IterClass end);
```

**Example usage**
```cpp
vector<int> a = {4,3,2,5,6};
insertionSort(a.begin(), a.end());
```
```
Output >> {2,3,4,5,6}
```

---

### `mergeSort()`

[<img src="https://i.imgur.com/QAPiuXJ.png" height="32px" />](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm/blob/main/algorithms/mergeSort.cpp)

This function sorts a vector array using merge sort.

**Explanation video by geeksforgeeks**

[![Merge sort explanation video by geeksforgeeks](https://img.youtube.com/vi/JSceec-wEyw/0.jpg)](https://youtu.be/JSceec-wEyw)

**Function definition**
```cpp
template <class T>
vector<int> mergeSort(vector<T>& arr);
```

**Example usage**
```cpp
vector<int> a = {3,5,1,2,7,6};
mergeSort(a);   
```
```
Output >> {1,2,3,5,6,7}
```

---

### `quickSort()`

[<img src="https://i.imgur.com/QAPiuXJ.png" height="32px" />](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm/blob/main/algorithms/quickSort.cpp)

This function sorts a vector array using quick sort.

**Explanation video by geeksforgeeks**

[![Quick sort explanation video by geeksforgeeks](https://img.youtube.com/vi/PgBzjlCcFvc/0.jpg)](https://youtu.be/PgBzjlCcFvc)

**Function definition**
```cpp
template <class IterClass>
void quickSort(IterClass begin, IterClass end);
```

**Example usage**
```cpp
vector<int> a = {3,5,1,2,7,6};
mergeSort(a.begin(), a.end());
```
```
Output >> {1,2,3,5,6,7}
```

---

### `selectionSort()`

[<img src="https://i.imgur.com/QAPiuXJ.png" height="32px" />](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm/blob/main/algorithms/selectionSort.cpp)

This function sorts a vector array using selection sort.

**Explanation video by geeksforgeeks**

[![Selection sort explanation video by geeksforgeeks](https://img.youtube.com/vi/xWBP4lzkoyM/0.jpg)](https://youtu.be/xWBP4lzkoyM)

**Function definition**
```cpp
template <class RandomAccessIterator>
void selectionSort(RandomAccessIterator begin, RandomAccessIterator end);
```

**Example usage**
```cpp
vector<int> a = {3,5,1,2,7,6};
selectionSort(a.begin(), a.end());
```
```
Output >> {1,2,3,5,6,7}
```


---
# Methods

### `printList()`

[<img src="https://i.imgur.com/QAPiuXJ.png" height="32px" />](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm/blob/main/methods/printList.cpp)

This prints a vector or an integar list in the terminal.

**Function definition**
```cpp
template <class T>
void printList(vector<T>& arr);

template <class T>
void printList(T& arr);
```

**Example usage**
```cpp
vector<int> a = {1,2,3};
int b[] = {4,5,6};

printList(a);
printList(b);
```
```
Output >> 
{1,2,3}
{4,5,6}          
```

---
### `split()`

[<img src="https://i.imgur.com/QAPiuXJ.png" height="32px" />](https://github.com/M-ArafatZaman/cpp-datastructures-algorithm/blob/main/methods/split.cpp)

This prints a vector or an integar list in the terminal.

**Function definition**
```cpp
vector<string> split(string str, string delimiter = " ")
```

**Example usage**
```cpp

auto a = split("Hello12World", "12");

printList(a);
```
```
Output >> {Hello,World}
```

