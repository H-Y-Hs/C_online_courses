#include <stdio.h>
////�L�X�ڴ��d�T���� 
//int main(void)
//{
//	int a[10][10] = {0};
//	a[1][1] = 1;
//	int i ,j;
//	i = 2; //�Y��i = 1���ܷ|��a[1][1]����Ȼ\�� 
//	while(i <= 9)
//	{
//		j = 1;
//		while (j <= 9)
//		{
//			a[i][j] = a[i-1][j-1] + a[i-1][j];
//			j++;
//		}
//		i++;
//	}
//	
//	i = 0;
//	while(i <= 9)
//	{
//		j = 0;
//		while (j <= 9)
//		{
//			printf("%3d", a[i][j]);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}

////�L�X�@�q�r�� 
//int main(void)
//{
//	char i, j;
//	printf("Please give me start and end: \n");
//	scanf("%c %c", &i, &j);
//	while(i <= j)
//	{
//		printf(" %c:%3d", i, i);
//		i++;
//	}
//}

#include <string.h>
//int main(void)
//{
//	int i = 1, j;
//	char word[30];
//	scanf("%29s", word);
//	while(i <= strlen(word))
//	{
//		printf("%*.*s\n", strlen(word), i, word); //�e����*��ܼe�סA�᭱��*��ܺ��(�L�X�X��) 
//		i++;
//	}
//}

////�Q�i����G�i�� 
//int main(void)
//{
//	int a[32];
//	int i;
//	int x;
//	printf("Give me a Decimal to turn in to Binary:\n");
//	scanf("%d", &x);
//	while(x != 0)
//	{
//		a[i] =  x%2;
//		x = x / 2;
//		i++;
//	}
//	i = i - 1;
//	while(i >= 0)
//	{
//		printf("%d", a[i]);
//		i--;
//	}
//} 

//�ƭȬۥ[ 
//int main(void)
//{
//	int num;
//	int sum;
//	int status;
//	printf("Please enter an integer to be summed (q to quit) ");
//	status = scanf("%d", &num);
//	while(status == 1)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit) ");
//		status = scanf("%d", &num);
//	}
//	printf("The sum is %d ", sum);
//	
//}
