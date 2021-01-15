/* to find day of week , given input is 1-7 */

#include <stdio.h>

int main()
{
    int day;

    printf("Enter the day number : \n");
    scanf("%d", &day);

    switch (day)
    {
        case 1: printf("It's Monday!");
        break;
        case 2: printf("It's Tuesday!");
        break;
        case 3: printf("It's Wednesday!");
        break;
        case 4: printf("It's Thursday!");
        break;
        case 5: printf("It's Friday!");
        break;
        case 6: printf("It's Saturday!");
        break;
        case 7: printf("It's Sunday!");
        break;

        default: printf("Invalid response.");
    }

    return 0;
}
