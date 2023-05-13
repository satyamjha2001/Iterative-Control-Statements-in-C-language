#include<stdio.h>
int main() {
int i=20;
printf("First 10 even natural number in reverse order is: ");
do
{
    printf("\n%d",i);
    i-=2;
}while(i>=1);
return 0;
}