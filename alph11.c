#include <stdio.h>
int main() {
int arr[] = {1, 2, 3, 4, 5};
int *ptr = arr; // Initialize the pointer to the beginning of the array
// Increment a pointer
printf("Original value at *ptr: %d\n", *ptr);
ptr++;
printf("After incrementing, value at *ptr: %d\n", *ptr);
// Decrement a pointer
ptr--;
printf("After decrementing, value at *ptr: %d\n", *ptr);
// Add an integer to a pointer
ptr = arr; // Reset the pointer to the beginning of the array
printf("Original value at *ptr: %d\n", *ptr);
ptr = ptr + 2;
printf("After adding 2, value at *ptr: %d\n", *ptr);
// Subtract an integer from a pointer
ptr = ptr - 1;
printf("After subtracting 1, value at *ptr: %d\n", *ptr);
// Subtract two pointers of the same type
int *ptr2 = arr + 3;
printf("Value at *ptr2: %d\n", *ptr2);
printf("Difference between ptr and ptr2: %ld\n", ptr2 - ptr);
return 0;
}