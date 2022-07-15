#include<stdio.h>
#include<time.h>
#include<string.h>
#include"stu.h"
#include"infor.h"
#include"fun.h"


 
int search(){//查找停车位
	int i;
	for(i=1;i<=n;i++){
		if(ve[i].Num==0) break;
	}
	if(i==n+1) return 0;
	return i;
} 
int compare(char a[],int b){//查找是否相同的车牌号
	int i;
	for(i=1;i<=n;i++){
		if(strcmp(a,ve[i].Licen)==0&&i!=b)
			return 1;
	}
	return 0;
} 
void record(int i){//信息录入	
	int m=0,l,q;
	printf("请输入车辆信息\n");
	printf("请输入车牌号：");
	scanf("%s%*c",&ve[i].Licen);
	l=strlen(ve[i].Licen);
	
	if(strcmp("0",ve[i].Licen)==0) return;
	
	q=compare(ve[i].Licen,i);
	while(l!=8||q==1){//纠错
		printf("车牌号输入有误，请重新输入车牌号：");
		scanf("%s%*c",&ve[i].Licen);
		l=strlen(ve[i].Licen);
		q=compare(ve[i].Licen,i);
	}
	printf("1.小汽车 2.小卡车 3.中卡车 4.大卡车\n请输入车型所对应号码：");
	scanf("%d",&m);
	
	if(m==0) return;
	
	while(m<1||m>4){//纠错
	
		printf("车型输入有误，请重新输入车型代号：");
		scanf("%d",&m);
	}
	if(m==1){
		strcpy(ve[i].Model,"小汽车" );
		ve[i].M=1;
	}	
	if(m==2){
		strcpy(ve[i].Model,"小卡车" );
		ve[i].M=2;
	} 	
	if(m==3){
		strcpy(ve[i].Model,"中卡车" );
		ve[i].M=3;
	} 	
	if(m==4){
		strcpy(ve[i].Model,"大卡车" );
		ve[i].M=4;
	} 
	//到达时间 
	struct tm *info;
    time( &ve[i].start );
	info = localtime( &ve[i].start );
	strftime(ve[i].Arr, 50, "%Y/%m/%d %H:%M:%S", info);
	ve[i].Num=i;
	sum++;
	printf("车辆信息录入成功！\n");
	printf("停车位    车牌号     车型       进场时间\n");
    output(i);	
} 
