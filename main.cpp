#include <stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	float a;
	int b;
	
	printf("�п�J�����魫,�åγr�I�j�}�ƭ�(�����ХH���ج����,�魫�ХH���笰���):");
	scanf("%f,%d",&a,&b);
	printf("�z��BMI��O=%f\n",b/(a*a));
	system("pause");
	
	return 0;
}
