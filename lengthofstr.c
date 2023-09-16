// Find length, reverse, 1st and last char, vowels in string
#include<stdio.h>
int main()
{
    char str[20];
    int len=0;
    printf("Enter the string: ");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++)
    {      
len++;
    }
    printf("\n String is %d ",len);
    return 0;
}

