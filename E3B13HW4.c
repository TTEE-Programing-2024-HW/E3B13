#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct student																		//���c 
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
	int password=0,x,n=0, i, j, k, bs[10]={0,1,2,3,4,5,6,7,8,9};	//�ܼ�
	char ch,find[10];
	struct student stu[10];
	{
	printf("00000000000000000000000000000\n");																			//��ܭӤH�S�⪩��
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
	
	
	printf("��J4��ƱK�X");												//�ѤJ�K�X 
	scanf("%d",&password);
	x=0;
	while(password!=2022)														//�P�O�K�X
	{
		x+=1;
		if(x >= 3)																//�p�G���~���ƶW�L����h�����{�� 
		{
			system("pause");
			return 0;
		}
		printf("\n�K�X��J���~%d��\n", x);				//���ܿ��~���� 
		printf("�A�q��");											//�n�D�ϥΪ̿�J�K�X�ð��� 
		scanf("%d", &password);
	}	
	
menu:
system("cls");																//��ܥD��� 
printf("----[�� �Z �t ��]---\n");
printf("| a. ��J�ǥͦ��Z  |\n");
printf("| b. ��ܾǥͦ��Z  |\n");
printf("| c. �j�M�ǥͦ��Z  |\n");
printf("| d. ���Z�ƦW      |\n");
printf("| e. �t�ε���      |\n");
printf("--------------------\n");
	printf("�п�J�@�Ӧr�� ");												
	fflush(stdin);
	scanf("%c", &ch);
	system("cls");
	



