5#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ")
    scanf("%d", &cols)

    int arr2D[rows][cols];  // 2D array
    int arr1D[rows * cols]; // 1D array to hold 2D array elements

    // Input for the 2D array
    printf("Enter the elements of the 2D array:\n")
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr2D[i][j])
        }
    }

    // Flattening 2D array to 1D array
    int index = 0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            arr1D[index] = arr2D[i][j]
            index++;
        }
    }

    // Display the 1D array
    printf("1D array representation:\n");
    for (i = 0; i < rows * cols; i++) {
        printf("%d ", arr1D[i]);
    }
    printf("\n");

    return 0
}
