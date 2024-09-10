// #include <stdio.h>
// int gcd(int a, int b);
// int a, b;
// int main()
// {
//     printf("Please enter two number");
//     scanf("%d%d", &a, &b);
//     printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
// }
// int gcd(int a, int b)
// {
//     if (a%b == 0)
//         return b;
//     else 
//         return gcd(b, a%b);
// }

// void hanoi (int n, int from, int to, int buffer) //n是代表最上面的盤子
// {
//     if (n==0)
//         return;
//     else
//     {
//         hanoi(n-1, from, buffer, to);      
//         printf("%d%d%d%d\n", n, from, to, buffer);  
//         //printf("%d,Move the top disk from Tower %d to Tower %d\n",n, from, to);
//         hanoi(n-1, buffer, to, from);
//     } 
// }
// int main()
// {
//     int n;
//     printf("Please enter how much disks:");
//     scanf("%d", &n);
//     hanoi (n, 1, 3, 2);
//     return 0;
// }


#include <stdio.h>
#include <ctype.h>

int cal(void)
{
  int ans, op1, op2;
  char c = getchar();
  if (c == ' ') {
		return cal();
	} //去除空格
  else if (isdigit(c)) {
    ungetc(c, stdin);
    scanf("%d", &ans);
    return ans;
  } //讀取多位數的整數
  else if(c == '+') {
  	op1 = cal(); 
    op2 = cal();
		return op1 + op2;
	} 
  else if(c == '-') {
  	op1 = cal();
    op2 = cal();  
		return op1 - op2;
	} else if(c == '*') {
  	op1 = cal();
    op2 = cal();
		return op1 * op2;
	}
}

int main(void)
{
  printf("%d\n", cal());
  return 0;
}