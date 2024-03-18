#include <stdio.h>

int main() {
    int row1, col1, row2, col2;
    scanf("%d %d %d %d", &row1, &col1, &row2, &col2);

    int mat1[row1][col1];
    int mat2[row2][col2];

    // Input for matrix 1
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for matrix 2
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Check if matrices can be multiplied
    if (col1 != row2) {
        printf("The matrices can not be multiplied\n");
    } else {
        int result[row1][col2];

        // Calculate the product of matrices
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                result[i][j] = 0;
                for (int k = 0; k < col1; k++) {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        // Print the product of matrices
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

