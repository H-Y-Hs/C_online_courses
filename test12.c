#include <stdio.h>
// 3
// 1 3
// 2 3
// 4 5
// 3
// 1 2.5
// 2 3.5
// 4 1.5
// 5
// 1 2 3 4 5
int main(void)
{
    double data[101];
    double* p[101];
    int i, n, a, b;
    double x;
    for (i=1; i<=100; i++)
    {
        p[i] = &data[i];
    }
    scanf("%d", &n);
    for (i = 0; i<n; i++)
    {
        scanf("%d%d", &a, &b);
        p[a] = p[b];
    }
    scanf("%d", &n);
    for (i = 0; i<n; i++)
    {
        scanf("%d%lf", &a, &x);
        *p[a] = x;
    }
    scanf("%d", &n);
    for (i = 0; i<n; i++)
    {
        scanf("%d", &a);
        printf("%.2f\n", *p[a]);
    }
}