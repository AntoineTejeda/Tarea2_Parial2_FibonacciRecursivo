#include <stdio.h>
#include <stdlib.h>

int CalculateFibonacci(int num);

int main(void)
{
    int num,Fibo;
    printf("Enter the number to calculate the fibonacci: ");
    scanf("%d",&num);
    num=num+1;
    Fibo=CalculateFibonacci(num);
    printf("El fibonacci de %d es: %d",num-1,Fibo);
}
int CalculateFibonacci(int num)
{

  if (num>2)
    return CalculateFibonacci(num-1)+CalculateFibonacci(num-2);
    else
    if(num==2)
    {
        return 1;
    }else
    if(num==1)
    {
        return 1;
    }else
    if(num==0)
    {
        return 0;
    }else
    return -1;
}
