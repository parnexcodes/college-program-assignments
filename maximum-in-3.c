#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter 1st number : \n");
    scanf("%d", &a);
    printf("Enter 2nd number : \n");
    scanf("%d", &b);
    printf("Enter 3rd number : \n");
    scanf("%d", &c);

    if (a>b && a>c)
    {
        printf("%d is maximum!", a);
    }
    else if (b>a && b>c)
    {
        printf("%d is maximum!", b);
    }
    else {
        printf("%d is maxium!", c);
    }
    return 0;
}
