#include <stdio.h>
////用for迴圈生成巴斯卡三角形 
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

////練習file in, file out
//int main()
//{
//	int a[50];
//	int n, i, sum;
//	freopen("testcase.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	scanf("%d", &n);
//	for (i=0, sum=0; i<n; i++) //讀取資料存入array a[i] 
//	{
//		scanf("%d", &a[i]);
//		sum = sum + a[i];
//	}
//	printf("total = %d\n", sum);
//	return 0;
//} 

////韓信點兵，break用法 
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

////判斷True or False 
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
////印出輸入之字母加一的字母 
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

////印出輸入之字母加一的字母 
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
輸入一個正整數，程式必須列出除了 1 和該正整數本身以外的全部因數
因數必須從小到大排列
如果無法因數分解，則程式必須顯示這個正整數是質數
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
			printf("\b\b are divisors of %d\n", num); // \bm用來倒退覆蓋逗號 
		}
		return 0;
	}
}
