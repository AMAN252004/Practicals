#include <stdio.h>
// Recursive function to calculate factorial
unsigned long long int factorial(int n) {
if (n == 0 || n == 1) {
return 1;
} else {
return n * factorial(n - 1);
}
}
int main() {
int num;
// Input the number from the user
printf("Enter a non-negative integer: ");
scanf("%d", &num);
// Check for non-negative input
if (num < 0) {
printf("Please enter a non-negative integer.\n");
return 1; // Return an error code
}
// Calculate and display the factorial
unsigned long long result = factorial(num);
printf("Factorial of %d = %llu\n", num, result);
return 0;
}