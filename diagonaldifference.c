#include <stdio.h>
#include <stdlib.h> // For abs()

int diagonalDifference(int matrix[][10], int n) {
    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;

    for (int i = 0; i < n; i++) {
        primary_diagonal_sum += matrix[i][i];         // Elements on the primary diagonal
        secondary_diagonal_sum += matrix[i][n - 1 - i]; // Elements on the secondary diagonal
    }

    return abs(primary_diagonal_sum - secondary_diagonal_sum);
}

int main() {
    // Example for a 3x3 matrix
    int n = 3;
    int matrix3x3[10][10] = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };
    printf("Diagonal difference for 3x3 matrix: %d\n", diagonalDifference(matrix3x3, n));

    // Example for a 2x2 matrix
    n = 2;
    int matrix2x2[10][10] = {
        {1, 2},
        {3, 4}
    };
    printf("Diagonal difference for 2x2 matrix: %d\n", diagonalDifference(matrix2x2, n));

    return 0;
}