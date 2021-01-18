#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a Character : \n");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': printf("Character is vowel!");
        break;

        default: printf("Character is consonant!");
    
    }

    return 0;
}
