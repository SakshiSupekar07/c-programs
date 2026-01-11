#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int rows, cols

    
    file = fopen("matrix.txt", "r")
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1
    }

    
    fscanf(file, "%d %d", &rows, &cols)

   
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            fscanf(file, "%d", &matrix[i][j]);
        }
    }

    
    fclose(file)

    
    printf("Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

