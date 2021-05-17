#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
using namespace std;

namespace matrix_math
{
    /* 
     * Matrix - Matrix struct
     *
     * A Matrix is a rectangular array arranged in rows and columns.
     * Each Matrix struct has a 2D array of elements, # of rows, and
     * # of columns.
     */
    struct Matrix
    {
        int **matrix2D;
        int rows;
        int cols;
    };

    /* 
     * initializeMatrix - Initializes a Matrix
     * @rows: number of rows
     * @cols: number of columns
     * 
     * Create a matrix with specified number of rows and columns
     * 
     * Return: a matrix with no elements
     */
    Matrix initializeMatrix(int rows, int cols)
    {
        struct Matrix math;

        math.matrix2D = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            math.matrix2D[i] = new int[cols];
        }

        math.rows = rows;
        math.cols = cols;
        return math;
    }

    /* 
     * inputMatrixElementsFromUser - Fills a Matrix with elements
     * @mat: Matrix to add elements to
     * 
     * Input numbers from user to Matrix 2D array
     * 
     * Return: resulting matrix with elements from user
     */
    Matrix inputMatrixElementsFromUser(Matrix mat)
    {
        cout << "Enter elements to add: ";
        for (int i = 0; i < mat.rows; i++)
        {
            for (int j = 0; j < mat.cols; j++)
            {
                cin >> mat.matrix2D[i][j];
            }
        }

        return mat;
    }

    /* 
     * printMatrix - Prints a Matrix
     * @mat: Matrix to print
     * 
     * Print a matrix in an MxN view
     * 
     * Return: void
     * 
     */
    void printMatrix(Matrix mat)
    {
        if (mat.rows > 0 && mat.cols > 0)
        {
            for (int i = 0; i < mat.rows; i++)
            {
                for (int j = 0; j < mat.cols; j++)
                {
                    cout << mat.matrix2D[i][j] << " \n"[j == (mat.cols - 1)];
                }
            }
        }
        else
        {
            cout << "Please initialize your matrix" << endl;
        }

        return;
    }

    /* 
     * multiplyMatrix - Matrix Multiplication of MxN matrices
     * @mat1: 1st MxN matrix
     * @mat2: 2nd NxP matrix
     * 
     * Multiply matrices by getting the dot product of the 
     * rows and columns.
     * 
     * Return: Matrix with MxP dimensions.
     */
    Matrix multiplyMatrix(Matrix mat1, Matrix mat2)
    {
        // initialize resulting matrix
        struct Matrix results = initializeMatrix(mat1.rows, mat2.cols);
        int sum = 0;

        for (int i = 0; i < mat1.rows; i++)
        {
            for (int k = 0; k < mat2.cols; k++)
            {
                for (int j = 0; j < mat1.cols; j++)
                {
                    sum += mat1.matrix2D[i][j] * mat2.matrix2D[j][k];
                }
                // input dot product in matrix
                results.matrix2D[i][k] = sum;
                sum = 0;
            }
        }

        return results;
    }

    /* 
     * transposeMatrix - Transposition of an MxN matrix
     * @mat: MxN matrix to transpose
     * 
     * Transpose MxN matrix
     * 
     * Return: Matrix with NxM dimensions
     */
    Matrix transposeMatrix(Matrix mat)
    {
        // initialize transposed matrix
        struct Matrix transposed = initializeMatrix(mat.cols, mat.rows);

        for (int i = 0; i < mat.rows; i++)
        {
            for (int j = 0; j < mat.cols; j++)
            {
                transposed.matrix2D[j][i] = mat.matrix2D[i][j];
            }
        }

        return transposed;
    }
}

#endif