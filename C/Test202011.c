#include<stdio.h>

/*

K = p
O = p+1
R = p+2
E = p+3
A = p+4
\0 = p+5 : KOREA = String�̹Ƿ� �� �ڿ� null�� ����, ����� ���� �� ��Ÿ�� 

printf("%s\n", p); : p��ġ�������� ������ ���ڿ� ��� 
printf("%s\n", p+3); : p+3��ġ�������� ������ ���ڿ� ��� 
printf("%c\n", *p); : p�� ����Ű�� ���� ���� ��� 
printf("%c\n", *(p+3)); : p+3�� ����Ű�� ���� ���� ��� 
printf("%c\n", *p+2); : p�� ����Ű�� ���� ���ڿ� +2�� �� ��� = M by ASCII code 
*/

main()
{
	char* p = "KOREA";
	printf("%s\n", p); //KOREA
	printf("%s\n", p+3); //EA
	printf("%c\n", *p); //K
	printf("%c\n", *(p+3)); //E
	printf("%c\n", *p+2); //M
}
