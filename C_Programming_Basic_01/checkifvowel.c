#include <stdio.h>
#include<ctype.h>
int main()
{
    char vowel;
    printf("ENTER A CHARACTER AND CHECK IF IT IS A VOWEL\n");
    scanf("%c", &vowel);
    switch (vowel)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("THE CHARACTER %c you ENTERED IS A VOWEL", vowel);
    break;
    default:
    if(!isalpha(vowel))
    printf("Non Alphabetic");
    else
    printf("THE CHARACTER %c YOU ENTERED IS A CONSONANT ", vowel);
    }
}