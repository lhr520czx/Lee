#include<stdio.h>
#include<math.h>
main(){
	int year,n;
	double i,sum,Money;
    printf("---------------------------------\n");
	printf("\t1.�������� \n");
	printf("\t2.�������� \n");
	printf("\t3.������� \n");
	printf("---------------------------------\n");
	printf("��ѡ��:");
	scanf("%d",&n);
	if(n==1){
		printf("\n���뱾��:");
		scanf("%lf",&Money);
		printf("��������:");
		scanf("%lf",&i);
		printf("�������:");
		scanf("%d",&year);
		sum=Money*pow((1+i),year);
		printf("�õ��Ľ��:%lf \n",sum);
	}
	else if(n==2){
		printf("\n���뱾��:");
		scanf("%lf",&Money);
		printf("��������:");
		scanf("%lf",&i);
		printf("�������:");
		scanf("%d",&year);
		sum=Money+Money*i*year;  //sum=Money*(1+i*year);
		printf("�õ��Ľ��:%lf \n",sum);
	}
	else if(n==3){
		printf("\n����õ����:");
		scanf("%lf",&sum);
		printf("��������:");
		scanf("%lf",&i);
		printf("�������:");
		scanf("%d",&year);
		Money=sum/(1+i*year);
		printf("�����������豾��:%lf \n",Money);
		Money=sum/(pow((1+i),year));
		printf("�����������豾��:%lf \n",Money);
	}
	else{
		printf("�������!!!!\n");
	}
}
