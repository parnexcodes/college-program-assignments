/* print even numbers from 1 to 100 using do while */

#include <stdio.h>
int main()
{

int a;
a = 0;
do
{
    printf("%d\n", a);
    a += 2;
} 
while (a <= 100);
return 0;
}
