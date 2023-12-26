#include <stdio.h>
int main() {
FILE *file;
char data[100];
// Open a file for reading
file = fopen("example.txt", "r");
if (file == NULL) {
printf("Error opening the file.\n");
return 1;
}
// Read data from the file
fscanf(file, "%[^\n]", data);
// Close the file
fclose(file);
// Display the read data
printf("Data read from the file:\n%s\n", data);
return 0;
}