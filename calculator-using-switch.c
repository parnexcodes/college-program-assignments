/* wap in c for mini calculator using switch case */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Enter your first input : \n");
    scanf("%d", &a);
    printf("Enter your second input : \n");
    scanf("%d", &b);

    printf("A Simple Calculator\nPress 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\nPress 5 To Exit\n");
    printf("Enter your choice : \n");
    scanf("%d", &c);

    switch (c)
    {
        case 1:printf("Addition of given input = %d", a+b);
        break;
        case 2:printf("Subtraction of given input = %d", a-b);
        break;
        case 3:printf("Multiplication of given input = %d", a*b);
        break;
        case 4:printf("Division of given input = %d", a/b);
        break;
        case 5:exit(1);
        break;

        default:printf("Wrong input , only integers are accepted.");
    }

    return 0;

}
