#include <iostream>
using namespace std;

const int MAX_SIZE = 4;

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols, const string& name) {
    cout << "Enter elements of " << name << " matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j)
    cin >> matrix[i][j];
}

void displayMatrix(const int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    cout << "Resultant matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j)
    cout << matrix[i][j] << "\t";
    cout << endl;
    }
}

int main() {
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;
    char operation;

    // Input dimensions for the first matrix
    std::cout << "Enter the number of rows and columns for the first matrix (max 4x4): ";
    std::cin >> rows1 >> cols1;

    // Input dimensions for the second matrix
    std::cout << "Enter the number of rows and columns for the second matrix (max 4x4): ";
    std::cin >> rows2 >> cols2;

    // Input elements for the first matrix
    inputMatrix(matrix1, rows1, cols1, "first");

    // Input elements for the second matrix
    inputMatrix(matrix2, rows2, cols2, "second");

    // Choose the operation
cout << "Choose operation - Addition (+), Subtraction (-), Multiplication (*): ";
cin >> operation;

    switch (operation) {
    case '+':
    if (rows1 == rows2 && cols1 == cols2) {
    for (int i = 0; i < rows1; ++i)
    for (int j = 0; j < cols1; ++j)
    result[i][j] = matrix1[i][j] + matrix2[i][j];
    displayMatrix(result, rows1, cols1);
    } else {
    cout << "Addition not possible: Matrices dimensions do not match.\n";
    }
    break;
    case '-':
    if (rows1 == rows2 && cols1 == cols2) {
    for (int i = 0; i < rows1; ++i)
    for (int j = 0; j < cols1; ++j)
    result[i][j] = matrix1[i][j] - matrix2[i][j];
    displayMatrix(result, rows1, cols1);
    } else {
    cout << "Subtraction not possible: Matrices dimensions do not match.\n";
    }
    break;
    case '*':
    if (cols1 == rows2) {
    for (int i = 0; i < rows1; ++i)
    for (int j = 0; j < cols2; ++j) {
    result[i][j] = 0;
    for (int k = 0; k < cols1; ++k)
    result[i][j] += matrix1[i][k] * matrix2[k][j];
    }
    displayMatrix(result, rows1, cols2);
    }
	else {
    cout << "Multiplication not possible: Number of columns in the first matrix must equal the number of rows in the second matrix.\n";
    }
    break;
    default:
    cout << "Invalid operation selected.\n";
    }

    return 0;
}

