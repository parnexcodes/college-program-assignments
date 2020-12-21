/* write a program in c to find out the simple interest of given
pa , r ,t */

#include <stdio.h>

int main(void)
{
  int p,r,t;
  float i;

  printf("Enter the values of P : %d\n", p);
  scanf("%d", &p);
  printf("Enter the values of R : %d\n", r);
  scanf("%d", &r);
  printf("Enter the values of T : %d\n", t);
  scanf("%d", &t);

  i = p*r*t/100.0;

  printf("Your answer is : %0.2f", i);
  return 0;
}
