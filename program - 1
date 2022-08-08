#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    char pbit;
    char ch;
    int count=0;
    printf("***  ***  PARITY CHECKER   ***  ***\n");
    printf("Enter the input for the frame of 8 bits. \n");
    scanf("%s",input);
    for(int i=0;i<7;i++)
    {
        if(input[i]=='1')
        {
            count++;
        }
    }
    printf("enter the type of parity check ( e / o ).\n");
    scanf("%s",&ch);
    if(ch=='e')
    {
    printf("\n\n     ***  EVEN PARITY CHECK ***\n");
    if(count%2==0)
    {
        pbit='0';
        printf("the frame has even number of 1 bits so the parity bit is %c .\n",pbit);
        input[7]=pbit;
        printf("the new string is %s",input);
    }
    else
    {
        pbit='1';
        printf("\nthe frame has odd number of 1 bits so the parity bit is %c .\n",pbit);
        input[7]=pbit;
        printf("the new string is %s",input);
    }
    }
    if(ch=='o')
    {
    printf("\n\n     ***  ODD PARITY CHECK ***\n");
    if(count%2!=0)
    {
        pbit='0';
        printf("the frame has odd number of 1 bits so the parity bit is %c .\n",pbit);
        input[7]=pbit;
        printf("the new string is %s\n",input);
    }
    else
    {
        pbit='1';
        printf("the frame has even number of 1 bits so the parity bit is %c .\n",pbit);
        input[7]=pbit;
        printf("the new string is %s",input);
    }
    }
    return 0;
}
