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
	
		switch(ch)																
	{
		case'A':																//��J���Z 
		case'a':
			fflush(stdin);
			printf("��J�ǥͦ��Z\n");
			printf("�п�J�ǥͤH��(5~10)�G");
			scanf("%d", &n);
			while (n < 5||n > 10)												//�˴��H��
			{
				printf("���~�T���A�Э��s��J�I\n");
				printf("�п�J�ǥͤH��(5~10)�G");
				scanf("%d", &n);
			}
			system("cls");
			printf("��J�ǥͦ��Z\n");
			for (i = 0;i < n;i++)												//�n�D�ϥΪ̿�J�ǥ͸�ƨ��˴��O�_�W�X�d�� 
			{
				printf("��%d��ǥ�\n�ǥͩm�W�G", i+1);							//�m�W 
				scanf("%s", &stu[i].name);
				printf("�Ǹ�6��ơG");									//�Ǹ� 
				scanf("%d", &stu[i].id);
				if (stu[i].id > 999999 || stu[i].id < 100000)
					while (stu[i].id > 999999 || stu[i].id < 100000)
					{
						printf("\n��J���~");
						scanf("%6d", &stu[i].id);
					}
				printf("0<=���Z<=100 \n");	
				printf("\n�ƾǦ��Z");									//�ƾǦ��Z 
				scanf("%d", &stu[i].math);
				if (stu[i].math > 100 || stu[i].math < 0)
					while (stu[i].math > 100 || stu[i].math < 0)
					{
						printf("\n��J���~");
						scanf("%d", &stu[i].math);
					}
				printf("���z���Z");									//���z���Z 
				scanf("%d", &stu[i].physics);
				if (stu[i].physics > 100 || stu[i].physics < 0)
					while (stu[i].physics > 100 || stu[i].physics < 0)
					{
						printf("\n��J���~");
						scanf("%d", &stu[i].physics);
					}
				printf("�^�妨�Z");									//�^�妨�Z 
				scanf("%d", &stu[i].english);
				if (stu[i].english > 100 || stu[i].english < 0)
					while (stu[i].english > 100 || stu[i].english < 0)
					{
						printf("\n��J���~");
						scanf("%d", &stu[i].english);
					}
				stu[i].avg = (float)(stu[i].math + stu[i].physics + stu[i].english) / 3;	//�p�⥭�� 
				printf("\n");
			}
			
			printf("�^��D���\n");
			system("pause");
			system("cls");
			goto menu;

		case'B':																//��ܾǥͦ��Z 
		case'b':
			printf("�ǥͦ��Z\n");
			printf("------------------------------------------------------------\n");
			for ( i = 0 ; i < n ; i++ )
			{
				printf("�m�W%s,�Ǹ�%d,�ƾ�%d,���z%d,�^��%d,����%.2f\n", stu[i].name, stu[i].id, stu[i].math, stu[i].physics, stu[i].english, stu[i].avg);
			}
			printf("------------------------------------------------------------\n");
			printf("�^��D���\n");
			system("pause");
			system("cls");
			goto menu;