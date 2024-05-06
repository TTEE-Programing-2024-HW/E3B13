#include<stdio.h>

#include<stdlib.h>
#include <string.h>
#include <ctype.h>



#include <conio.h>
int b,i,j,e,n,p,o,d;
char input;
int main()
{
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	printf("╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬═╬\n");
	//個人化頁面 

	system("pause");                
	fflush(stdin);                   
	system("CLS");               
	int password;                  
	printf("請輸入4位數密碼\n");
	scanf("%d",&password);          
	if (password==2024){         
		system("CLS");				 
		printf("歡迎\n");
		system("pause");			 
		system("CLS");               
		printf(" _________________________\n");
		printf(" | a. 畫出直角三角形     |\n");	
		printf(" | b. 顯示乘法表         |\n");
		printf(" | c. 結束               |\n");
		printf(" |_______________________|\n");
		system("pause");           
		char c;                      
		c=getchar();  
	loop1:
	fflush(stdin);
			printf("輸入壹個字元\n");
			scanf("%c",&b);
			switch(b){   
			case 65:
			case 97:	
		
			system("cls");
			printf("請輸入一個英文字"); 

	loop2:
	fflush(stdin);
	scanf("%c",&input);
    			if((input>=97)&&(input<=110))
    			{
					for(i=0;i<=input-97;i++){
       	 				for(j=1;j<=input-97-i;j++){
           				printf(" ");
        				}
        				for(e=0;e<=i;e++){
           					printf("%c",input-e);
        				}
        				printf("\n");
        			
    				
    			}
					getch();
    				system("CLS");
    				goto loop1;
				}else{
    				printf("輸入的字元不在a-n之間，請重新輸入\n");
    				goto loop2;
				}
				
				break;
				case 66:
    		case 98:
    loop3:
    fflush(stdin);
    scanf("%d",&n);
    			if((n>=1)&&(n<=9))
				{
					for(p=1;p<n;p++)
					{
						for(o=1;o<n;o++)
						{
							printf("p*o=%d ",p*o);
						}
						printf("\n");
					}
					getch();
					system("CLS");
				}else{
					printf("輸入的字元不在1-9之間，請重新輸入\n");
					goto loop3;
				}
				break;
				case 67:
			case 99:
				printf("Continue? (y/n)");
	loop4:
	            scanf("%c",&d);
				if((d==89)||(d==121))
				{
					goto loop1;
				}else{
					if((d==78)||(d==110))
					{
					system("pause");
					return 0;
					}else{
						printf("輸入的不是y或n，請重新輸入n");
						goto loop4;
					}
				}
    			break;
		}
	}else{
		printf("密碼錯誤\n");
	}
        		}
//好累
