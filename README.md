# Matrix Math
This is a portable linear algebra library. It currently only does [matrix multiplication](https://www.mathsisfun.com/algebra/matrix-multiplying.html) and [matrix transposition](https://mathinsight.org/matrix_transpose).  

For this particular project, I only used standard libraries instead of using premade BLAS implementations.

## Implementation
A matrix is a rectangular array arranged in rows and columns. In this project, it is defined as a struct:
```
struct Matrix
{
    int **matrix2D;
    int rows;
    int cols;
};
```
The Matrix struct creates a rectangular array and keeps track of how many rows and columns it has.

``Matrix initializeMatrix(int rows, int cols)``  
This function initializes a Matrix struct. A user provides the number of rows and columns that each Matrix will have. It returns an empty Matrix.

``Matrix inputMatrixElementsFromUser(Matrix mat)``  
This function inputs elements into the initialized Matrix(2D array). It returns the resulting Matrix.

``void printMatrix(Matrix mat)``  
This function takes in a Matrix as a parameter and prints it.

``Matrix multiplyMatrix(Matrix mat1, Matrix mat2)``  
This function takes in 2 Matrices and multiplies them as per Matrix multiplication rules. It returns the resulting Matrix.

``Matrix transposeMatrix(Matrix mat)``  
This function takes in a Matrix and returns a transposed Matrix.

### How to Run
1. On terminal: while in directory, run `g++ -o <name> main.cpp`.  For this example, replace `<name>` with `driver`
3. Run `.\driver.exe` or `.\<name>.exe`
4. Follow prompts on the terminal 😁

## Author
* Nikka Ella Yalung
