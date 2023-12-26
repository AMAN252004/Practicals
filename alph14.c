#include <stdio.h>
#include <stdlib.h>
int main() {
int *arr;
int size;
// Input the size of the array from the user
printf("Enter the size of the array: ");
scanf("%d", &size);
// Dynamically allocate memory for the array
arr = (int *)malloc(size * sizeof(int));
// Check if memory allocation was successful
if (arr == NULL) {
printf("Memory allocation failed. Exiting program.\n");
return 1; // Return an error code
}
// Input array elements from the user
printf("Enter %d elements for the array:\n", size);
for (int i = 0; i < size; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &arr[i]);
}
// Display the elements of the dynamically allocated array
printf("Elements of the dynamically allocated array:\n");
for (int i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
// Free the dynamically allocated memory
free(arr);
return 0;
}