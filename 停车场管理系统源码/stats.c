#include<stdio.h>
#include<string.h>
#include"stu.h"
#include"infor.h"

void modelstats(){//车辆统计
	int i,a[5]={0};	
	for(i=1;i<=n;i++){
		if(ve[i].M==1) a[1]++;
		if(ve[i].M==2) a[2]++;
		if(ve[i].M==3) a[3]++;
		if(ve[i].M==4) a[4]++;
	}
	printf("小汽车：%d\n",a[1]);
	printf("小卡车：%d\n",a[2]);
	printf("中卡车：%d\n",a[3]);
	printf("大卡车：%d\n",a[4]);
} 
void timestats(){
	int a[24]={0},h,i,k=0;
	struct tm *info;
	for(i=1;i<=n;i++){
		if(ve[i].Num==0) continue;
		info=localtime( &ve[i].start );
		h=info->tm_hour;
		a[h]++;
	}
	for(i=0;i<24;i++){
		if(a[i]==0) continue;
		k=1;
		printf("进入时间为%2d:00到%2d:00--有_%d_辆车\n",i,i+1,a[i]);
	}
	if(k==0) printf("该停车场内目前没有车辆\n");
	else  printf("其余时间没有车辆进入\n");
}
