#include "matrix.hpp"

using namespace matrix_math;
using namespace std;

// DRIVER CODE

int main()
{
    int rows, cols, cols2;

    cout << "Enter # of rows for matrix1: ";
    cin >> rows;
    cout << "Enter # of cols for matrix1: ";
    cin >> cols;
    cout << "matrix2 automatically has " << cols << " rows" << endl;
    cout << "Enter # of cols for matrix2: ";
    cin >> cols2;

    struct Matrix m1, m2; 

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

    struct Matrix transposed1 = transposeMatrix(m1);
    struct Matrix transposed2 = transposeMatrix(m2);
    struct Matrix multiplied = multiplyMatrix(m1, m2);

    cout << "Transposed matrix 1: " << endl;
    printMatrix(transposed1);
    cout << "Transposed matrix 2: " << endl;
    printMatrix(transposed2);
    cout << "Multiplied Matrix: " << endl;
    printMatrix(multiplied);

    return 0;
}