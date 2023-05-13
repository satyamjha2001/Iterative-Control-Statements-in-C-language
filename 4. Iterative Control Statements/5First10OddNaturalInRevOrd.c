#include<stdio.h>
int main() {
int i=19;
printf("First 10 Odd natural number in reverse order is: ");
do
{
    printf("\n%d",i);
    i-=2;
}while(i>=1);
return 0;
}