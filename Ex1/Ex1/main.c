#include <stdio.h>
#include <NumClass.h>

int main() {
    int num1, num2;
    printf("Enter num1 number: \n");
    scanf("%d", &num1);
    printf("Enter num2 number: \n");
    scanf("%d", &num2);

    int i;
    printf("Strong numbers are: ");
    for (i = num1; i <= num2; i++) {
        if (isStrong(i) == 1) 
            printf("%d ,",i);
    }
     printf("\nPalindrome numbers are: ");
    for (i = num1; i <= num2; i++) {
        if (isPalindromeRec(i) == 1) 
            printf("%d ,",i);
    }
    printf("\nPrime numbers are:");
    for (i = num1; i <= num2; i++) {
        if (isPrime(i) == 1) 
            printf("%d ,",i);
    }
    printf("\nArmstrong numbers are: ");
    for (i = num1; i <= num2; i++) {
        if (isArmstrongRec(i) == 1) printf("%d ,",i);
    }
   
   
    return 0;
}