#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct student																		//結構 
{
    char name[10];
	int id;
	int math;
	int physics;
	int english;
	float avg;
};
int main(void)
{
	int password=0,x,n=0, i, j, k, bs[10]={0,1,2,3,4,5,6,7,8,9};	//變數
	char ch,find[10];
	struct student stu[10];
	{
	printf("00000000000000000000000000000\n");																			//顯示個人特色版面
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	printf("00000000000000000000000000000\n");
	}
	
	system("pause");
	system("cls");															 
	
	
	printf("輸入4位數密碼");												//書入密碼 
	scanf("%d",&password);
	x=0;
	while(password!=2022)														//判別密碼
	{
		x+=1;
		if(x >= 3)																//如果錯誤次數超過限制則關閉程式 
		{
			system("pause");
			return 0;
		}
		printf("\n密碼輸入錯誤%d次\n", x);				//提示錯誤次數 
		printf("再猜阿");											//要求使用者輸入密碼並偵測 
		scanf("%d", &password);
	}	
	
menu:
system("cls");																//顯示主選單 
printf("----[成 績 系 統]---\n");
printf("| a. 輸入學生成績  |\n");
printf("| b. 顯示學生成績  |\n");
printf("| c. 搜尋學生成績  |\n");
printf("| d. 成績排名      |\n");
printf("| e. 系統結束      |\n");
printf("--------------------\n");
	printf("請輸入一個字元 ");												
	fflush(stdin);
	scanf("%c", &ch);
	system("cls");
	



