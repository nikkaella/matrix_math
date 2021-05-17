#include "matrix.hpp"

using namespace matrix_math;
using namespace std;

// DRIVER CODE
// TODO: create a makefile
int main()
{
    int rows, cols, cols2;


    // TODO: instead of prompting the user for which elements to add,
    // set it up so inputMatrixElements can take in an array of elements, 1 for rows, 1 for cols
    cout << "Enter # of rows for matrix1: ";
    cin >> rows;
    cout << "Enter # of cols for matrix1: ";
    cin >> cols;
    cout << "matrix2 automatically has " << cols << " rows" << endl;
    cout << "Enter # of cols for matrix2: ";
    cin >> cols2;

    // TODO: remove "struct". It is not needed.
    Matrix m1, m2; 

    // TODO: create assertion testing

    // initialize matrix 1
    m1 = initializeMatrix(rows, cols);
    inputMatrixElementsFromUser(m1);

    // initialize matrix 2
    m2 = initializeMatrix(cols, cols2);
    inputMatrixElementsFromUser(m2);

    cout << "1st Matrix: " << endl;
    printMatrix(m1);
    cout << "2nd Matrix: " << endl;
    printMatrix(m2);

    // TODO: remove "struct". It is not needed.
    Matrix transposed1 = transposeMatrix(m1);
    Matrix transposed2 = transposeMatrix(m2);
    Matrix multiplied = multiplyMatrix(m1, m2);

    cout << "Transposed matrix 1: " << endl;
    printMatrix(transposed1);
    cout << "Transposed matrix 2: " << endl;
    printMatrix(transposed2);
    cout << "Multiplied Matrix: " << endl;
    printMatrix(multiplied);

    return 0;
}