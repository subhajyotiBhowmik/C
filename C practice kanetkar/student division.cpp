#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,per;
	printf("Enter marks of 5 subjects:-");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)*100/500;
	if(per>=60)
	printf("First Division\n");
	else
	{
		if(per>50)
		printf("Second Divison\n");
	else
	{
		if(per>40)
		printf("Third Divison\n");
		
	    else
	    printf("Fail\n");
	}
} 
return 0;
}
