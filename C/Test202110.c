#include<stdio.h>

struct jsu //����ü ���� ���� 
{
	char nae[12]; // ����ü element 1 
	int os, db, hab, hhab; // ����ü element 2, element 3, element 4, element 5
};

int main()
{
	struct jsu st[3] = // ����ü 3�� ���� 
	{
		{"������1", 95, 88}, {"������2", 84, 91}, {"������3", 86, 75}
	};
	
	struct jsu* p; // ����ü�� ��ġ�� ����Ű�� ������ ���� p���� 
	p = &st[0]; // p�� ����ü st�� 0��° element�� �ּҰ��� �Ҵ� 
	(p + 1)->hab = (p+1)->os + (p + 2)->db; // ����ü�� �� ��° element�� hab = ����ü�� �� ��° element�� os(84) + ����ü�� �� ��° element�� db(75) : 84 + 75 = 159
	// ����ü�� �� ��° element�� hhab = ����ü�� �� ��° element�� hab(159) + ����ü�� ù ��° element�� os(95) + ����ü�� ù ��° element�� db(88) : 159 + 95 + 88 = 342
	(p + 1)->hhab = (p+1)->hab + p->os + p->db;
	printf("%d\n", (p+1)->hab + (p+1)->hhab); // ����ü�� �� ��° element�� hab + ����ü�� �� ��° element�� hhab : 159 + 342 = 501
	
	int* array[3]; // �迭�� ũ��(����)�� 3�� �� �迭 ���� 
	int a = 12, b = 24, c = 36; // int�� ���� 3�� ���� 
	array[0] = &a; // �迭�� 0��° �ڸ��� a�� �ּҰ��� �ֱ� / array[0] = a�� �ּҰ� 
	array[1] = &b; // �迭�� 1��° �ڸ��� b�� �ּҰ��� �ֱ� / array[1] = b�� �ּҰ� 
	array[2] = &c; // �迭�� 2��° �ڸ��� c�� �ּҰ��� �ֱ� / array[2] = c�� �ּҰ� 
	printf("%d", *array[1] + **array + 1); // array�� �ι�° �ּ��� ��(b = 24) + array�� ù ��° �ּ��� ��(a = 12) + 1 = 24 + 12 + 1 = 37 
}
