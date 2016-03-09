#include<stdio.h>
#include<math.h>
main(){
	int year,Money;
	double i,sum;
	printf("输入本金:");
	scanf("%d",&Money);
	printf("输入利率:");
	scanf("%lf",&i);
	printf("输入年份:");
	scanf("%d",&year);
	sum=Money*pow((1+i),year);
	printf("得到的金额:%lf \n",sum);
}
