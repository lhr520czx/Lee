#include<stdio.h>
#include<math.h>
main(){
	int year,Money;
	double i,sum;
	printf("���뱾��:");
	scanf("%d",&Money);
	printf("��������:");
	scanf("%lf",&i);
	printf("�������:");
	scanf("%d",&year);
	sum=Money*pow((1+i),year);
	printf("�õ��Ľ��:%lf \n",sum);
}
