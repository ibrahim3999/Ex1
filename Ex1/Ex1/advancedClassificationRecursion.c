#include <stdio.h>
#include<math.h>

int reverse(int num)
{
    int digit = (int)log10(num);
    if(num == 0)
        return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}

int isArmstrongRec(int x)
{
 if(x==check_ArmstrongNumber(x))
    return 1;

return 0;
     
}
int check_ArmstrongNumber(int num)
{
     if(num>0)
    return (pow(num%10,3) +check_ArmstrongNumber(num/10));
}
int isPalindromeRec(int num)
{
    if(num == reverse(num))
        return 1;
    
    return 0;
}



