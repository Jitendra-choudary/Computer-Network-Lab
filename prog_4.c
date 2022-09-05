#include <stdio.h>
int main()
{
    char f1[10],f2[10],f3[10],f4[10];
    int c=0,flag=-1;
    printf("Enter the frame 1 bits.\n");
    scanf("%s",f1);
    printf("Enter the frame 2 bits.\n");
    scanf("%s",f2);
    printf("Enter the frame 3 bits.\n");
    scanf("%s",f3);
    printf("Enter the frame 4 bits.\n");
    scanf("%s",f4);
    for(int i=0;i<8;i++)
    {
        c=0;
        if(f1[i]=='1')
        c++;
        if(f2[i]=='1')
        c++;
        if(f3[i]=='1')
        c++;
        if(f4[i]=='1')
        c++;
        if(c%2!=0)
            {
                printf("There is a error in the frames.");
                flag=0;
                break;
            }
    }
    if(flag==-1)
        printf("There is no error in the frames.");
    return 0;
}
