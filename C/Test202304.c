#include<stdio.h>

void swap(int* a, int idx1, int idx2) // a�� idx1��° ���� a�� idx2��° ���� ��ġ�� �ٲٴ� �Լ� 
{
	int t = a[idx1]; // ���� t�� a�迭�� idx1��° ���� ����  
	a[idx1] = a[idx2]; // a�迭�� idx1��° ���� a�迭�� idx2��° ���� ����
	a[idx2] = t; // a�迭�� idx2��° ���� t(a�迭�� idx1��° ��)�� ���� 
}

void Usort(int* a, int len)
{
	for(int i = 0; i < len-1; i++) // ������ ���� �迭 ��ü�� �ѹ��� ����. 
	{
		for(int j = 0; j < len-1-i; j++) // ������ ���� �迭 ���� ������ ���ϱ� ���� �ݺ�.
		{
			if(a[j]>a[j+1]) // ���� ��(a[j])�� ���� ��(a[j+1])���� ū ��� 
			{
				swap(a, j, j+1); // ���� ���̶� ���� �� ��ġ �ٲٱ� 
			}
		}
	}
	
	for(int i = 0; i<len; i++) // �ݺ��� �̿��ؼ� �迭 ��ü�� Ȯ���Ѵ�. 
	{
		printf("%d\t", a[i]); // ��� : 50 75 85 95 100  
	}
}

main()
{
	char a[] = "Art"; // ���ڷ� �̷���� �迭 ���� 
	char* p = NULL; // �� ������ ���� ���� 
	p=a; // ������ ������ a�� �Ҵ� = p�� a�� ����Ű�� ���� 
	printf("%s\n", a); // ��� : Art / �迭 a ��� 
	printf("%c\n", *p); // ��� : A / a�� ���� ù ��° �ּ� + ù ��° �ּ��� ���� ����Ŵ 
	printf("%c\n", *a); // ��� : A / a�� ���� ù ��° �ּ� + ù ��° �ּ��� ���� ����Ŵ
	printf("%s\n", p); // ��� : Art / �Ʊ� ������ p = a�� ������ ����� ����  
	for(int i = 0; a[i] != '\0'; i++) // �迭 ������ �ݺ� 
	{
		printf("%c", a[i]); // ��� : Art / �� ���ھ��� ����ϹǷ� ,�� �����ϸ� �̷������� ��µ� - A, r, t 
	}
	
	printf("\n===========================\n");
	
	char* c = "qwer"; // ������ ������ ���� C ���� �� "qwer"�� ���� �ּ� ����Ű�� 
	char* b = "qwtety"; // ������ ������ ���� b ���� �� "qwtety"�� ���� �ּ� ����Ű�� 
	for(int i = 0; c[i] != '\0'; i++) // ���ڿ��� ���������� c�� ���� Ȯ�� 
	{
		for(int j = 0; b[j] != '\0'; j++) // ���ڿ��� ���������� b�� ���� Ȯ�� 
		{
			if(c[i] == b[j]) // c�� i��°�� ����� ���ڿ� b��j��°�� ����� ���ڰ� ������  
			{
				printf("%c", c[i]); // c�� i��°�� ����� ���� ���, ��� : qwe 
			}
		}	
	}
	
	printf("\n===========================\n");
	
	int input = 101110; // 10������ ��ȯ�� 2���� ���� 
	int di = 1; // int�� ���� di ���� �� �� 1�� �ʱ�ȭ / 2^n ������ ����
	int sum = 0; // int�� ���� sum ���� �� �� 0���� �ʱ�ȭ / 2������ �ڸ� * di�� ���� ���� 
	while(1) // ���� �ݺ��ϴٰ� break ������ ���� 
	{
		if(input == 0) // input���� 0�� �Ǹ� = 2���� -> 10������ ��ȯ�� �� ���� ��� 
		{
			break; // �ݺ��� ���� 
		}
		
		sum = sum + (input % 10) * di; // input�� 10���� ���� �� �������� di���� ���� �����ؼ� ���ϱ� 
		di = di*2; // di�� 2 ���ϱ�(2�� �������� ���� - 2^0, 2^1, 2^2, 2^3, ...)
		input = input/10; // input�� 10���� ������(2������ 10���� ���� �� ���ϱ� = ������ ����� ��)
	}
	printf("%d", sum); // ��� : 46( 32(1*(2^5)) + 8(1*(2^3)) + 4(1*(2^2)) + 2(1*(2^1)) ) 
	
	printf("\n===========================\n");
	
	int d[] = {85, 75, 50, 100, 95};
	int nx = 5;
	Usort(d, nx); // ��� : 50 75 85 95 100 
	
}

