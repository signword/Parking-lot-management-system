#ifndef __STU__
#define __STU__
#include<stdio.h>
#include<time.h>
#include<string.h>

typedef struct{//车辆信息 
	int Num,M;//车辆停车位号码 
	char Arr[50],Depar[50],Licen[10],Model[10];
	time_t start, end;
}vehicle;

#endif
