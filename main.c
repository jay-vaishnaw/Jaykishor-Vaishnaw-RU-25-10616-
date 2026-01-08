#include <stdio.h>

/**
 * Step 5: Create a function to scan the matrix.
 * Step 6: Pass the 2D array, number of rows, and columns to the function.
 */
void scanDangerZones(int rows, int cols, int grid[rows][cols]) {
    printf("\n--- Scanning Grid for Danger Zones ---\n");
    int found = 0;

    // Step 7: Use nested loops to traverse each cell
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Step 8: Check if the current element is 1
            if (grid[i][j] == 1) {
                // Step 9: If it is 1, print the position (row, column)
                printf("DANGER detected at: Row %d, Column %d\n", i, j);
                found = 1;
            }
        }
    }

    // Step 10: End the function after scanning
    if (!found) {
        printf("No danger zones found. Area is safe.\n");
    }
}

int main() {
    int r, c;

    // Step 1 & 2: Get rows and columns from user
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    // Step 3: Create 2D integer array (Variable Length Array)
    int matrix[r][c];

    // Step 4: Input elements (1 for Danger, 0 for Safe)
    printf("Enter grid values (0 for Safe, 1 for Danger):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter value for [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call the detection function
    scanDangerZones(r, c, matrix);

    return 0;
}