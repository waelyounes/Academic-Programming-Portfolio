#include <iostream>
#include <vector>

using namespace std;

/**
 * Project: Matrix Diagonal Analysis
 * Purpose: Academic exercise to manipulate 2D arrays (Square Matrices)
 * Logic: Extract Main Diagonal, sum Secondary Diagonal, and product of elements below it.
 */

int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    // Dynamic allocation of a 2D matrix
    vector<vector<int>> matrix(n, vector<int>(n));

    // Input: Filling the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // 1. Printing the Main Diagonal (i == j)
    cout << "\nMain Diagonal Elements: ";
    for (int i = 0; i < n; i++) {
        cout << matrix[i][i] << " ";
    }

    // 2. Sum of Secondary Diagonal (i + j == n - 1)
    int secondarySum = 0;
    for (int i = 0; i < n; i++) {
        secondarySum += matrix[i][n - 1 - i];
    }
    cout << "\nSum of Secondary Diagonal: " << secondarySum;

    // 3. Product of elements below the Secondary Diagonal (i + j > n - 1)
    long long productBelowSecondary = 1;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1) {
                productBelowSecondary *= matrix[i][j];
                found = true;
            }
        }
    }

    if (found)
        cout << "\nProduct of elements below the Secondary Diagonal: " << productBelowSecondary << endl;
    else
        cout << "\nNo elements exist below the Secondary Diagonal (Matrix size too small)." << endl;

    return 0;
}
