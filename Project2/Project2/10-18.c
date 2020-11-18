#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
//int main()
//{
//	int max = 0;
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i<9; i++)
//	{
//		scanf("%d\n", &arr);
//		if (arr[i]>max)
//		{
//			arr[i] = max;
//		}
//	}
//	printf("%d", arr[i]);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int ret = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum +=flag* 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//void swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//4,7,3
//	if (a<b)
//	{
//		swap(&a, &b);
//	}
//	else if (a<c)
//	{
//		swap(&a, &c);
//	}
//	else if (b<c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d%d%d ", a, b, c);
//	return 0;
//}

// 两个数中的较大的
//int max(int x, int y)
//{
//	if (x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int getchar();
//	int MAX = max(a, b);
//	printf("%d", MAX);
//	return 0;
//}


//二分法
//void Er_fen(int arr[], int sz,int n)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)//左边的数大于右边的数循环终止
//	{
//		int mid = (left + right) / 2;//int型  求出的是整数，不是小数
//		//要找的数在中点左边
//		if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		//要找的数在中点右边
//		else if (n>arr[mid])
//		{
//			left = mid + 1;
//		}
//		//否则找到了，直接跳出
//		else
//		{
//			printf("找到了是： %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了");
//	}
//}
//int main()
//{
//	int n = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组个数
//	scanf("%d", &n);//输入要找的数
//	int getchar（）;
//	//Er_fen(arr, sz, n);//二分函数
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (n>arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了是： %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了");
//	}
//	return 0;
//}

//数组中的最大值
//int main()
//{
//	int i = 0;
//	//int max = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = 0;
//
//	for (i = 0; i < sz-1; i++);
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}



//int swap(int* x,int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//	//return 1;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int getchar();
//
//	swap(&a, &b);
//	printf("%d %d", a, b);
//
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &n, &m);
//	int getchar();
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) ^ (m >> i)) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d",count);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int N = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int getchar();
//	for (i = 0; i < 32;i+=2)
//	{
//		N = (n >> i) & 1;
//		printf("%d", N);
//	}
//	/*printf("%d", N);*/
//	return 0;
//}

//复制字符串
//char* my_strcpy(char* str, const char* src)
//{
//	char* n = str;
//	while (*src)
//	{
//		*str = *src;
//		str++;
//		src++;
//	}
//	*str = '\0';
//	return n;
//}
//
//int main()
//{
//	char ch[] = "shiqiang";
//	char ch1[10] = "world";
//	strcpy(ch1, ch);
//	printf("%s", ch1);
//
//	return 0;
//}



//模拟strlen
//int* my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		++str;
//
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "hello world";
//	printf("%d ", my_strlen(ch));
//	return 0;
//}


//模拟实现strcmp
//int my_strcmp(char* str, char* str1)
//{
//	assert(*str);
//	assert(*str1);
//	while (*str&&*str1)
//	{
//		if (*str > *str1)
//		{
//			return 1;
//		}
//		else if (*str < *str1)
//		{
//			return -1;
//		}
//		else
//		{
//			str++;
//			str1++;
//		}
//	}
//	if (*str)
//	{
//		return 1;
//	}
//	else if (*str1)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int my_strcmp1(char* str, char* str1)
//{
//	assert(str);
//	assert(str1);
//	int ret = 0;
//	while (!(ret =(unsigned char) *str -(unsigned char) *str1) && *str)
//	{
//		str++;
//		str1++;
//	}
//	if (ret > 0)
//		return 1;
//	else if (ret < 0)
//		return -1;
//	else
//		return 0;
//	return ret;
//}
//
//int main()
//{
//	char ch[20] = "hello world";
//	char ch1[20] = "hello world";
//	printf("%d\n", my_strcmp(ch, ch1));
//	printf("%d\n", my_strcmp1(ch, ch1));
//	return 0;
//}

//模拟实现strcat
//char* my_strcat(char* str1, char* str2)
//{
//	assert(str1);
//	assert(str2);
//	char* ret = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (*str2)
//	{
//		*str1 = *str2;
//		str2++;
//		str1++;
//	}
//	return ret;
//}
//int main()
//{
//	char str[20] = "Shi qiang";
//	char str1[20] = "is super";
//	printf("%s ", my_strcat(str, str1));
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(*str1);
//	assert(*str2);
//	char* n1 = str1;
//	char* n2 = str2;
//	char* start = str1;
//	while (*n1)
//	{ 
//		start = n1;//保存字符串
//		n2 = str2;
//		while (*start && *n2 && *start == *n2)
//		{
//		
//			start++;
//			n2++;
//		}
//		if (*n2 == '\0')
//		{
//			return n1;
//		}
//		n1++;
//	}
//	
//	return "null";
//}
//
//
//int main()
//{
//	char ch1[] = "abcddefgh";
//	char ch2[] = "iop";
//	printf("%s ", my_strstr(ch1,ch2));
//	return 0;
//}
//

//模拟实现my_memmove
	//void* my_memmove(void* dest, const void* src, size_t num)
	//{
	//	assert(dest);
	//	assert(src);
	//	void* ret = dest;
	//	if (src > dest)
	//	{
	//		while (num--)
	//		{
	//			*(char*)dest = *(char*)src;	
	//			++(char*)dest;					
	//			++(char*)src;
	//		}
	//	}
	//	else
	//	{
	//		while (num--)
	//		{
	//			*((char*)dest + num) = *((char*)src + num);
	//		}
	//	}
	//	return ret;
	//}
	//int main()
	//{
	//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//	int i = 0;
	//	/*my_memmove(arr + 2, arr + 5, 8);*/
	//	printf("%s ", my_memmove(arr + 2, arr + 5, 8));
	//	return 0;
	//}

							
//模拟实现my_memcpy
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest);
//	assert(src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memcpy(arr, arr + 2, 8);
//	int i = 0;
//	for (i = 0; i < 9; i++);
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//
//编写一个函数找出这两个只出现一次的数字

//
//void Find_two_nums(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//
//	}
//}
//int main()
//{
//	int arr[] = { 2, 3, 5, 2, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find_two_nums(arr,sz);
//	return 0;
//}

// 求最小公倍数
//int main()
//{
//	int A = 0;
//	int B = 0;
//	printf("请输入两个正整数：>");
//	scanf("%d%d\n", &A, &B);
//	int getchar();
//	int ret = 1;
//	while (ret)
//	{
//		if ((ret%A == 0) && (ret%B == 0))
//			break;
//		ret++;
//	}
//	printf("这两个数的最小公倍数是：%d\n", ret);
//	return 0;
//}


//BoBo写了一个十六进制整数ABCDEF，他问KiKi对应的十进制整数是多少
//int main()
//{
//	char str[] = "1234";
//	long long n = 0;
//	int st = strlen(str);
//	int i = 0;
//	for (i = st - 1; i >= 0; i--);
//	{
//		int j = 0;
//		if (str[i] >= 0 && str[i] <= 9)
//		{
//			n += ((str[i] - '0')*(int)pow(16, j));
//			j++;
//		}
//		else if (str[i] >= 'A' && str[i] <= 'F')
//		{
//			n += ((str[i] - 'A' + 10)*(int)pow(16, j));
//			j++;
//		}
//		else
//		{
//			printf("输入的数字不合法。");
//		}
//	}
//	printf("%d\n", n);
//	return 0;
//}

// I love china!   
//!anihc ovol I
//china! love I

//void revers_str(char* str,int len)
//{
//	char* start = str;
//	char* end = str + len - 1;
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}
//int main()
//{
//	char str[] = "I love china!";
//	int len = strlen(str);
//	revers_str(str,len);
//	printf("%s\n",str);
//	return 0;
//
//}