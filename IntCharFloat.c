//Write a C program containing declaration of 3 variables (of type int, char & float),
//also assign some values to them & print values of all 3 variables using single printf().

#include<stdio.h>
#include<conio.h>
int main()
{
int a=5;
char b='c';
float c=3.14;
printf("%d",a);
printf("%c",b);
printf("%.2f",c);//2f is for getting the 2 decimals
getch();
printf("\n");
printf("%d""%c""%.2f",a,b,c);//2f is for getting the 2 decimals
getch();
printf("\n");
printf("%d%c%.2f",a,b,c);//2f is for getting the 2 decimals
getch();
printf("\n");
printf("So in all the 3 ways we can write the samething");
getch();
}
