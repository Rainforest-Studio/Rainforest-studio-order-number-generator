////////////////////////////////////////////////// 
//���ֹ����ҵ��������� 
//��д�ˣ��²��±����� 
//ԭ����ȡ��ǰʱ�䣬�������������������ɵ��š�
//ʱ�䣺2022-05-21 
//ע�⣺ֻ��֧��99����Ʒ 
//////////////////////////////////////////////////
#include<bits/stdc++.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void SlowDisplay(char *);
void SlowDisplay(char *p)
     {
         while(1)
         {
             if(*p!=0)
                printf("%c",*p++);
             else 
                break;
             Sleep(10);
         }
     }
int main(int argc, char *argv[])
{
	for(int i=0;i<3;i++)
	{
		SlowDisplay("Loading����");
		system("cls");
	}
	system("color 1f");
	SlowDisplay("��ǰ�汾�� V:1.0.0");
	printf("\n");
	SlowDisplay("��Ʒ:���ֹ����ң�Rainforest studio��");
	printf("\n");
	int a,b,c,d,e=0;
	SlowDisplay("��Ʒ����(����������)��");
	scanf("%d",&a);
	SlowDisplay("�ܻ��");
	scanf("%d",&b);
	if(b<10)
	{
		e=1;
	}
	SlowDisplay("�ܶ���֧����");
	scanf("%d",&c);
	d=b-c;
	system("cls");
	for(int i=0;i<3;i++)
	{
		printf("��ǰ�汾�� V:1.0.0");
		printf("\n");
		printf("��Ʒ:���ֹ����ң�Rainforest studio��");
		printf("\n");
		SlowDisplay("Loading����");
		system("cls");
	}
	printf("��ǰ�汾�� V:1.0.0");
	printf("\n");
	printf("��Ʒ:���ֹ����ң�Rainforest studio��");
	printf("\n");
	for(int i=1;i<=99;i++)
	{
		if(a==i)
		{
			if(e==0)
			{
				printf("0%d%d%d",a,b,d);
				time_t t;
    			struct tm *tmp;
    			char buf2[64];
    			/* ��ȡʱ�� */
    			time(&t);
    			tmp = localtime(&t);
    			/* ת��ʱ�� */
    			// if (strftime(buf2, 64, "��ǰʱ��: %Y-%m-%d %H:%M:%S", tmp) == 0) {
    			//     printf("buffer length 64 is too small\n");
    			// } 
    			// else {
    			//     printf("%s\n", buf2);
    			// }
    			strftime(buf2, 64, "%Y%m%d", tmp);
    			printf("%s", buf2);
    			exit(0);
			}
			else
			{
				printf("0%d0%d0%d",a,b,d);
				time_t t;
    			struct tm *tmp;
    			char buf2[64];
    			/* ��ȡʱ�� */
    			time(&t);
    			tmp = localtime(&t);
    			/* ת��ʱ�� */
    			// if (strftime(buf2, 64, "��ǰʱ��: %Y-%m-%d %H:%M:%S", tmp) == 0) {
    			//     printf("buffer length 64 is too small\n");
    			// } 
    			// else {
    			//     printf("%s\n", buf2);
    			// }
    			strftime(buf2, 64, "%Y%m%d", tmp);
    			printf("%s", buf2);
    			exit(0);
			}
		}
		else
		{
			break;
		}
	}
    return 0;
}
