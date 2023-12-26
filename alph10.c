#include <stdio.h>
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main() {
int num1, num2;
// Input values for num1 and num2
printf("Enter value for num1: ");
scanf("%d", &num1);
printf("Enter value for num2: ");
scanf("%d", &num2);
// Display the values before swapping
printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
// Call the swap function to swap the values using pointers
swap(&num1, &num2);
// Display the values after swapping
printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
return 0;
}