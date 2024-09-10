// #include <stdio.h>
// int main(void)
// {
//     int H, W, T, row, col;
//     int dr, dc;
//     scanf("%d%d", &H, &W);
//     scanf("%d%d", &row, &col);
//     scanf("%d", &T);
//     dr = -1; dc = 1;
//     while (T>1)
//     {
//         row = row + dr;
//         col = col + dc;
//         if ((row == 1 && col == 1) ||
//             (row == 1 && col == W) ||
//             (row == H && col == 1) ||
//             (row == H && col == W))
//             {
//                 break;
//             }
//         else if (row == 1 || row == H)
//         {
//             dr = -dr;
//             T--;
//         }
//         else if (col == 1 || col == W)
//         {
//             dc = -dc;
//             T--;
//         }        
//     }
//     printf("(%d,%d)", row, col);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int NPClist[100][10]
// void findNPC(int num);
// int main()
// {
//     int n, i, j;
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++)
//     {
//         for(j = 0;  ;j++)
//         {
//             scanf("%d", &NPClist[i][j]);
//             if(NPClist[i][j] == 0)
//             {
//                 break;
//             }
//         }
//     }
//     findNPC(1);
//     return 0;
// }
// void findNPC(int num)
// {
//     int j = 0;
//     printf("%d\n", num);
//     while (NPClist[num][j]!=0)
//     {
//         findNPC(NPClist[num][j]);
//         j++;
//     }
// }


#include <stdio.h>
int HIT[10000];
int main(void)
{
    int N;
    int i, j;
    int num;
    char tmp;
    char str[5];
    scanf("%d", &N);
    while (N>0)
    {
        scanf("%s", str);
        for (i = 4; i > 0; i--)
        {
            for (j = 0; j < i; j++)
            {
                if (str[j-1] > str[j])
                {
                    tmp = str[j];
                    str[j] = str[j-1];
                    str[j-1] = tmp;
                }
            }
        }
        num = 0;
        for (i = 0; i < 4; i++)
        {
            num = num*10 + str[i] - '0';
        }
        HIT[num]++;
        N--;
    }
    for (i = 0; i<10000; i++)
    {
        if (HIT[i]>1)
        {
            printf("%04d\n", i);
        }
    }
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>
// int main (void)
// {
//     char ch;
// while (ch!=17)
// {
//     ch=getch();
//     printf("ASCII of ch=%d\n",ch);
// }
// printf("jump out!!");
// system("pause");
// return 0;
// }