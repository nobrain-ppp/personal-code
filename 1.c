#include<stdio.h>
int addDigits(int num) {
    int sum=0;
    int i = 0;
    while(num>=10){
    sum+=num%10;
    num/=10; 
    if (num<10)
    {
        sum+=num;
    }              
    }
    while (sum>=10)
    {
        i = sum%10;
        i+=sum/10;
    }
    return i;
}  
int main()
{   int num = 38;

    printf("%d",addDigits(num));
    return 0;
}