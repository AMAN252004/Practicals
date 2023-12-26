#include<stdio.h>
#include<string.h>
int main() {
char str[100];
int len;
printf("\nEnter the String : ");
scanf("%s",str);
/*
strlen() is the pre-defined function
to find the length of a string
*/
len = strlen(str);
printf("\nLength of the given string is %d", len);
return(0);
}