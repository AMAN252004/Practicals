#include <stdio.h>
// Function to calculate the factorial of a number
long long factorial(int num) {
if (num == 0 || num == 1) {
return 1;
} else {
return num * factorial(num - 1);
}
}
// Function to calculate nCr
long long nCr(int n, int r) {
if (n < r || n < 0 || r < 0) {
return 0; // Invalid input, return 0
}
return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
int n, r;
// Input values for n and r from the user
printf("Enter the value of n: ");
scanf("%d", &n);
printf("Enter the value of r: ");
scanf("%d", &r);
// Calculate and display the result
long long result = nCr(n, r);
printf("%dC%d = %lld\n", n, r, result);
return 0;
}