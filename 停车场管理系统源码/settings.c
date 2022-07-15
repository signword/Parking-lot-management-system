#include<stdio.h>
#include<string.h>
#include"stu.h"
#include"infor.h"
#include"fun.h"

void settings(){//设置停车场
	int k;
	printf("请输入停车场的名称（长度不超过20个字符且不为空）:");	
	while(scanf("%s",&name)){
		if(strlen(name)<21) break;
		printf("注意：停车场的名称长度只能在1到20之间（包括1和20）\n请重新输入：\n");
	}
	printf("请输入停车场的车位总数（1~1000）:");
	while(scanf("%d",&n)){
		if(n>0&&n<1001) break;
		printf("注意：停车场的车位总数只能在1到1000之间（包括1和1000）\n请重新输入：");
	}
	printf("停车场收费标准如下：\n");
	printf("停车时长在1小时内的费用：_0_（元）\n");
	printf("停车时长超过1小时，小于4小时的费用：_1_（元/小时）\n");
	printf("停车时长超过4小时的费用：_2_（元/小时）\n");
	printf("停车24小时的封顶费用：_18_（元）\n");
	fee[0]=0;
	fee[1]=1;
	fee[2]=2;
	fee[3]=18;
}
