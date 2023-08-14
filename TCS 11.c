#include<stdio.h>
int main()
{
    int i;
    char string[30];
    gets (string);
    char letter,count=0;
    scanf("%c",&letter);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==letter)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;

}
