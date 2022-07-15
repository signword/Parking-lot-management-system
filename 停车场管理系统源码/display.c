#include<stdio.h>
#include<string.h>
#include"stu.h"
#include"infor.h"
#include"fun.h"

void display(){//记录显示
	int i,k=0;;
	for(i=1;i<=n;i++){
		if(ve[i].Num==0) continue;
		if(k==0) printf("停车位    车牌号     车型       进场时间\n");
		output(i);	
		k=1;
	}
	if(k==0) printf("该停车场内目前没有车辆\n");	
} 
void menu(){
	printf("\n");
	printf("__________________________________________________________________\n");	
	printf("                                                                  \n");
	printf("———————————————#主菜单#——————————————\n");
	printf("                      **************************                  \n");
	printf("                          1.车辆进入登记                          \n");
	printf("                          2.车辆离开费用结算                      \n");
	printf("                          3.停车场内车辆记录                      \n");
	printf("                          4.停车场内车辆查询                     \n");
	printf("                          5.停车场内车辆统计                      \n");
	printf("                          0.退出系统                              \n");
	printf("                      **************************                  \n");
	printf("__________________________________________________________________\n\n");
}

void output(int i){
	printf(" %-7d  ",ve[i].Num);
	printf("%-10s ",ve[i].Licen);
	printf("%-10s ",ve[i].Model);
	printf("%s\n",ve[i].Arr);
}


