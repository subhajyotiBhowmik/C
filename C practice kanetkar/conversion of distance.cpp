#include<stdio.h>
int main()
{
	float km,ft,m,cm,inch;
	printf("\nEnter the distance in km :- ");
	scanf("%f",&km);
	m = km*1000;
	cm = m*100;
	inch = cm/2.54;
	ft = inch / 12;
	
	printf("Distance in meter = %f\n",m);
	printf("Distance in cm = %f\n",cm);
	printf("Distance in inch = %f\n",inch);
	printf("Distance in feet = %f\n",ft);
	
	return 0;
	
}
