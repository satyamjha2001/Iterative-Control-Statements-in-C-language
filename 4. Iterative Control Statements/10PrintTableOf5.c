#include<stdio.h>
int main() {
int i=1,n=5;
printf("Table of 5 is: ");
do
{
    printf("\n%2d * %2d = %2d",n,i,n*i);
    i++;
}while(i<=10);
return 0;
}