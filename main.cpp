#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <limits>
#include "Sort.h"
#include <chrono>  
#include <thread>   

int main() {
    Sorter sorter;
    std::string inputLine;
    std::vector<int> numbers;
    int num;

    // Prompt the user for input
    std::cout << "Enter numbers separated by spaces: ";
    std::getline(std::cin, inputLine);

    // Parse the input line into integers
    std::istringstream stream(inputLine);
    while (stream >> num) {
        numbers.push_back(num);
    }

    // Check if numbers were entered
    if (numbers.empty()) {
        std::cout << "No numbers were entered. Exiting program." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        return 0;
    }

    // Prompt the user to select a sorting method
    std::string method;
    std::cout << "Select sorting method (bubble, select, insertion): ";
    std::getline(std::cin, method);

    // Convert method to enum
    SortMethod enumMethod = convertToEnum(method);

    // Check if the method is valid
    if (enumMethod == SortMethod::null) {
        std::cout << "Invalid sorting method selected. Exiting program." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        return 0;
    }

    // Display the selected method
    method = sortMethodToString(enumMethod);
    std::cout << "Using sorting method: " << method << std::endl;

    // Perform the sorting
    sorter.sort(numbers.data(), numbers.size(), method);

    // Display the sorted numbers
    std::cout << "Sorted numbers: ";
    for (const int& n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Wait for user input before exiting
    std::cout << "Press Enter to exit...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
