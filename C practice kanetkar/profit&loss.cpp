#include<stdio.h>
int main(){
	float cp,sp,p,l;
	printf("\nEnter the cost price and selling price:-");
	scanf("%f%f",&cp,&sp);
	p=sp-cp;
	l=cp-sp;
	if(p>0)
	    printf("The seller made a profit of RS.%f\n",p);
	if(i>0)
	    printf("The seller incurred loss of RS.%f\n",l);
	if(p==0)
	    printf("There is no loss,no profit\n");
	return 0;
}
