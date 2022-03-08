#include<stdio.h>
#include<ctype.h>
int main()
{
char c;
printf("Give the character that needs to be checked:");
scanf("%c",c);
if (isalpha(c)==1)
{
printf("The inputted character is an alphabet.");
}
else
{
printf("the inputted string is not a alphabet.");
}
printf("hey");
}
