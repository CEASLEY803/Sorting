#ifndef SEQSORT_H
#define SEQSORT_H
#include <string>
using std::string;

void swap(int a, int b);

enum class SortMethod {
    bubble,
    select,
    insertion,
    null
};

void toLowerCase(std::string &str);
SortMethod convertToEnum(std::string input);
string sortMethodToString(SortMethod method);

class Sorter {
public:
    void sort(int Arr[], int size, string method);
    void selectSort(int Arr[], int size);
    void bubbleSort(int Arr[], int size);
    void insertionSort(int Arr[], int size);
    void printArray(int Arr[], int size);

private:
    void decrement(int Arr[], int index);
    void increment(int Arr[], int index);
    void swapElements(int Arr[], int index1, int index2);
};
#endif