#include <iostream>
#include "matrix.h"
#include <iostream>


int main() {
    matrix<int, 5, 5> i_mat; // 5x5 matrix of ints // instantiating the class template and creating an object i_mat of type matrix of int values with 5 rows and 5 columns
    i_mat.setElement(0, 0, 10); // sets the element at position (0,0) of i_mat to 10
    std::cout << i_mat.getElement(0, 0) << std::endl; // 10 // prints the element at position (0,0) of i_mat, which should be 10
    matrix<float, 7, 7> f_mat; // 7x7 matrix of floats // instantiating the class template and creating an object f_mat of type matrix of float values with 7 rows and 7 columns
    f_mat.setElement(0, 0, 7.5); // sets the element at position (0,0) of f_mat to 7.5
    std::cout << f_mat.getElement(0, 0) << std::endl; // 7.5 // prints the element at position (0,0) of f_mat, which should be 7.5
}