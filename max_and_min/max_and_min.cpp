// max_and_min.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//求最大公约数和最小公倍数
int main()
{
	int m, n, a, b,k;
	
	printf("请输入两个整数，用逗号隔开：");
	
	scanf_s("%d,%d", &m, &n);
	a = m;
	b = n;
	if (a < b)
	{
		k = a;
		a = b;
		b = k;
	}
	while ((k = a%b) != 0) {
		a = b;
		b = k;
	}
	printf("最大公约数为：%d\n", b);
	printf("最小公倍数为：%d\n", m*n/b );
	getchar();
	
	getchar();
    return 0;
}

