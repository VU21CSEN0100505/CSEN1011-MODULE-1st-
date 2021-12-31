/* Algorithm
01. Start
02. Accept an alphabet...
03. If the character is lowercase its ASCII value will be in the range 97 to 122 and upper case will be in the range 65 to 90.
04. For conversion from lower case to upper case subtract 32 and for conversion from upper to lower case add 32.
04. Stop */


#include<stdio.h>
int main()
{
    char i;
    scanf("%c",&i);
    if (i>=97 && i<=122)
    {
        i=i-32;
        printf("%c",i);
    }
    else if (i>=65 && i<=90)
    {
        i=i+32;
        printf("%c",i);
    }
    else
    {
        printf("Incorrect data");
    }
}

