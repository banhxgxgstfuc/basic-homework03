#include <stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	float a;
	int b;
	
	printf("請輸入身高體重,並用逗點隔開數值(身高請以公尺為單位,體重請以公斤為單位):");
	scanf("%f,%d",&a,&b);
	printf("您的BMI質是=%f\n",b/(a*a));
	system("pause");
	
	return 0;
}
