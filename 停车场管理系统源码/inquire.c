#include<stdio.h>
#include<time.h>
#include<string.h>
#include"stu.h"
#include"infor.h"
#include"fun.h"

int liceninqu(char a[],char b[]){
	int i;
	for(i=0;a[i]!=0&&b[i]!=0;i++){
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}
void inquire(int t){//车辆查询
	int i,m,k=0,r;
	char a[10];
	if(t==1){//停车号查询 
		printf("请输入停车位号码：");
		scanf("%d",&m);
		for(i=1;i<=n;i++){
			if(ve[i].Num==0) continue;
			if(ve[i].Num==m){	
				if(k==0) printf("停车位    车牌号     车型       进场时间\n");			
				output(i);
				k=1;
				break;
			} 			
		}
		if(k==0) printf("抱歉，停车场没有您所查询的车辆\n");
	}else if(t==2){//车牌号查询
		printf("请输入车牌号："); 
		scanf("%s",&a);		
		for(i=1;i<=n;i++){
			if(ve[i].Num==0) continue;
			r=liceninqu(a,ve[i].Licen);
			if(r){
				if(k==0) printf("停车位    车牌号     车型       进场时间\n");
				output(i);
				k=1;
			} 			
		}
		if(k==0) printf("抱歉，停车场没有您所查询的车辆\n");
	}else if(t==3){//车型查询 
		printf("1.小汽车 2.小卡车 3.中卡车 4.大卡车\n请输入车型所对应号码：");
		scanf("%d",&m);		
		for(i=1;i<=n;i++){
			if(ve[i].Num==0) continue;
			if(ve[i].M==m){
				if(k==0) printf("停车位    车牌号     车型       进场时间\n");
				output(i);
				k=1;
			} 		
		}
		if(k==0) printf("抱歉，停车场没有您所查询的车辆\n");		    
	}
} 
