#include <stdio.h>

int isPalindrome(int x)
{
    int n, reversed = 0, remainder, original;
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        return 1;

 return 0;

}
int isArmstrong(int x)
{
int r, sum=0,temp;         
temp=x;    
while(x>0)    
{    
r=x%10;    
sum=sum+(x*x*x);    
x=x/10;    
}    
if(temp==sum)    
    return 1;    
return 0;  
}