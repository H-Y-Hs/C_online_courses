#include <stdio.h>
////x1, x2�����S���p 
//double square(double x1) //double x���ݭn�Ƕi�Ӫ��Ѽ�
//{
//	return x1*x1;
//} 
//int main(void)
//{
//	double x2;
//	x2 = 3.2;
//	printf("%f\n", square(x2));
//	return 0;
//} 

////����scanf�i�ܭ�
//float square(float x1) 
//{
//	return x1*x1;
//} 
//int main(void)
//{
//	float x2;
//	printf("Please give me a number: "); 
//	scanf("%f", &x2);
//	printf("%f\n", square(x2));
//	return 0;
//} 
 
////���ؤ��ഫ 
//int main(void)
//{
//	int fahr, celsius;
//	fahr = -40;
//	celsius = 5* (fahr - 32) / 9;
//	printf(" %d degrees Fahrenheit = %d degrees Celsius", fahr, celsius);
//	return 0;
//}

////C�y�����s���O�q0�}�l 
//int main(void)
//{
//	int x[10] = {0};
//	int y[5] = {2, 4, 6, 8, 10};
//	x[0] = 3;
//	printf("%d", y[3]);
//	return 0;
//}

//�ݦr�������Ʀr�s�� 
int main(void)
{
	char ch[5] = {'A', 'B', 'C', 'D', 'E'};
	int i;
	scanf("%d", &i);
	printf("%c%c\n", ch[i/20], ch[i%5]); //�o�̪�%�O�����l 
	return 0;
}
