/* c to find the area and perimeter of a circle */

#include <stdio.h>

int main(void)
{
  float radius;
  printf("Enter the value of radius : " ,radius);
  scanf("%f", &radius);

  float area;
  area = (22/7.0)*radius*radius;

  float perimeter;
  perimeter = 2*(22/7.0)*radius;

  printf("The given area is : %0.2f\n", area);
  printf("The given perimeter is : %0.2f", perimeter);
  return 0;
}
