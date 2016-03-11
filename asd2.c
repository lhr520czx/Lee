#include<stdio.h>
#include<math.h>
main(){
	int year,n;
	double i,sum,Money;
    printf("---------------------------------\n");
	printf("\t1.复利计算 \n");
	printf("\t2.单利计算 \n");
	printf("\t3.本金计算 \n");
	printf("---------------------------------\n");
	printf("请选择:");
	scanf("%d",&n);
	if(n==1){
		printf("\n输入本金:");
		scanf("%lf",&Money);
		printf("输入利率:");
		scanf("%lf",&i);
		printf("输入年份:");
		scanf("%d",&year);
		sum=Money*pow((1+i),year);
		printf("得到的金额:%lf \n",sum);
	}
	else if(n==2){
		printf("\n输入本金:");
		scanf("%lf",&Money);
		printf("输入利率:");
		scanf("%lf",&i);
		printf("输入年份:");
		scanf("%d",&year);
		sum=Money+Money*i*year;  //sum=Money*(1+i*year);
		printf("得到的金额:%lf \n",sum);
	}
	else if(n==3){
		printf("\n输入得到金额:");
		scanf("%lf",&sum);
		printf("输入利率:");
		scanf("%lf",&i);
		printf("输入年份:");
		scanf("%d",&year);
		Money=sum/(1+i*year);
		printf("单利计算所需本金:%lf \n",Money);
		Money=sum/(pow((1+i),year));
		printf("复利计算所需本金:%lf \n",Money);
	}
	else{
		printf("输入错误!!!!\n");
	}
}
