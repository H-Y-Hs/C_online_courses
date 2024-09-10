#include <stdio.h>
// //求最大公因數
// int gcd(int a, int b);
// int main(void)
// {
// 	int x, y;
// 	scanf("%d%d", &x, &y);
// 	printf("gcd(%d, %d) = %d\n", x, y, gcd(x, y));
//      return 0;
// }
// int gcd(int a, int b)
// {
// 	if (b==0)
// 		return a;
// 	else
//     {
//         printf("%d %d\n", a, b);
//         return gcd(b, a%b);
//     }		
// }


//Tower of Hanoi
void hanoi(char from, char to, char buffer, int n_disks);

int main(void)
{
	int n;
	printf("Number of disks: ");
	scanf("%d", &n);
	hanoi('1', '3', '2', n);

	return 0;
}

/* move n disks from a to b using c as a buffer */
void hanoi(char a, char b, char c, int n)
{
	if (n == 0) {		
		return;
	}
	else
	{
		hanoi(a, c, b, n-1); /* move the top n-1 disks from a to c */
	}	
	printf("Move the top disk from Tower %c to Tower %c\n", a, b); /* move the last disk from a to b */
	hanoi(c, b, a, n-1); /* move the top n-1 disks from c to b */
	return;
}

// //法2
// void example_1(int n, char A, char B, char C) {
// 	if(n==1) {
// 		printf("from %c to %c\n", A, B);
// 	} else {
// 		example_1(n-1, A, C, B);
// 		printf("from %c to %c\n", A, B);
// 		example_1(n-1, C, B, A);
// 	}
// }
// int main() {
// 	int n;
// 	printf("n:");
// 	scanf("%d", &n);
// 	example_1(n, '1', '3', '2');
// 	return 0;
// }

//三座城堡問題： 在 3x3 的棋盤上擺三個城堡。 城堡只能走水平或垂直方向，可以吃掉在同一條水平或垂直線上的其他棋子。所以每個 row 只能擺一個城堡。
// int board[5][5]; //刻意留邊框，可從1開始
// int main(void)
// {
// 	place(1);
// 	return 0;
// }
// int valid(int r, int c)
// {
// 	int i;
// 	for (i=1; i<r; i++)
// 	{
// 		if (board[i][c]) return 0;
// 	}
// 	return 1;
// }
// void place(int row)
// {
// 	int i;
// 	if (row>3) {
// 		show_board();
// 	} else {
// 		for (i=1; i<=3; i++) {
// 			if (valid(row,i))
// 			{			
// 			board[row][i] = 1;
// 			place(row+1);
// 			board[row][i] = 0; //恢復原來狀態
// 			}
// 		}
// 	}
// }
// void show_board(void)
// {
// 	int i, j;
// 	for (i=1; i<=3; i++) {
// 		for (j=1; j<=3; j++) {
// 			printf(" %d", board[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	printf("\n");
// }


// //上面第一種擺法可以用 1, 3, 0, 2 表示， 代表 row 0 的皇后放在 column 1 的位置，row 1 皇后放在 column 3，row 2 皇后放在 column 0，row 3 皇后放在 column 2。
// //同理，第二種擺法可以用 2, 0, 3, 1 表示。
// /* q[i] 記錄的是在第 i 列 (row) 出現的皇后，要擺在第幾行 (column) */
// /* 譬如，q[] 的內容如果是 {2, 0, 3, 1}，表示四個皇后分別放在棋盤的 (0,2), (1,0), (2,3), (3,1) 四個位置 */
// #define NQ 4
// int q[NQ] = {0};
// void place(int row);
// int valid(int row, int col);
// void display(void);

// int main(void)
// {
// 	place(0);
// 	return 0;
// }
// //判斷目前的狀況下，如果在 row, col 位置放入新的皇后，是否會和之前的皇后衝突，如果是合法的放置方式 return 1;如果有衝突 return 0;
// int valid(int row, int col)
// {
// 	int i;
// 	for (i=0; i<=row-1; i++) 
// 	{
// 		if (q[i]==col || row-i == col-q[i] || row-i == q[i]-col) 
// 			return 0;
// 	}
// 	return 1;
// }
// void display(void)
// {
// 	int i, j;
// 	for (i=0; i<NQ; i++)
// 	{
// 		for (j=0; j<NQ; j++)
// 		{
// 			if (q[i]==j) 
// 				printf("@");
// 			else 
// 				printf("O");
// 		}
// 		printf("\n");
// 	}
// 	printf("\n");
// }
// void place(int row)
// {
// 	int j;
// 	if (row == NQ) {
// 		display();
// 	} else {
// 		for (j=0; j<NQ; j++) {
// 			if (valid(row, j)) {
// 				q[row] = j;
// 				place(row+1);
// 			}
// 		}
// 	}
// }


// //當我們有1元、5元、10元時，我們有哪些組合方法可以用這些錢幣湊出50元呢？換銅板就是解決這類的問題，用某些幣值組合出想要的數量。
// // 我們可以先盡量用越多最大幣值，再用小幣值補足剩下的餘額。
// // 將最大幣值的數量減一，餘額再用小幣值捕。以此類推，我們可以得到所有可能的組合。
// // 用遞迴呼叫的好處是，我們用一個 function 紀錄某一幣值一個一個減少的情況，同時呼叫另一個函式來計算下一個幣值的數量。透過一層一層的呼叫，在一個 function 內就不需要處理太多東西，問題也會變得簡單許多。
// // A piece of C code
// #define MAXNV 5
// int values[MAXNV]; //紀錄幣值
// int numbers[MAXNV]; //紀錄每個面值的銅板多少個

// void show(int nv);
// void change(int amount, int smallest, int nv); //amount:剩餘要找的錢, smallest:可以用來找錢的銅板編號最小為多少, nv:幾種銅板

// int main(void)
// {
// 	int nv, i;
// 	int money;

// 	scanf("%d", &nv); //獨有幾種銅板
// 	if (nv>MAXNV || nv<1) return 0;

// 	for (i=0; i<nv; i++) {
// 		scanf("%d", &values[i]); //讀個銅板的面值
// 	}

// 	scanf("%d", &money); //要把多少錢找開
// 	change(money, 0, nv);

// 	return 0;
// }

// void show(int nv)
// {
// 	int i;
// 	printf("(%d", numbers[0]);
// 	for (i=1; i<nv; i++) {
// 		printf(",%d", numbers[i]);
// 	}
// 	printf(")\n");
// }

// void change(int amount, int smallest, int nv)  //amount:剩餘要找的錢, smallest:可以用來找錢的銅板編號最小為多少, nv:幾種銅板
// {
// 	if (smallest<nv) {
// 		if (amount == 0) {
// 			show(nv);
// 		} else if (amount > 0) {
// 			numbers[smallest]++;
// 			change(amount-values[smallest], smallest, nv);
// 			numbers[smallest]--;
// 			change(amount, smallest+1, nv);			
// 		}
// 	}
// }


// void show_bits(int);
// char bits[64];
// int N;
// int main()
// {
// 	printf("Please enter the number of bits:");
// 	scanf("%d", &N);
// 	bits[N] = '\0';
// 	show_bits(0);
// 	return 0;
// }
// void show_bits(int x)
// {
// 	if(x==N)
// 	{
// 		printf("%s\n",bits); //印出字串
// 	}
// 	else
// 	{
// 		bits[x] = '0';
// 		show_bits(x+1);
// 		bits[x] = '1';
// 		show_bits(x+1);
// 	}
// }


// #include <ctype.h>
// int calculate(void);
// int main()
// {
// 	printf("=%d\n", calculate());
// 	return 0;
// }
// int calculate(void)
// {
// 	int c;
// 	int ans;
// 	int op1, op2;
// 	c = getchar();
// 	if (isspace(c))
// 	{
// 		ans = calculate();
// 	}
// 	else if (c=='+')
// 	{
// 		printf("(");
// 		op1 = calculate();
// 		printf("+");
// 		op2 = calculate();
// 		printf(")");
// 		ans = op1 + op2;
// 	}
// 	else if (c=='-')
// 	{
// 		printf("(");
// 		op1 = calculate();
// 		printf("-");
// 		op2 = calculate();
// 		printf(")");
// 		ans = op1 - op2;
// 	}
// 	else if (c=='*')
// 	{
// 		printf("(");
// 		op1 = calculate();
// 		printf("*");
// 		op2 = calculate();
// 		printf(")");
// 		ans = op1 * op2;
// 	}
// 	else if (isdigit(c))
// 	{
// 		ungetc(c, stdin);
// 		scanf("%d", &ans);
// 		printf("%d", ans);

// 	}
// 	return ans;
// }