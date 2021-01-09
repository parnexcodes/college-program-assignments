/* print even numbers from 1 to 100 using do while */

#include <stdio.h>
int main()
{

int a;
a = 1;
do
{
    printf("%d", a);
    a += 1;
} 
while (a <= 100);
return 0;
}
