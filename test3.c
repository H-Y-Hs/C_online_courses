#include <string.h>
#include <stdio.h>
#define SPEED 0.083 //SPEED����0.083, define�i��K��� 

//int main(void)
//{
//	float minutes, distance;
//	int size, letters;
//	char name[10];/* character array, string */
//	
//	printf("HI! What's your name?");
//	scanf("%9s", name); //scanf�b�����B�|��J'\0', %9�i�w���r������z�� 
//	printf("\n%s, how many minutes does it take to walk from\n", name);
//	printf("your dormitory to the Delta building?");
//	scanf("%f", &minutes);
//	size = sizeof(name);
//	letters = strlen(name);
//	
//	distance = minutes * SPEED;
//	printf("\nThe distance from your dormitory to the Delta building\n");
//	printf("is about %.3f kilometers.\n\n", distance);
//	
//	printf("By the way, your first name has %d letters, ", letters);
//	printf("and we have %d bytes to store it in.\n", size);
//	return 0;
//}

//#define ENGINE 1499.99 
//int main(void)
//{
//	printf("~%f~\n", ENGINE);
//	printf("~%e~\n", ENGINE);
//	printf("~%4.2f~\n", ENGINE); //���4�Ӧr���A��ܨ�p���I��2�� 
//	printf("~%3.1f~\n", ENGINE); //���|�ˤ��J 
//	printf("~%10.3f~\n", ENGINE);
//	printf("~%-10.3f~\n", ENGINE); //�[�t���N��V����� 
//	printf("~%12.3e~\n", ENGINE);
//	printf("~%+4.2ff~\n", ENGINE);
//	printf("~%010.2f~\n", ENGINE); //�̫e����0�N���쥻�n�ťժ��a���0 
//	return 0;
//}

////��#�]�򤣦P�۫ת���r 
//#define BORDER "################################"
//int main(void)
//{
//	char word[26];
//	scanf("%25s", word);
//	printf("%.*s\n", strlen(word)+2, BORDER);
//	printf("#%s#\n", word);
//	printf("%.*s\n", strlen(word)+2, BORDER);
//}

//While �Ϊk 
#define STEP 10
#define LOWER 0
#define UPPER 100
//int main(void)
//{
//	int fahr, celsius;
//	
//	printf("Celsius Fahrenheit\n");
//	printf("--------------------\n");
//	celsius = LOWER;
//	while(celsius<= UPPER)
//	{
//		fahr = 1.8*celsius + 32;
//		printf("%4d %12d\n", celsius, fahr);
//		celsius = celsius + STEP;
//	}
//	printf("--------------------\n");
//	return 0;
//	
//}  

//���h�j��L�X�ˤT����
int main()
{
	int i = 1, j;
	while(i <= 9)
	{
		j = 1;
		while(j < i)
		{
			printf("   ");
			j++;
		}
		while(j <= 9)
		{
			printf("%-3d", j*i);
			j++;
		}
		printf("\n");
		i++;		
	}
	return 0;	
} 
