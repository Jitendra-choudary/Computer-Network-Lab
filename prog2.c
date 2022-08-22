

#include<stdio.h>
int main()
{
	int r1=0,r2=0,r4=0,r8=0,error=0;char arr[11];
	
	printf("\n****** HAMMING CODE ******\n\n");
	
	printf("Enter a 11 bit sequence.\n\n");
	scanf("%s",arr);
	
	r1=arr[10]^arr[8]^arr[6]^arr[4]^arr[2]^arr[0];
	r2=arr[0]^arr[8]^arr[1]^arr[4]^arr[5]^arr[9];
	r4=arr[7]^arr[6]^arr[5]^arr[4];
	r8=arr[0]^arr[1]^arr[2]^arr[3];
	
	error=(8*r8)+(4*r4)+(2*r2)+(1*r1);
	
	if(error==0)
	printf("\nThe sequence is error free");
	
	else
	printf("\nThe error in given sequence is at postion %d",error);
	
	if(error!=0)
	{
	    if(arr[11-error]=='1')
	    arr[11-error]='0';
	    else
	    arr[11-error]='1';
	}
	
	printf("\n\nAfter error elimination the 11 bit sequence is %s",arr);
	
	return 0;
}
