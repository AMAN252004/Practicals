#include <stdio.h>
// Function to calculate the sum of diagonal elements in a square matrix
int sumOfDiagonal(int matrix[10][10], int size) {
int sum = 0;
for (int i = 0; i < size; i++) {
sum += matrix[i][i]; // Add the diagonal element at (i, i) to the sum
}
return sum;
}
int main() {
int matrix[10][10];
int size;
// Input the size of the square matrix from the user
printf("Enter the size of the square matrix: ");
scanf("%d", &size);
// Input elements for the square matrix
printf("Enter elements for the square matrix:\n");
for (int i = 0; i < size; i++) {
for (int j = 0; j < size; j++) {
printf("Enter element at position (%d, %d): ", i + 1, j + 1);
scanf("%d", &matrix[i][j]);
}
}
// Display the input matrix
printf("\nThe entered matrix is:\n");
for (int i = 0; i < size; i++) {
for (int j = 0; j < size; j++) {
printf("%d\t", matrix[i][j]);
}
printf("\n");
}
// Calculate and display the sum of diagonal elements using the function
int diagonalSum = sumOfDiagonal(matrix, size);
printf("\nThe sum of diagonal elements is: %d\n", diagonalSum);
return 0;
}
