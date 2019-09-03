#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

#if 0
void move(char pos1,char pos2)
{
	printf("%c---%c\n", pos1, pos2);
}
void Hanota(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
		move(pos1, pos3);
	else
	{
		Hanota(n - 1, pos1, pos3, pos2);
		move(pos1, pos3);
		Hanota(n - 1, pos2, pos1, pos3);
	}
}
int main()
{
	/*Hanota(1, 'A', 'B', 'C');
	Hanota(2, 'A', 'B', 'C');*/
	Hanota(3, 'A', 'B', 'C');

	return 0;
}
#endif 
#if 0
int jump(int n)
{
	if (n <= 0)
		return 0;
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	if (n > 2)
		return jump(n - 1) + jump(n - 2);
}

int main()
{
	int n=4;
	int ret = jump(10);
	printf("%d\n", ret);
	//system("pause");
	return 0;
}

#endif 
#if 0
int main()
{
	//strlen("hello");
	printf("%d", strlen("hello"));
	system("pause");
	return 0;
}

#endif 
#if 0
int fun(int x)
{
	int sum = 1;
	while (sum!=x)
	{
		sum *= 2;
	}
	if (sum == x)
		return 1;
	else
		return 0;

}
int main()
{
	int ret = fun(16);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

#endif
#if 0

int my_pow(int x, int y)
{
	int i = 0;
	int sum = 1;
	for (i = 0; i < y; i++)
	{
		sum *= x;
	}
	return sum;
}
int main()
{
	int x = 10;
	int y = 2;
	//my_pow(10, 2);
	printf("%d\n", my_pow(2, 0));
	system("pause");
	return 0;
}

#endif 
#if 0
char find_one(char *arr)
{
	int brr[255] = { 0 };
	while (*arr != '\0')
	{
		if (++brr[*arr] == 2)
			return *arr;
		arr++;
	}
}
int main()
{
	char arr[] = "qywyer23tdd";
	printf("%c\n", find_one(arr));
	system("pause");
	return 0;
}

#endif 

#if 0
char find_one(char *arr)
{
	int brr[255] = { 0 };
	char* p = arr;
	while (*arr != '\0')
	{
		brr[*arr]++;
		arr++;

	}
	arr = p;
	while (*arr != '\0')
	{0
		if (brr[*arr] == 1)
			return *arr;
		arr++;
	}
+
}
int main()
{
	char arr[] = "abaccdeff";
//	find_one(arr);
	printf("%c\n", find_one(arr));
	system("pause");
	return 0;
}

#endif 
#if 0
int cala_sum(int *arr, int sz)
{
	int i = 0;
	int x = arr[0];
	int max = arr[0];
	for (i = 1; i < sz; i++)
	{
		x = x + arr[i];
		if (x < arr[i])
		{
			x = arr[i];
		}
		if (x>max)
			max = x;
	}
	return max;
}
int main()
{
	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sum = cala_sum(arr, sz);
	printf("%d\n", sum);
	system("pause");
	return 0;
}

#endif

#if 0
#define ROW 5
void Func2(int arr[][ROW])
{
	int tmpRow = 0;
	int tmpCol = ROW / 2;
	int i = 2;
	arr[tmpRow][tmpCol] = 1;
	//2-n^2
	for (i = 2; i <= ROW*ROW; i++)
	{
		//(tmpRow-1+ROW)%ROW
		//(tmpCol+1)%ROW
		int x = (tmpRow - 1 + ROW) % ROW;
		int y = (tmpCol + 1) % ROW;
		if (arr[x][y] == 0)
		{
			tmpRow = x;
			tmpCol = y;
			arr[tmpRow][tmpCol] = i;
		}
		else
		{
			tmpRow = tmpRow + 1;
			arr[tmpRow][tmpCol] = i;
		}
	}
}
int main()
{
	int i = 0;
	int j = 0;
	int arr[ROW][ROW] = { 0 };
	Func2(arr);
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#endif 
#if 0
void ReplaceBlank(char *str, int len)
{
	int count = 0;
	assert(str!=NULL);
	while (*str != '\0')
	{
		if (*str == ' ')
			count++;
		str++;
	}
	char *p = str + len;
	char *q = str + len + 2 * count;
	while (p>=0&&p<q)
	{
		if (*p != ' ')
		{
			*q = *p;
			q--;
			p--;
		}
		else
		{
			p--;
			*q-- = '0';
			*q-- = '2';
			*q-- = '%';
		}
	}
}
int main()
{
	char str[50] = " abc de  f ";
	int len = strlen(str);
	ReplaceBlank(str, len);
	printf("%s\n", str);
	system("pause");
	return 0;
}
#endif 
//void change(char *a)
//{
//	while (*a != '\0')
//	{
//		if (*a == ' ')
//		{
//			*a = 0;
//		}
//	}
//}
//int fun(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		x = x&(x - 1);
//		count++;
//	}
//	return count;
//}
//int change(int *px)
//{
//	int y = 8;
//	y = y - *px;
//	px = &y;
//	return 0;
//}
//int x = 3;
//void inc()
//{
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d ", x);
//	return;
//}

//int fun(int a[], int sz, int k)
//{
//	int i = 0;
//	int min = a[0];
//	int t = 0;
//	for (i = 1; i < k; i++)
//	{
//		if (a[i] < min)
//		{
//			t = min;
//			min = a[i];
//			a[i] = t;
//		}
//	}
//	return min;
//}
//int fun(int *a, int sz)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < sz; i++)
//	{		
//		count = 1;
//		for (j = i + 1; j < sz; j++)
//		{
//			if (a[i] == a[j])
//			{
//				count++;
//			}
//		}
//		if (count>(sz / 2))
//			return a[i];
//	}
//	return -1;
//}


//int Find_val(int *arr,int row,int col,int key)
//{
//	int i = 0;
//	int j = col-1;
//
//	while(i<row&&j>=0)
//	{
//		if (*(arr+i*col+j) < key)
//		{
//			i++;
//		}
//		else if (*(arr + i*col + j) > key)
//		{
//			j--;
//		}
//		else
//			return 1;
//	}
//	return -1;
//}
//
//int main()
//{
//	//0,3
//	int arr[4][4] = { 1, 2, 8, 9,
//		2, 4, 9, 12,
//		4, 7, 10, 13,
//		6, 8, 11, 15 };
//
//	printf("%d", Find_val((int*)arr, 4, 4, 15));
//	system("pause");
//	return 0;
//}
 //int i = 0;
	//int *j = (int*)&i;
	//*j = 1;
	//printf("%d %d", i, *j);
	//printf("%d", (2 & 4) + ((2 ^ 4) >> 1));*/
	/*unsigned char a = 0xA5;
	unsigned char b = ~a>>4+1;
	printf("%d\n", b);*/
	//int i = 1;
	//printf("%d %d", sizeof(i++), i);

	/*int x[] = {1, 2, 3, 4, 5 },*p=x;
	p += 2;
	printf("%d", ++*p);*/
	/*
	int a[5] = { 1, 2, 3, 4, 5 };
	int *p1 = (int *)(&a + 1);
	int*p2 = (int*)((int)a + 1);
	int*p3 = (int*)(a + 1);
	printf("%d,%x,%d", p1[-1], p2[0], p3[1]);*/
	/*int a[] = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
	int sz = sizeof(a) / sizeof(a[0]);
	int t = fun(a, sz);
	printf("%d\n", t);*/
	/*unsigned long a = 0x11000000;
	printf("%d\n", *(unsigned char *)&a);*/
	//char a[] = "qwert";
	//char b[] = { 'q', 'w', 'e', 'r', 't' };
	//char s[] = "\\123456";
	////"\\123456\123456\t";
	//printf("%d\n", strlen(a));
	//printf("%d\n", sizeof(a));
	//printf("%d\n", strlen(b));
	//printf("%d\n", strlen(s));
	/*int a[10] = { 5, 3, 2, 1, 4, 6, 7, 89, 8, 9 };
	int sz = sizeof(a) / sizeof(a[0]);
	int k = 5;
	fun(a,sz,k);
	printf("%d\n", fun(a, sz, k));*/
	/*int i;
	for (i = 1; i < x; i++)
	{
		inc();
	}*/
	/*int a = 4, b = 3, *p, *q, *w;
	p = &a;
	q = &b;
	w = q;
	q = NULL;
	*q = 0;
	w = p;
	*p = a;
	*p = *w;*/

	//char arr[2][4];
	//strcpy((char*)arr, "you");
	//strcpy(arr[1], "me");
	//arr[0][3] = '&';
	//printf("%s", arr);
	///*int xx = 3;
	/*int*py = &xx;
	change(py);
	printf("%d", *py);*/
	//printf("%d", fun(2019));
	/*int a = 10;
	a += a *= a -= a / 3;
	printf("%d", a);*/
	/*const char *p = "hello!";
	printf("%c\n", *p);*/
	/*printf("0x%d\n", 0x13 & 0x17);
	printf("0x%d", 0x13 | 0x17);*/
	//char a[100] = "abc defg yz";
	////"abc%20defg%20yz";
	//int a[2][2] = { { 1 }, 2, 3 };
	//int b[2][] = { { 1, 2 }, { 3, 4 } };
	//change(a);
	//printf("%s\n", a);
	/*system("pause");
	return 0;
}*/
