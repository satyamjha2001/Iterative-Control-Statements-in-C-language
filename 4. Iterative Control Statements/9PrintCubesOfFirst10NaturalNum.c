#include<stdio.h>
int main() {
int i=1;
printf("First 10 natural numbers cubes is: ");
do
{
    printf("\n%d",i*i*i);
    i++;
}while(i<=10);
return 0;
}