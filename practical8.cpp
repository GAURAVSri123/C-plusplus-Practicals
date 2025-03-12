#include <iostream>
using namespace std;

class Matrix {
public:
    int rows, cols;
    int mat[5][5]; 

    // Function to take matrix input
    void inputMatrix() {
        cout << "Enter matrix elements (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> mat[i][j];
    }

    // Function to display matrix
    void displayMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    // Function to add two matrices
    Matrix add(Matrix b) {
        Matrix result;
        result.rows = rows;
        result.cols = cols;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.mat[i][j] = mat[i][j] + b.mat[i][j];
        return result;
    }

    // Function to multiply two matrices
    Matrix multiply(Matrix b) {
        Matrix result;
        result.rows = rows;
        result.cols = b.cols;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < b.cols; j++) {
                result.mat[i][j] = 0;
                for (int k = 0; k < cols; k++)
                    result.mat[i][j] += mat[i][k] * b.mat[k][j];
            }
        return result;
    }

    // Function to find transpose
    Matrix transpose() {
        Matrix result;
        result.rows = cols;
        result.cols = rows;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.mat[j][i] = mat[i][j];
        return result;
    }
};

int main() {
    Matrix A, B, sum, product, trans;
    
    // Matrix A input
    cout << "Enter rows and columns for Matrix A: ";
    cin >> A.rows >> A.cols;
    A.inputMatrix();

    // Matrix B input (for addition and multiplication)
    cout << "Enter rows and columns for Matrix B: ";
    cin >> B.rows >> B.cols;
    B.inputMatrix();

    // Performing addition
    if (A.rows == B.rows && A.cols == B.cols) {
        sum = A.add(B);
        cout << "\nSum of matrices:\n";
        sum.displayMatrix();
    } else {
        cout << "\nMatrix addition not possible (size mismatch)!\n";
    }

    // Performing multiplication
    if (A.cols == B.rows) {
        product = A.multiply(B);
        cout << "\nProduct of matrices:\n";
        product.displayMatrix();
    } else {
        cout << "\nMatrix multiplication not possible!\n";
    }

    // Transpose of first matrix
    trans = A.transpose();
    cout << "\nTranspose of Matrix A:\n";
    trans.displayMatrix();

    return 0;
}
