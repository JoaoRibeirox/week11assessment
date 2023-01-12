#pragma once
#include <iostream>
template <typename T, int MAXROWS, int MAXCOLS> // the class is defined as a template, allowing it to work with different types and array dimensions
class matrix
{
private:
    T arr[MAXROWS][MAXCOLS]; // this is a 2D array with the dimensions specified by the template parameters
    int rows; // an int to hold the number of rows
    int cols; // an int to hold the number of columns
public:
    matrix() : rows(MAXROWS), cols(MAXCOLS) {} // constructor, initializes rows and cols to the values of the template parameters
    void setElement(int row, int col, T val) { // a function that sets the value of an element in the matrix
        if (row >= 0 && row < MAXROWS && col >= 0 && col < MAXCOLS) { // checks that the row and col parameters are within the array's dimensions
            arr[row][col] = val; // assigns the value to the specified element
        }
        else {
            std::cout << "Error: index out of range." << std::endl; // if the row and col parameters are out of bounds, prints an error message
        }
    }
    T getElement(int row, int col) { // a function that retrieves the value of an element in the matrix
        if (row >= 0 && row < MAXROWS && col >= 0 && col < MAXCOLS) { // checks that the row and col parameters are within the array's dimensions
            return arr[row][col]; // returns the value of the specified element
        }
        else {
            std::cout << "Error: index out of range." << std::endl; // if the row and col parameters are out of bounds, prints an error message
            return T(); // returns a default-constructed value of type T
        }
    }
};

