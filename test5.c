#include <stdio.h>
////��for�j��ͦ��ڴ��d�T���� 
//int main()
//{
//	int a[6][6] = {0};
//	int i, j;
//	a[1][1] = 1;
//	for(i = 2; i < 6; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			a[i][j] = a[i-1][j-1] +a[i-1][j];
//		}
//	}
//	for(i = 0; i < 6; i++)
//	{
//		for (j = 0; j <= 6; j++)
//		{
//			printf("%3d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////�m��file in, file out
//int main()
//{
//	int a[50];
//	int n, i, sum;
//	freopen("testcase.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	scanf("%d", &n);
//	for (i=0, sum=0; i<n; i++) //Ū����Ʀs�Jarray a[i] 
//	{
//		scanf("%d", &a[i]);
//		sum = sum + a[i];
//	}
//	printf("total = %d\n", sum);
//	return 0;
//} 

////���H�I�L�Abreak�Ϊk 
//int main()
//{
//	int x, y, z, a, b, c;
//	int i;
//	scanf("%d%d%d%d%d%d", &x, &y, &z, &a, &b, &c);
//	for(i=0; i<=x*y*z; i++)
//	{
//		if(i%x==a && i%y==b && i%z==c)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//}

////�P�_True or False 
//int check(int v)
//{
//	if (v)
//	{
//		printf("True\n");
//	}
//	else
//	{
//		printf("False\n");
//	}
//	return v;
//}
//int main(void)
//{
//   int x = 5; 
//   int y = 3;
//   
//   check(x > 2 && y == 3); //True
//   check( !(x < 2 || y == 3)); //False
//   check(x != 0 && y); //True
//   check(x == 0 || !y); //False
//   check(x != y && (20/x) < y); //False
//   check( !(y>5 || y<2) && !(x%5)); //True
//   check(!x && x); //False       
//   return 0;
//}

#include <ctype.h> 
////�L�X��J���r���[�@���r�� 
//int main()
//{
//	char ch;
//	
//	while((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch))
//		{	
//			putchar(ch+1);
//		}
//		else
//		{
//			putchar(ch);	
//		}
//	}
//	putchar(ch);
//}

////�L�X��J���r���[�@���r�� 
//int main()
//{
//	char ch;
//	
//	while((ch = getchar()) != '\n')
//	{
//		if (islower(ch))
//		{	
//			ch = toupper(ch);
//		}
//		else if (isupper(ch))
//		{
//			ch = tolower(ch);	
//		}
//		putchar(ch);
//	}	
//	putchar(ch);
//}

/*
��J�@�ӥ���ơA�{�������C�X���F 1 �M�ӥ���ƥ����H�~�������]��
�]�ƥ����q�p��j�ƦC
�p�G�L�k�]�Ƥ��ѡA�h�{��������ܳo�ӥ���ƬO���
*/
int main(void)
{
	int num, div;
	int isPrime = 1;
	printf("Please enter an integer (q to quit): \n");
	while(scanf("%d", &num))
	{
   		for (div=2; div*div <= num ; div++ ) 
		{
        	if (num%div == 0)
			{
				if (div == num/div)
				{
					printf("%d, ", div);
				}
				else
				{
					printf("%d, ", div);
					printf("%d, ", num/div);   
				}				
				isPrime = 0;
    		}
        }
		if (isPrime == 1)
		{
			printf("%d is prime.\n", num);
		} 
		else 
		{
			printf("\b\b are divisors of %d\n", num); // \bm�Ψӭ˰h�л\�r�� 
		}
		return 0;
	}
}
