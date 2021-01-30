#include <stdio.h>

int main() {
    
    int a;
    printf("Enter Value : ");
    scanf("%d", &a);
    
    int sq;
    sq = a*a;
    printf("Square : %d\n", sq);
    
    int cube;
    cube = a*a*a;
    printf("Cube : %d", cube);
    
    return 0;
}
