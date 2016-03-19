#include<stdio.h>
#include<math.h>
#include<math.h>
main(){
    int n;
    double i,sum,Money,year,a,b;
    printf("---------------------------------\n");
    printf("\t1.复利计算 \n");
    printf("\t2.单利计算 \n");
    printf("\t3.本金计算 \n");
    printf("\t4.时间计算 \n");
    printf("\t5.利率计算 \n");
    printf("\t6.定投计算 \n");
	printf("\t7.等额本息 \n");
    printf("---------------------------------\n");
    printf("请选择:");
    scanf("%d",&n);
    if(n==1){
        printf("\n输入本金:");
        scanf("%lf",&Money);
        printf("输入利率:");
        scanf("%lf",&i);
        printf("输入年份:");
        scanf("%lf",&year);
        sum=Money*pow((1+i),year);
        printf("得到的金额:%lf \n",sum);
    }
    else if(n==2){
        printf("\n输入本金:");
        scanf("%lf",&Money);
        printf("输入利率:");
        scanf("%lf",&i);
        printf("输入年份:");
        scanf("%lf",&year);
        sum=Money+Money*i*year;  //sum=Money*(1+i*year);
        printf("得到的金额:%lf \n",sum);
    }
    else if(n==3){
        printf("\n输入得到金额:");
        scanf("%lf",&sum);
        printf("输入利率:");
        scanf("%lf",&i);
        printf("输入年份:");
        scanf("%lf",&year);
        Money=sum/(1+i*year);
        printf("单利计算所需本金:%lf \n",Money);
        Money=sum/(pow((1+i),year));
        printf("复利计算所需本金:%lf \n",Money);
    }
    else if(n==4)
    {
        printf("输入本金:");
        scanf("%lf",&Money);
        printf("输入得到金额:");
        scanf("%lf",&sum);
        printf("输入利率:");
        scanf("%lf",&i);
        year= log(sum/Money) / log(1+i);
        printf("所需时间:%lf \n",year);
    }
    else if(n==5)
    {    
        printf("输入本金:");
        scanf("%lf",&Money);
        printf("输入得到金额:");
        scanf("%lf",&sum);
        printf("输入时间:");
        scanf("%lf",&year);
        a=pow(sum/Money,1/year);
        i=(a-1)*100;
        printf("所需利率:%lf%% \n",i);
    }
    else if(n==6)
    {    a=1;
        printf("输入每年投入金额:");
        scanf("%lf",&Money);
        b=Money;
        printf("输入时间:");
        scanf("%lf",&year);
        printf("输入利率:");
        scanf("%lf",&i);
        while(a<=year)
        {
                sum=Money*(1+i);
                Money=sum+b;
                a++;
        }
        printf("所得到回报:%lf \n",sum);    
    }
	else if(n==7)
    {    
        printf("输入贷款:");
        scanf("%lf",&Money);
        printf("输入利率:");
        scanf("%lf",&i);
        printf("输入时间:");
        scanf("%lf",&year);
        sum=Money*(i/12)*pow((1+i/12),year*12)/(pow(1+i/12,year*12)-1);
        printf("等额本息:%lf \n",sum);
    }
    else{
        printf("输入错误!!!!\n");
    }
}