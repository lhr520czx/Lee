#include<stdio.h>
#include<math.h>
#include<math.h>
main(){
    int n;
    double i,sum,Money,year,a,b;
    printf("---------------------------------\n");
    printf("\t1.�������� \n");
    printf("\t2.�������� \n");
    printf("\t3.������� \n");
    printf("\t4.ʱ����� \n");
    printf("\t5.���ʼ��� \n");
    printf("\t6.��Ͷ���� \n");
	printf("\t7.�ȶϢ \n");
    printf("---------------------------------\n");
    printf("��ѡ��:");
    scanf("%d",&n);
    if(n==1){
        printf("\n���뱾��:");
        scanf("%lf",&Money);
        printf("��������:");
        scanf("%lf",&i);
        printf("�������:");
        scanf("%lf",&year);
        sum=Money*pow((1+i),year);
        printf("�õ��Ľ��:%lf \n",sum);
    }
    else if(n==2){
        printf("\n���뱾��:");
        scanf("%lf",&Money);
        printf("��������:");
        scanf("%lf",&i);
        printf("�������:");
        scanf("%lf",&year);
        sum=Money+Money*i*year;  //sum=Money*(1+i*year);
        printf("�õ��Ľ��:%lf \n",sum);
    }
    else if(n==3){
        printf("\n����õ����:");
        scanf("%lf",&sum);
        printf("��������:");
        scanf("%lf",&i);
        printf("�������:");
        scanf("%lf",&year);
        Money=sum/(1+i*year);
        printf("�����������豾��:%lf \n",Money);
        Money=sum/(pow((1+i),year));
        printf("�����������豾��:%lf \n",Money);
    }
    else if(n==4)
    {
        printf("���뱾��:");
        scanf("%lf",&Money);
        printf("����õ����:");
        scanf("%lf",&sum);
        printf("��������:");
        scanf("%lf",&i);
        year= log(sum/Money) / log(1+i);
        printf("����ʱ��:%lf \n",year);
    }
    else if(n==5)
    {    
        printf("���뱾��:");
        scanf("%lf",&Money);
        printf("����õ����:");
        scanf("%lf",&sum);
        printf("����ʱ��:");
        scanf("%lf",&year);
        a=pow(sum/Money,1/year);
        i=(a-1)*100;
        printf("��������:%lf%% \n",i);
    }
    else if(n==6)
    {    a=1;
        printf("����ÿ��Ͷ����:");
        scanf("%lf",&Money);
        b=Money;
        printf("����ʱ��:");
        scanf("%lf",&year);
        printf("��������:");
        scanf("%lf",&i);
        while(a<=year)
        {
                sum=Money*(1+i);
                Money=sum+b;
                a++;
        }
        printf("���õ��ر�:%lf \n",sum);    
    }
	else if(n==7)
    {    
        printf("�������:");
        scanf("%lf",&Money);
        printf("��������:");
        scanf("%lf",&i);
        printf("����ʱ��:");
        scanf("%lf",&year);
        sum=Money*(i/12)*pow((1+i/12),year*12)/(pow(1+i/12,year*12)-1);
        printf("�ȶϢ:%lf \n",sum);
    }
    else{
        printf("�������!!!!\n");
    }
}