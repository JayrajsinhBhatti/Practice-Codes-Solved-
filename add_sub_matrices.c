#include <stdio.h>
#define row 3
#define col 3

void Add_Matrices(int a[row][col], int b[row][col]);
void Subtract_Matrices(int a[row][col], int b[row][col]);

int main() {
    int a[row][col], b[row][col], operation;

    printf("Enter the values in Matrix 1:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("For (%d %d): ",i,j);
            scanf("%d", &a[i][j]); // Read a single integer
        }
    }

    printf("Enter the values in Matrix 2:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("For (%d %d): ",i,j);
            scanf("%d", &b[i][j]); // Read a single integer
        }
    }

    printf("Enter 1 to add and 2 to subtract: ");
    scanf("%d", &operation);

    if (operation == 1) { // Compare as integers
        Add_Matrices(a, b);
    } else if (operation == 2) {
        Subtract_Matrices(a, b);
    } else {
        printf("Invalid operation.\n");
    }

    return 0; // Return an integer from main
}

void Add_Matrices(int a[row][col], int b[row][col]) {
    int c[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Result of Addition:\n ");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d \t", c[i][j]); // Added space for readability
        }
        printf("\n"); // New line for each row
    }
}

void Subtract_Matrices(int a[row][col], int b[row][col]) {
    int c[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Result of Subtraction:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d \t", c[i][j]); // Added space for readability
        }
        printf("\n"); // New line for each row
    }
}
