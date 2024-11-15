#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <string>
#include "Sort.h"
using std::string;

void Sorter::sort(int Arr[], int size, string method)
{

    switch (convertToEnum(method))
    {
    case SortMethod::select:
        selectSort(Arr, size);
        break;
    case SortMethod::bubble:
        bubbleSort(Arr, size);
        break;

    case SortMethod::insertion:
        insertionSort(Arr, size);
        break;

    case SortMethod::null:

        break;
    }
};
void Sorter::insertionSort(int Arr[], int size)
{
    printArray(Arr, size);
    int index;
    index = 1;
    while (index < size)
    {

        for (int i = index; i > 0; i--)
        {
            if (Arr[i] < Arr[i - 1])
            {
                increment(Arr, i - 1);
                printArray(Arr, size);
            }
        }
        index++;
        
    }
}

void Sorter::bubbleSort(int Arr[], int size)
{
    printArray(Arr, size);
    bool sorted = false;
    int index1, index2;
    while (sorted == false)
    {
        index1 = 0;
        index2 = 1;
        sorted = true;
        for (int i = 0; i < size - 1; i++)
        {
            if (Arr[index1] > Arr[index2])
            {
                swapElements(Arr, index1, index2);
                sorted = false;
            }
            index1++;
            index2++;
            printArray(Arr, size);
        }
    }
}

void Sorter::selectSort(int Arr[], int size)
{
    printArray(Arr, size);
    int tempSize = size;
    int max, maxIndex;
    while (size > 1)
    {
        max = Arr[0];
        maxIndex = 0;
        for (int i = 1; i < size; i++)
        {
            if (max < Arr[i])
            {
                max = Arr[i];
                maxIndex = i;
            }
        }
        swapElements(Arr, maxIndex, size - 1);
        size--;
        printArray(Arr, tempSize);
    }
};
void Sorter::printArray(int Arr[], int size) 
{
    for (int i = 0; i < size; ++i) {
        std::cout << Arr[i] << " ";
    }
    std::cout << std::endl;
}
SortMethod convertToEnum(string Input)
{
    toLowerCase(Input);
    char fL = Input[0];
    if (fL == 'b')
    {
        return SortMethod::bubble;
    }
    else if (fL == 's')
    {
        return SortMethod::select;
    }
    else if (fL == 'i')
    {
        return SortMethod::insertion;
    }
    else
    {
        return SortMethod::null;
    }
};

void Sorter::decrement(int Arr[], int index)
{
    swapElements(Arr, index, index-1);
}

void Sorter::increment(int Arr[], int index)
{
    swapElements(Arr, index, index+1);
}



void Sorter::swapElements(int Arr[], int index1, int index2)
{
    int temp = Arr[index1];
    Arr[index1] = Arr[index2];
    Arr[index2] = temp;
}

void toLowerCase(std::string &str)
{
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c)
                   { return std::tolower(c); });
}

std::string sortMethodToString(SortMethod method)
{
    switch (method)
    {
    case SortMethod::bubble:
        return "Bubble Sort";
    case SortMethod::select:
        return "Selection Sort";
    case SortMethod::insertion:
        return "Insertion Sort";
    default:
        return "Unknown Method";
    }
}
