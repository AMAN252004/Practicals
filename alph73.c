#include <stdio.h>
int main() {
FILE *file;
char data[100];
// Open a file for appending
file = fopen("example.txt", "a");
if (file == NULL) {
printf("Error opening the file.\n");
return 1;
}
// Get data from the user
printf("Enter data to append to the file:\n");
fgets(data, sizeof(data), stdin);
// Append data to the file
fprintf(file, "%s", data);
// Close the file
fclose(file);
printf("Data appended to the file successfully.\n");
return 0;
}