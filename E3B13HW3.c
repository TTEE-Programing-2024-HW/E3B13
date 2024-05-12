#include <stdio.h>
#include <stdlib.h>
#include<time.h>
char sit[9][9]={{'-','-','-','-','-','-','-','-','-'},
				{'-','-','-','-','-','-','-','-','-'},
				{'-','-','-','-','-','-','-','-','-'},
				{'-','-','-','-','-','-','-','-','-'},
				{'-','-','-','-','-','-','-','-','-'},
				{'-','-','-','-','-','-','-','-','-'},
				{'-','-','-','-','-','-','-','-','-'},
				{'-','-','-','-','-','-','-','-','-'},
				{'-','-','-','-','-','-','-','-','-'}};
int main(void)
{
	printf("觀自在菩薩。行深般若波羅蜜多時。\n");
	printf("照見五蘊皆空。度一切苦厄。\n");
	printf("舍利子。色不異空。\n");
	printf("空不異色。色即是空。\n");
	printf("空即是色。受想行識。\n");
	printf("亦復如是。舍利子。\n");
	printf("是諸法空相。不生不滅。\n");
	printf("不垢不淨。不增不減。\n");
	printf("是故空中無色。無受想行識。\n");
	printf("無眼耳鼻舌身意。無色聲香味觸法。\n");
	printf("無眼界。乃至無意識界。\n");
	printf("無無明。亦無無明盡。\n");
	printf("乃至無老死。亦無老死盡。\n");
	printf("無苦集滅道。無智亦無得。\n");	
	printf("以無所得故。菩提薩埵。\n");
	printf("依般若波羅蜜多故。心無罣礙。無罣礙故。無有恐怖。遠離顛倒夢想。究竟涅槃。\n");
	printf("三世諸佛。依般若波羅蜜多故。得阿耨多羅三藐三菩提。\n");
	printf("故知般若波羅蜜多。是大神咒。是大明咒。\n");
	printf("是無上咒。是無等等咒。能除一切苦。\n");
	printf("真實不虛。故說般若波羅蜜多咒。即說咒曰。\n");
	printf("揭諦揭諦　波羅揭諦　波羅僧揭諦　菩提薩婆訶\n");	
	int a,b,c,d,i,j,l,k,q,w,g,f;
	char p,y,n;
while(1)//重複迴圈 
{
printf("輸入四自密碼");
scanf("%d",&a);
if (a==2024)
{
	break;
} 
 else
{
 	printf("錯誤\n");
 	c++;	
}
if(c==3)
return 0;
}
system("PAUSE"); //暫停程式執行
fflush(stdin);									//清除
system("CLS");									//清除畫面
	printf("a.顯示現有座位\n");						
	printf("b.電腦排位\n");
	printf("c.自主選位\n");
	printf("d.系統結束\n");
	scanf("%c",&b);

	switch(b){				
	case 97:
for(i=0;i<10;i++)
{
	srand((unsigned)time(NULL));		//隨機變數
	c=rand()%9;
	srand((unsigned)time(NULL));
	d=rand()%9+i;
	sit[c][d]=42;	
					
}
printf("\\123456789\n");				//座位表
	for(j=0;j<9;j++)
		{
			i--;
			printf("%d",10-i);
			for(l=0;l<9;l++)
			{
			printf("%c",sit[j][l]);
			}
			printf("\n");
		}
	system("pause");		
	printf("e04");
	break;			
	case 98:
		printf("請輸入需要位置數 最多四位");
		scanf("%d",&k);
	for(g=0;g<k;g++)
{
	srand((unsigned)time(NULL));		//隨機位置
	c=rand()%9;
	srand((unsigned)time(NULL));
	d=rand()%9+g;
	sit[c][d]=42;	
					
}
printf("\\123456789\n");				//座位表
	for(j=0;j<9;j++)
		{
			i--;
			printf("%d",-i);
			for(l=0;l<9;l++)
			{
			printf("%c",sit[j][l]);
			}
			printf("\n");
		}	
system("pause");
printf("是否滿意 1是2否\n");
case 49:
{
	break;
}	
case 50:
	fflush(stdin);
	system("pause");
	system("cls");
printf("請輸入需要位置數 最多四位");
scanf("%d",&k);
for(g=0;g<k;g++)
{
	srand((unsigned)time(NULL));		//隨機位置
	c=rand()%9;
	srand((unsigned)time(NULL));
	d=rand()%9+g;
	sit[c][d]=42;	
	sit[c][d]='@'; 				
}

}
					
				
	}


	




