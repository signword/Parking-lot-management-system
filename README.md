# Parking-lot-management-system（停车场管理系统）

这是我大一时根据要求写的C语言课程设计，没有图形化界面，也没有什么复杂的算法。

## 课设介绍

### 一、项目介绍与设计目的

车辆信息有车牌号、车型（小汽车、小卡、中卡和大卡）、到达的时间和离开的时间等。

停车场的具体要求：设停车场是一个可停放n辆汽车的狭长通道，且只有一个大门可供汽车进出。汽车在停车场内按车辆到达时间的先后顺序，依次由北向南排列（大门在最南端，最先到达的第一辆车停放在车场的最北端），若车场内已停满n辆汽车，则后来的汽车只能在门外的便道上等待，一旦有车开走，则排在便道上的第一辆车即可开入；每辆停放在车场的车在它离开停车场时必须按它停留的时间长短交纳费用。

（1）添加功能：程序能够添加到达停车场的车辆信息。

（2）查询功能：可根据车牌号、车型等信息对已添加的停车场中的车辆信息进行查询，如果未找到，给出相应的提示信息，如果找到，则显示相应的记录信息。

（3）显示功能：可显示当前系统中所有车辆的信息，每条记录占据一行。

（4）统计功能：能统计停车场中车辆的总数、按车型、按到达时间进行统计等。

（5）收费功能：能计算车辆需要交纳的的费用。

### 二、项目功能模块

void main();主函数：模块的整合及主要页面显示

void settings();对停车场的名字、大小等进行设置

void record(int i);停车场车辆进入时的信息登记

void cost(int i);车辆停车费用的计算

void interface(int i);车辆停车费用的显示界面

void display(); 显示停车场所有车辆信息

void inquire(int t);按照停车位的序号、车牌号、车型进行查询

void modelstats();按照车型进行统计

void timestats();按照到达时间进行统计

（停车场内车辆数的统计在主函数中实现）

### 三、成果展示

![image](https://github.com/signword/Parking-lot-management-system/blob/main/images/1.png)

![image](https://github.com/signword/Parking-lot-management-system/blob/main/images/2.png)

![image](https://github.com/signword/Parking-lot-management-system/blob/main/images/3.png)

![image](https://github.com/signword/Parking-lot-management-system/blob/main/images/4.png)

![image](https://github.com/signword/Parking-lot-management-system/blob/main/images/5.png)

![image](https://github.com/signword/Parking-lot-management-system/blob/main/images/6.png)

![image](https://github.com/signword/Parking-lot-management-system/blob/main/images/7.png)

![image](https://github.com/signword/Parking-lot-management-system/blob/main/images/8.png)

![image](https://github.com/signword/Parking-lot-management-system/blob/main/images/9.png)
