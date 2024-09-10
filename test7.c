#include <stdio.h>
////Q1
//void triangle (char ch, int m)
//{
//	int i, j;
//	for (i=1; i<m; i++)
//	{
//		for (j=1; j<=i; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	for (i=m; i>1; i--)
//	{
//		for (j=1; j<=i; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	char ch;
//	int m, n, i;
//	scanf("%c%d%d", &ch, &m, &n);
//	for(i=0; i<n; i++)
//	{
//		triangle(ch, m);
//	}
//	if (m>0 && n>0)
//	{
//		printf("%c", ch);
//	}
//	return 0;
//}


////Q2
//int A[20][20];
//int main()
//{
//	int i, j, N;
//	scanf("%d", &N);
//	for (i=0; i<N; i++)
//	{
//		for(j=0; j<N; j++)
//		{
//			scanf("%d", &A[i][j]);
//		}
//	}
//	for(i=0; i<N; i++) //i為行加列 
//	{
//		for(j=0; j<=i; j++) //j為第幾列  
//		{
//			printf("%d ", A[i-j][j]);
//		}
//		printf("\n");
//	} 
//	for(i=N-2; i>=0; i--) //i為行加列 
//	{
//		for(j=i; j>=0; j--) //j為第幾列  
//		{
//			printf("%d ", A[N-1-(i-j)][N-1-j]);
//		}
//		printf("\n");
//	} 
//	return 0;
//}
////3
////1 2 3
////4 5 6
////7 8 9


////Q3
//#include <string.h>
//int main()
//{
//	char A[5];
//	char B[10];
//	int j, N;
//	scanf("%s", A);
//	scanf("%d", &N);
//	int maxcount = 0;
//	for(j=0; j<N; j++)
//	{
//		scanf("%s", B);
//		int i, k;
//		int count = 0;
//		for (i=0; i<=strlen(B)-strlen(A); i++)
//		{
//			int eq=1;
//			for(k=0; k<strlen(A); k++)
//			{
//				if (A[k] != B[i+k])
//				{
//					eq = 0;
//					break;
//				}
//			}
//			if (eq) count++;
//		}
//		printf("repeat %d times\n", count);
//		if (count >maxcount) maxcount = count;
//	}
//	printf("Max repeat times :%d", maxcount);
//	return 0;
//}
////12
////4
////12112212
////12121212
////111222
////12112


//Q4
int main()
{
	int a, b, N, i;
	char move;
	int num;
	scanf("%d%d", &a, &b);
	scanf("%d", &N);
	for (i=0; i<N; i++)
	{
		scanf("%c%d", &move, &num);
		if(move== 'A')
		{
			a = a*1.08 - num;
			b = b*1.08 + num;
		}
		else
		{
			a = a*1.08 + num;
			b = b*1.08 - num;
		}
	}
	printf("%d %d", a, b);
	
}
