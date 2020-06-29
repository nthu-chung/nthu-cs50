// EE231002 Lab01. Minimum Response Time
// 108034058,Chung Min Han
// Sep.16.2019
#include <stdio.h>
int main(void)
{
	float num; //store number
	float time;//store the minimum  response time
	printf("Input distance in killometers: ");               //prompt
	scanf("%f",&num);                                        //read kilometers
	time=num/299792458*1000*2;                               //execute
	printf("The minmum response time is %f seconds.\n",time); //result
	return 0;
}
