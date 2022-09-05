#include <stdio.h>
int main()
{
    char f1[10],f2[10],f3[10],f4[10];
    int c1=0,c2=0,c3=0,c4=0;
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
        if(f1[i]=='1')
        c1++;
        if(f2[i]=='1')
        c2++;
        if(f3[i]=='1')
        c3++;
        if(f4[i]=='1')
        c4++;
    }
    printf("%d%d%d%d\n",c1,c2,c3,c4);
    
    
        if(c1%2!=0)
        printf("There is a error in the frame 1.\n");
        else
        printf("There is no error in frame 1.\n");
        
        if(c2%2!=0)
        printf("There is a error in the frame 2.\n");
        else
        printf("There is no error in frame 2.\n");
        
        if(c3%2!=0)
        printf("There is a error in the frame 3.\n");
        else
        printf("There is no error in frame 3.\n");
        
        if(c4%2!=0)
        printf("There is a error in the frame 4.\n");
        else 
        printf("There is no error in frame 4.\n");
        
        if(c1%2==0 && c2%2==0 && c3%2==0 && c4%2==0)
        printf("There is no error in the frames.\n");
    
    return 0;
}
