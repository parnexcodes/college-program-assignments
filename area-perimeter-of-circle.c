/* c to find the area and perimeter of a circle */

#include <stdio.h>

int main(void)
{
  float radius;
  printf("Enter the value of radius : %f/n" ,radius);

  float area;
  area = (22/7.0)*radius*radius;

  float perimeter;
  perimeter = 2*(22/7.0)*radius;

  printf("The given area is : %f/n", area);
  printf("The given perimeter is : %f", perimeter);
  return 0;
}
