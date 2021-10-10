#include<stdio.h>

int main()
{
    char number[105];
    printf("Enter the number\n");
    scanf("%s",number);
    int i=0;
    int a=0,b=0;
    while(number[i]!='\0')
    {
        if(number[i]=='.')
        {
            a++;
            if(number[i+1]!='\0')
            b=1;
        }
        i++;
    }
    if(a==1 && b==1)
    printf("Valid\n");
    else
    printf("Invalid\n");
}

