/*  c to convert temprature given in fehrenhite to celsius */

#include <stdio.h>

int main(void)
{
  float far;
  printf("Enter fahrenheit value : %f", far);
  scanf("%f", &far);
  
  float cel;
  cel = (far - 32)*5/9.0;
  printf("Value of celsius : %0.2f", cel);
  return 0;
}
