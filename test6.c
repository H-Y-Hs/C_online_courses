#include <stdio.h>
//int main(void)
//{
//   int num, div;
//   int isPrime = 1;
//
//   printf("Please enter an integer (q to quit): \n");
//
//   scanf("%d", &num);
//   for (div=2; div*div < num ; div++ ) {
//       if (num%div == 0) {
//         printf("%d, ", div); 
//         isPrime = 0;        
//       }
//   }
//   //此時的div為上一個迴圈結束的值 
//   for (; div > 1; div--) {
//       if (num%div == 0) {
//         printf("%d, ", num/div);         
//       }
//   }
//
//   if (isPrime == 1) {
//      printf("%d is prime.\n", num);
//   } else {
//      printf("\b\b are divisors of %d\n", num);
//   }
//   return 0;
//}

//#define N 50 
////找質數 
//int A[N+1];
//int main()
//{
//	int i, j;
//	for (i = 0; i <= N; i++)
//	{
//		A[i] = 1;
//	}
//	for (i = 2; i*i <= N; i++)
//	{
//		if (A[i])
//		{
//			for (j = i*i; j <= N; j = j + i)
//			{
//				A[j] = 0;
//			}
//		}
//	}
//	for (i = 2; i <= N; i++)
//	{
//		if (A[i])
//		{
//			printf("%d, ", i);
//		}
//	}
//	return 0;
//}

////回文判斷 Ex:ubobu
//int main()
//{
//	char str[1000];
//	int i, j;
//	scanf("%s", str);
//	i = 0;
//	j = strlen(str) - 1;
//	while (i < j)
//	{
//		if(str[i] == str[j])
//		{
//			i++;
//			j--;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (i < j)
//	{
//		printf("Not a palindrome.\n");
//	}
//	else 
//	{
//		printf("Palindrome!\n");
//	}
//	return 0;
//}

////抓出中間的一小段回文
//#include <string.h>  
//int main()
//{
//	char str[1000];
//	int i, j, m, n, k;
//	int done;
//	scanf("%s", str);
//	for(n = strlen(str); n > 0; n--)
//	{
//		done =  0;
//		for(m = 0; (unsigned int) m+n<=strlen(str); m++)
//		{
//			i = m;
//			j = m+n-1;
//			while(i < j)
//			{
//				if(str[i]==str[j])
//				{
//					i++;
//					j--;
//				}
//				else
//				{
//					break;
//				}
//			}
//			if(i >= j)
//			{
//				for(k=m; k<m+n; k++)
//				{
//					printf("%c", str[k]);
//				}
//				printf("\n");
//				done = 1;
//			}
//		}	
//		if(done) break; 		
//	}
//	return 0;
//}

////印出設定好長寬的符號 
//void display(char cr, int lines, int width);
//int main()
//{
//	int ch;
//	int rows, cols;
//	printf("Enter a character and two integers:\n");
//	while((ch = getchar()) != '\n')
//	{
//		//scanf("%d%d", &rows, &cols);
//		if(scanf("%d%d", &rows, &cols)!=2) break; //避免輸入非整數 
//		display(ch, rows, cols);
//		printf("Enter another character and two integer;\n");
//		printf("Enter a newline to quit.\n");
//		while(getchar()!='\n');
//	}
//	printf("Bye.\n");
//	return 0;
//}
//void display(char cr, int lines, int width)
//{
//	int row, col;
//	for(row=1; row<=lines; row++)
//	{
//		for(col=1; col<=width; col++)
//		{
//			putchar(cr);
//		}
//		putchar('\n');
//	}
//}


////印出二進位，並做flipping 
//int main()
//{
//	int i, n, ori_n, c;
//	scanf("%d", &n);
//	ori_n = n;
//	i=1;
//	while(i<=n) i=i*2;
//	i=i/2;
//	while(i>0)
//	{
//		printf("%d", n/i);
//		n=n%i;
//		i=i/2;
//	}
//	printf("  ");
//	n = ori_n;
//	i=1;
//	c=n % 2;
//	while(i<=n) i=i*2;
//	i=i/2;
//	while(i>0)
//	{
//		printf("%d", (c + n/i)%2); 
//		c = n/i;
//		n=n%i;
//		i=i/2;
//	}
//	return 0;
//}
/*
c:
1.11
2.11/8
3.(11%8)/4
4.[(11%8)%4]/2
*/ 





