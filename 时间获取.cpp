////////////////////////////////////////////////// 
//雨林工作室单号生成器 
//编写人：德不孤必有邻 
//原理：获取当前时间，并加以少许数据以生成单号。
//时间：2022-05-21 
//注意：只可支持99项商品 
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
		SlowDisplay("Loading……");
		system("cls");
	}
	system("color 1f");
	SlowDisplay("当前版本号 V:1.0.0");
	printf("\n");
	SlowDisplay("出品:雨林工作室（Rainforest studio）");
	printf("\n");
	int a,b,c,d,e=0;
	SlowDisplay("商品类型(无需输入零)：");
	scanf("%d",&a);
	SlowDisplay("总货款：");
	scanf("%d",&b);
	if(b<10)
	{
		e=1;
	}
	SlowDisplay("总定制支出：");
	scanf("%d",&c);
	d=b-c;
	system("cls");
	for(int i=0;i<3;i++)
	{
		printf("当前版本号 V:1.0.0");
		printf("\n");
		printf("出品:雨林工作室（Rainforest studio）");
		printf("\n");
		SlowDisplay("Loading……");
		system("cls");
	}
	printf("当前版本号 V:1.0.0");
	printf("\n");
	printf("出品:雨林工作室（Rainforest studio）");
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
    			/* 获取时间 */
    			time(&t);
    			tmp = localtime(&t);
    			/* 转化时间 */
    			// if (strftime(buf2, 64, "当前时间: %Y-%m-%d %H:%M:%S", tmp) == 0) {
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
    			/* 获取时间 */
    			time(&t);
    			tmp = localtime(&t);
    			/* 转化时间 */
    			// if (strftime(buf2, 64, "当前时间: %Y-%m-%d %H:%M:%S", tmp) == 0) {
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
