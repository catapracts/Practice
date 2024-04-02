#include<stdio.h>

struct jsu
{
	char nae[12];
	int os, db, hab, hhab;
};

int main()
{
	struct jsu st[3] = 
	{
		{"데이터1", 95, 88}, {"데이터2", 84, 91}, {"데이터3", 86, 75}
	};
	
	struct jsu* p;
	p = &st[0];
	(p + 1)->hab = (p+1)->os + (p + 2)->db; 
	(p + 1)->hhab = (p+1)->hab + p->os + p->db;
	printf("%d\n", (p+1)->hab + (p+1)->hhab);
		
	int* array[3];
	int a = 12, b = 24, c = 36;
	array[0] = &a;
	array[1] = &b;
	array[2] = &c;
	printf("%d", *array[1] + **array + 1);
}
