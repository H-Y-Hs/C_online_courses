#include <stdio.h>
// double abs0(double y)
// {
//     return (y>0) ? y : -y; //條件成立，傳?後的值；條件不成立，傳：後的值
// }
// double sqrt0(double x, double z)
// {
//     printf("%.12f %.12f\n", x, z);
//     if (abs0(z*z - x) < 0.000001) 
//         return z;
//     else
//     {
//         return sqrt0(x, 0.5*(z + x/z));
//     }
// }
// int main(void)
// {
//     double x;
//     printf("%.12f\n", sqrt0(3, 1.5));
//     return 0;
// }


// void swap(int* a, int*b)
// {
//     int tmp;
//     tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

// int main(void)
// {
//     int x, y;
//     scanf("%d%d", &x, &y);
//     printf("x: %d, y: %d\n", x, y);
//     swap(&x, &y);
//     printf("x: %d, y: %d\n", x, y);
//     return 0;
// }


void f(int *b, int size)
{
    int i;
    for (i=0; i<10; i++)
    {
        //*(b+i) = *(b+i) + 1;
        b[i]++;
    }
}
int main(void)
{
    int a[10];
    int i;
    for (i=0; i<10; i++)
    {
        a[i] = i*i;
    }
    f(a,10);
    for (i=0; i<10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
