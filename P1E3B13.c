#include<stdio.h>

#include<stdlib.h>
#include <string.h>
#include <ctype.h>



#include <conio.h>
int b,i,j,e;
char input;
int main()
{
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	printf("����������������������������������������������������������������������������������\n");
	//�ӤH�ƭ��� 

	system("pause");                 //��ENTER�~��@�~ 
	fflush(stdin);                   //�� input buffer �b��
	system("CLS");                   //�M������ 
	int password;                    //�N PASSWORD�]���ܼ� 
	printf("�п�J4��ƱK�X\n");
	scanf("%d",&password);           //�n�D��J10�i��Ʀr 
	if (password==2024){             //�K�X�]��2024
		system("CLS");				 //�M������ 
		printf("�w��\n");
		system("pause");			 //��ENTER�~��@�~ 
		system("CLS");               //�M������ 
		printf(" _________________________\n");
		printf(" | a. �e�X�����T����     |\n");	
		printf(" | b. ��ܭ��k��         |\n");
		printf(" | c. ����               |\n");
		printf(" |_______________________|\n");
		system("pause");            //��ENTER�~��@�~ 
		char c;                     //�Nc�]���r���ܼ�   
		c=getchar();  
	loop1:
	fflush(stdin);
			printf("��J���Ӧr��\n");
			scanf("%c",&b);
			switch(b){   
			case 65:
			case 97:	
		
			system("cls");
			printf("�п�J�@�ӭ^��r"); 

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
    				printf("��J���r�����ba-n�����A�Э��s��J\n");
    				goto loop2;
				}
				
				break;
        		}
				}
				}