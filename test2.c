#include <stdio.h>
////x1, x2彼此沒關聯 
//double square(double x1) //double x為需要傳進來的參數
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

////換成scanf可變值
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
 
////攝氏華氏轉換 
//int main(void)
//{
//	int fahr, celsius;
//	fahr = -40;
//	celsius = 5* (fahr - 32) / 9;
//	printf(" %d degrees Fahrenheit = %d degrees Celsius", fahr, celsius);
//	return 0;
//}

////C語言的編號是從0開始 
//int main(void)
//{
//	int x[10] = {0};
//	int y[5] = {2, 4, 6, 8, 10};
//	x[0] = 3;
//	printf("%d", y[3]);
//	return 0;
//}

//看字對應的數字編號 
int main(void)
{
	char ch[5] = {'A', 'B', 'C', 'D', 'E'};
	int i;
	scanf("%d", &i);
	printf("%c%c\n", ch[i/20], ch[i%5]); //這裡的%是指取餘 
	return 0;
}
