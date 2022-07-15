#include<stdio.h>
#include<time.h>
#include<string.h>
#include"stu.h"
#include"infor.h"
#include"fun.h"

int confirm(int i){//确认 
	int t2;
	printf("请确认车辆信息：\n");
	printf("停车位    车牌号     车型       进场时间\n");		
	output(i);
	printf("1.确认 2.取消\n");
	scanf("%d",&t2);
	while(t2<0||t2>2){
		printf("输入有误，请重新输入：\n");
		scanf("%d\n",&t2);
	}	
	return t2;	
}
void cost(int i){//费用结算
	double dur,ho;
    struct tm *info;
    time( &ve[i].end );
    info = localtime( &ve[i].end );
	strftime(ve[i].Depar, 50, "%Y/%m/%d %H:%M:%S", info);
	dur=difftime(ve[i].end, ve[i].start);
	ho=dur/3600;
	//计算费用
	if(ho<=1){
		fee[4]=0;
	}else if(ho<=4){
		fee[4]=ho-1;
	}else{
		fee[4]=ho-1+(ho-4)*2;
	}
	if(fee[4]>fee[3]) fee[4]=fee[3];				
}
void interface(int i){		
	printf("停车位    车牌号     车型       进场时间\n");	
	output(i);
	printf("                                                                  \n");
	printf("目前时间：");
	printf("%s\n",ve[i].Depar);
	printf("********************************************************\n");
	printf("                   停车场收费标准\n");
	printf("停车时长在1小时内的费用：_0_（元）\n");
	printf("停车时长超过1小时，小于4小时的费用：_1_（元/小时）\n");
	printf("停车时长超过4小时的费用：_2_（元/小时）\n");
	printf("停车24小时的封顶费用：_18_（元）\n");
	printf("********************************************************\n");
	printf("总费用：");
	printf("%.2lf\n",fee[4]);
	fee[4]=0;
	sum--;
	ve[i].Num=0;
}
