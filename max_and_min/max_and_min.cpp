// max_and_min.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

//�����Լ������С������
int main()
{
	int m, n, a, b,k;
	
	printf("�����������������ö��Ÿ�����");
	
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
	printf("���Լ��Ϊ��%d\n", b);
	printf("��С������Ϊ��%d\n", m*n/b );
	getchar();
	
	getchar();
    return 0;
}

