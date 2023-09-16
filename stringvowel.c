// Find length, reverse, 1st and last char, vowels in string
#include<stdio.h>
int main()
{
    char str[20],len=0;
    printf("Enter the string: ");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++)
    {      
    len++;
    }
    int l=len;
    for(int i=0;i<l-1;i++)
{
    if(i==0 || i==l-1)
    printf("%c%c",str[i],str[l-1]);
}
    return 0;
}

