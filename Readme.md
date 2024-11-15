# Sorting Application

This is a simple console application that allows users to input a list of numbers, choose a sorting method, and display the sorted numbers.

## Features

- Supports Bubble Sort, Selection Sort, and Insertion Sort.
- Accepts user input from the console.
- Displays sorted output.

## How to Compile on your own:

### Windows (Using g++ from MinGW)

1. Install [MinGW](http://www.mingw.org/) and ensure `g++` is added to your PATH.
2. Open Command Prompt and navigate to the project directory.
3. Run the following command: g++ main.cpp Sort.cpp -o sorter

----------------------------------------------------------------------------------------

## Usage(If you are ok with running the exe directly)

1. Run the executable.
2. When prompted, enter numbers separated by spaces (e.g., `34 7 23 32 5 62`).
3. Choose a sorting method when prompted (`bubble`, `select`, or `insertion`).
4. The program will display the sorted numbers.
!if
## Sample Input and Output

Enter numbers separated by spaces: 11 10 9 8 7 6 5 4 3 2 1
Select sorting method (bubble, select, insertion): s 
Using sorting method: Selection Sort

11 10 9 8 7 6 5 4 3 2 1

1 10 9 8 7 6 5 4 3 2 11

1 2 9 8 7 6 5 4 3 10 11

1 2 3 8 7 6 5 4 9 10 11

1 2 3 4 7 6 5 8 9 10 11

1 2 3 4 5 6 7 8 9 10 11

1 2 3 4 5 6 7 8 9 10 11

1 2 3 4 5 6 7 8 9 10 11

1 2 3 4 5 6 7 8 9 10 11

1 2 3 4 5 6 7 8 9 10 11

1 2 3 4 5 6 7 8 9 10 11

