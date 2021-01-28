#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare variables
    int Num1;
    int Num2;

    //Input numbers from user
    printf("Enter the first number : \n);
    scanf("%d", &Num1);
    printf("Enter the second number : \n);
    scanf("%d", &Num2);

    //Perform the operation and print the output
    printf("The sum of 2 numbers is : %d", Num1 + Num2);
}
