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
	
		switch(ch)																
	{
		case'A':																//輸入成績 
		case'a':
			fflush(stdin);
			printf("輸入學生成績\n");
			printf("請輸入學生人數(5~10)：");
			scanf("%d", &n);
			while (n < 5||n > 10)												//檢測人數
			{
				printf("錯誤訊息，請重新輸入！\n");
				printf("請輸入學生人數(5~10)：");
				scanf("%d", &n);
			}
			system("cls");
			printf("輸入學生成績\n");
			for (i = 0;i < n;i++)												//要求使用者輸入學生資料並檢測是否超出範圍 
			{
				printf("第%d位學生\n學生姓名：", i+1);							//姓名 
				scanf("%s", &stu[i].name);
				printf("學號6位數：");									//學號 
				scanf("%d", &stu[i].id);
				if (stu[i].id > 999999 || stu[i].id < 100000)
					while (stu[i].id > 999999 || stu[i].id < 100000)
					{
						printf("\n輸入錯誤");
						scanf("%6d", &stu[i].id);
					}
				printf("0<=成績<=100 \n");	
				printf("\n數學成績");									//數學成績 
				scanf("%d", &stu[i].math);
				if (stu[i].math > 100 || stu[i].math < 0)
					while (stu[i].math > 100 || stu[i].math < 0)
					{
						printf("\n輸入錯誤");
						scanf("%d", &stu[i].math);
					}
				printf("物理成績");									//物理成績 
				scanf("%d", &stu[i].physics);
				if (stu[i].physics > 100 || stu[i].physics < 0)
					while (stu[i].physics > 100 || stu[i].physics < 0)
					{
						printf("\n輸入錯誤");
						scanf("%d", &stu[i].physics);
					}
				printf("英文成績");									//英文成績 
				scanf("%d", &stu[i].english);
				if (stu[i].english > 100 || stu[i].english < 0)
					while (stu[i].english > 100 || stu[i].english < 0)
					{
						printf("\n輸入錯誤");
						scanf("%d", &stu[i].english);
					}
				stu[i].avg = (float)(stu[i].math + stu[i].physics + stu[i].english) / 3;	//計算平均 
				printf("\n");
			}
			
			printf("回到主選單\n");
			system("pause");
			system("cls");
			goto menu;

		case'B':																//顯示學生成績 
		case'b':
			printf("學生成績\n");
			printf("------------------------------------------------------------\n");
			for ( i = 0 ; i < n ; i++ )
			{
				printf("姓名%s,學號%d,數學%d,物理%d,英文%d,平均%.2f\n", stu[i].name, stu[i].id, stu[i].math, stu[i].physics, stu[i].english, stu[i].avg);
			}
			printf("------------------------------------------------------------\n");
			printf("回到主選單\n");
			system("pause");
			system("cls");
			goto menu;
		
		case'C':																//搜尋學生成績 
		case'c':
			printf("搜尋學生成績\n");
			printf("請輸入要搜尋的姓名：");										//搜尋的姓名
			scanf("%s", &find);
			for ( i = 0 ; i <= n ; i++ )										//搜尋 
			{
				if ( i==n && j!=1 )												//無資料提示 
				{
					printf("無該生資料！");
					break;
				}
				if (!strcmp(find,stu[i].name))								//資料顯示 
				{
					printf("學生");
					printf("---------------------------\n");
					printf("姓名%s,學號%d,數學%d,物理%d,英文%d,平均%.2f\n",stu[i].name,stu[i].id,stu[i].math,stu[i].physics,stu[i].english,stu[i].avg);
					printf("---------------------------\n");
					j = 1;
				}
			} 
			printf("回到主選單\n");
			system("pause");
			system("cls");
			goto menu;
		
		case'D':																//成績排名 
		case'd':
			for( i=0 ; i<n ; i++ )												//比較平均大小並依大至小排列 
			{
				for( j=i+1 ; j<n ; j++ )
				{
					if( stu[i].avg < stu[j].avg )
					{
						k = bs[i];
						bs[i] = bs[j];
						bs[j] = k;
					}
				}
			}
 
			printf("--------------------------------\n");
			for ( i=0 ; i<n ; i++ )												//顯示排列後的學生資料
			{
				printf("姓名%s,學號%d,數學%d,物理%d,英文%d,平均%.2f\n", stu[bs[i]].name, stu[bs[i]].id, stu[bs[i]].math, stu[bs[i]].physics, stu[bs[i]].english, stu[bs[i]].avg);
			}
			printf("--------------------------------\n");
			printf("回到主選單\n");
			system("pause");
			system("cls");
			goto menu;
		
		case'E':																//e. 系統結束 
		case'e':
			printf("確定y/n");											//要求使用者確認是否繼續 
			fflush(stdin);
			scanf("%c", &ch);
			while(ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')				//判斷是否為要求中的字元 
			{
				system("cls");
				printf("錯誤訊息 請重新輸入\n");								//判斷為否要求重新輸入 
				printf("請輸入一個字元");
				scanf("%c", &ch);
			}
			
			if(ch == 'Y' || ch == 'y')											//判斷使用者的選擇 
				return 0;
			else
				goto menu;
			return 0;
			
		default:																//重新輸入
			printf("錯誤\n");
			printf("back\n");
			system("pause");
			system("cls");
			goto menu;
	}
	return 0;
}
  


