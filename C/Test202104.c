#include <stdio.h>

main()
{
	struct insa //����ü ���� 
	{
		char name[10]; //����ü ����1 
		int age; //����ü ����2 
	} a[] = {"kim", 28, "Lee", 38, "Park", 42, "Choi", 31}; //����ü ���·� �迭 ���� �� �ʱ�ȭ 
	
	struct insa* p; // ����ü�� ����Ű�� ������ ���� p���� 
	p = a; // p�� a�迭�� ���� ��ġ(a[0]) ���� 
	p++; // p+1 = ���� ��ġ + 1 = a[1] 
	printf("%s\n", p -> name); // LEE
	printf("%d\n", p -> age); //38
	
}
