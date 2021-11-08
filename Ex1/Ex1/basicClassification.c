#include <stdio.h>

int isStrong(int x)
{

    int i, sum=0,fact,num,rem;
   
    num=x;
    while(x>0)
    {
        rem=x%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        x=x/10;
    }
    if(num==sum)
        return 1;
   
    return 0;
}
int isPrime(int x)
{
  int  i;

  for (i = 2; i <= x/ 2; i++) {
    if (x% i == 0) {
      return 0;
    }
  }
    return 1;

}