// #include <stdio.h>
// unsigned int mylen(char*s);
// int main (void)
// {
//     char str[100];
//     scanf("%s", str);
//     printf("%u, %s\n", mylen(str), str);
//     return 0;
// }
// unsigned int mylen(char*s)
// {
//     unsigned int i;
//     i = 0;
//     while (s[i] != '\0') i++;
//     return i;
// }

// #include <stdio.h>
// #define MAX_SIZE 50
// #define LOWER_LIMIT 0
// #define UPPER_LIMIT 1000000

// int main(void)
// {
//     int data[MAX_SIZE];
//     int i, size;
//     int maxval = LOWER_LIMIT, minval = UPPER_LIMIT;

//     freopen("test.txt", "r", stdin);

//     for (size = 0; size < MAX_SIZE; size++) 
//     {
//         if (scanf("%d", &data[size]) != 1)
//             break;
//     }

//     for (i = 0; i < size; i++)
//     {
//         if (data[i] > maxval)
//         {
//             maxval = data[i];
//         }
//         else if (data[i] < minval)
//         {
//             minval = data[i];
//         }
//     }
//     printf("%d %d\n", minval, maxval);
//     return 0;
// }




