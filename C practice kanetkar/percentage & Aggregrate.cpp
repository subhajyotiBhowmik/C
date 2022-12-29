#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,aggr;
	float per;
	printf("\nEnter marks in 5 subject:-");
	scanf("%d,%d,%d,%d,%d",&s1,&s2,&s3,&s4,&s5);
	aggr = s1+s2+s3+s4+s5;
	per = aggr/5;
	printf("Aggregrate Marks = %d\n",aggr);
	printf("Percentage Marks = %f\n",per);
	return 0;
}
