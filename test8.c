#include <stdio.h>
// int f(int x);
// int main(void)
// {
//     printf("=%d\n", f(10));
//     return 0;
// }
// int f(int x)
// {
//     int ans;
//     if (x==1)
//     {
//         printf("%d", x);
//         return x;
//     }
//     if (x%2!=0)
//     {
//         printf("(");
//     }    
//     ans = f(x-1);
//     if (x%2==0)
//     {
//         printf("+");
//         ans = ans + x;
//     }
//     if(x%2!=0)
//     {
//         printf(")*");
//         ans = ans * x;
//     }
//     printf("%d", x);
//     return ans;
// }

double power(double n, int p)
{
    double ans;
    if (p==0) return 1;
    else ans = power(n, p/2);
    if (p%2==0) return ans*ans;
    else return n*ans*ans;
}
int main()
{
    double n;
    int p;
    scanf("%lf%d", &n, &p);
    printf("%f\n", power(n,p));
    return 0;
}