/*
*�������� �ּҰ� = �ش� �����Ͱ� ����� �޸��� ���� �ּ� / C��� - �ּҰ� = 1byte �޸� �������� ������ ǥ��
(ex)int�� ������ = 4byte / int�� �������� �ּҰ� = ���� �ּ� 1byte

* *��ȣ = ����ϴ� ��ġ�� ���� �پ��� �뵵 / ���� ����,  �������� ����, �޸𸮿� ���� � ��� 

* ����(word) = CPU�� �� ���� ó���� �� �ִ� �������� ũ�� / 32bit sys : 1word = 4byte, 64bit sys : 1word = 8byte


Pointer
- �޸��� �ּҰ��� �����ϴ� ����
- ������ : �ּ�(����) ������(&), ���� ������(*)
 - �ּ�(����) ������(&) : ������ �̸� �տ� ��� / �ش� ������ �ּҰ��� ��ȯ
 - ���� ������(*) : �������� �̸��̳� �ּ� �տ� ��� / �����Ϳ� ����Ű�� �ּҿ� ����� ���� ��ȯ
- ���� ���� : Ÿ��* �������̸�;
- ���� + �ʱ�ȭ : Ÿ��* �������̸� = &�����̸�; or Ÿ��* �������̸� = �ּҰ�;
- �����͸� ������ �� ���� ������(*)�� ����ϱ� ���� �����ʹ� �ݵ�� ���� �ʱ�ȭ�Ǿ���Ѵ� -> �׷��� ������ �ǵ����� ���� �޸��� ���� �����ϰ� �Ǳ� ����
- �������� Ÿ���� ���� �����ڸ� ���� ���� ������ ��, ������ �޸��� ũ�⸦ �˷��ִ� ����
 

Pointer ����
- ���ѵ� ���길 ����
- ��Ģ ����
1. +, *, / = �ǹ�X 
2. - =  �� ������ ������ ����� �Ÿ� => ���� �����ϸ�, �޸� ũ�Ⱑ �پ��°� �ƴ϶� �� �޸� ������ �Ÿ��� ������ Ÿ���� ũ�⸸ŭ �þ�� �� = �־����� �� 
3. ���� +, - : O, �Ǽ� ���� X 
4. ����, �� ����


Argument transfer
- argument = �Լ��� ȣ���, �Լ��� �ʿ��� �����͸� ������ �� ��� 
- ����: call by value, call by reference
call by value : �μ��� ���޵Ǵ� ������ ������ �ִ� ���� �Լ� ���� �Ű������� �����ϴ� ��� / �̷��� ����� ������ �ʱ�ȭ�� �Ű������� �μ��� ���޵� �����ʹ� ������ ������ ���� / �Լ� �������� �Ű����� ������ �μ��� ���޵Ǵ� ������ �ƹ��� ������ ��ġ�� �ʽ��ϴ�.
call by reference : �μ��� ������ ���� �����ϴ� ���� �ƴ�, �ش� ������ �ּҰ��� ���� / �Լ��� �Ű������� �μ��� ���޵� ������ ���� �ּҰ��� ���� / �μ��� ���޵� ������ ���� �Լ� ������ ������ �� �ְ� �˴ϴ�.


Various pointer
- pointer of pointer / void pointer / function pointer / null pointer
null pointer : 0�̳� NULL�� �����Ͽ� �ʱ�ȭ�� pointer / �ƹ��͵� ����Ű�� �ʴ� pointer
pointer of pointer : 2�� pointer / ������ ������ ����Ű�� ������ / ���� ������(*)�� �� �� ���
void pointer : ����� �Ǵ� �������� Ÿ���� ������� ���� ������ / ����, �Լ�, ������ �� ��� ���� ����ų �� ������, ������ �����̳� �޸� ������ ���� �۾��� �� �� �����ϴ� = �ּҰ��� �����ϴ� �� �̿ܿ��� �ƹ��͵� �� �� ���� ������ / ����� ������ ����� Ÿ�� ��ȯ�� �ϰ� �� �ڿ� ���
function pointer : �Լ��� ���� �ּҸ� ����Ű�� ������ ��� / �Լ� �������� ������ Ÿ���� �Լ��� ��ȯ���� �Ű������� ���� ���� = �Լ��� ������ �˾ƾ߸� �ش� �Լ��� �´� �Լ� �����͸� ���� �� �ֽ��ϴ�.
*���α׷����� ���ǵ� �Լ��� ���α׷��� ����� �� ��� ���� �޸𸮷� �ö� ->  �Լ��� �̸��� �޸𸮿� �ö� �Լ��� ���� �ּҸ� ����Ű�� ������ ���(constant pointer)�� �� 
���� - void func (int, int); -> �Լ� ������ - void (*ptr_func) (int, int);
**�Լ� ������ ���� �������� �켱���� ������ �ݵ�� *ptr_func �κ��� ��ȣ(())�� �ѷ��α�


Pointer�� Array�� ����
- C������ �迭�� �̸��� ������ó�� ����� �� ���� �Ӹ� �ƴ϶�, �����͸� �迭�� �̸�ó�� ���
- ������ ���(constant pointer) = ������ ������ ����Ű�� �ִ� �ּ� ���� ������ �� ���� ������ = Array
- ��� ������(pointer to constant) = ����� ����Ű�� ������
- �迭�� ũ�⸦ ����� ������ �迭�� �̸��� ������ ���̿� ���̰� �߻�
�迭�� �̸��� �̿��� ũ�� ��� -> �迭�� ũ�Ⱑ int�� �迭 ��� 3���� ũ���� 12����Ʈ�� ����� ���
�����͸� �̿��� ũ�� ��� ->  �迭�� ũ�Ⱑ �ƴ� ������ ���� ��ü�� ũ�Ⱑ ��µǴ� ����
*�迭�� ����� ������ �� ���� ������ �迭�� ũ�⸦ �Ѿ�� ������ ���� �ʵ��� ���� -> ������ ������ �̿��Ͽ� ����ϴٰ� �迭�� ũ�⸦ �Ѿ�� ������ �ϴ� ���, C �����Ϸ��� ��� ������ �߻�X = ������ �迭�� ũ�⿡�� ����


Pointer Array & Array Pointer
- Pointer Array : �迭 ��ҷ� ������ ������ ������ �迭 = ������ ������ ������ �� �ִ� �迭
- Array Pointer : �迭�� ����ų �� �ִ� ������ / 2���� �̻��� �迭������ �ǹ� / �����͸� �迭ó�� ����ϱ� ���ؼ� �迭 �����͸� �����Ͽ� ���
- ���� : ��ȣ�� ���� 

2���� �迭�� �迭 �̸����� ������ ������ �ϸ� �迭�� �� ������ �̵� = (arr+1)��  arr[1]�� ���� ���� ����Ŵ / ������ ���� �� �����ϴ� ���� ���� ����(= �κ� �迭�� ũ�� = sizeof(arr[0]) / sizeof(Ÿ��))�� ���� ���� / 



*main�Լ�
- ���� : void(�Ǵ� int) main(int argc, char *argv[]); 
- ���α׷��� ����Ǹ� ���� ���� �ڵ����� ȣ��Ǵ� �Լ�
ù ��° �μ� = int�� ���� argc / main() �Լ��� �μ��� ���޵Ǵ� ���ڿ��� ������ ���
�� ��° �μ� = char�� ������ �迭 argv = main() �Լ��� �μ��� ���޵� ������ ���ڿ��� ����� �迭

*/



#include<stdio.h>
void local(int);  
void local1(int*);
double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);
double calculator(double , double, double (*func)(double, double));

void local(int num)
{
	num += 10;
}

void local1(int* num)
{
	*num += 10;
}  



int main(void)
{
	int x = 7;        // ������ ����
	int *ptr1 = &x;    // �������� ����
	int *ptr2 = &ptr1; // �������� ����
	
	int num = 1234;
	double num1 = 3.14;  
	int* ptr_num = &num;
	double* ptr_num1 = &num1;
	
	
	printf("pointer size = %d\n", sizeof(ptr1)); //��� : 8(������ ������ ũ�� : 8byte)
	printf("pointer size = %d\n", sizeof(ptr_num)); //��� : 8(������ ������ ũ�� : 8byte)
	printf("pointer size = %d\n", sizeof(ptr_num1)); //��� : 8(������ ������ ũ�� : 8byte)
	printf("ptr_num -> address_value = %#x\n", ptr_num); //��� : 0x62fdf4(num�� �ּҰ�)
	printf("ptr_num -> data_value = %d\n", *ptr_num); //��� : 1234(num�� value)
	printf("ptr_num1 -> address_value = %#x\n", ptr_num1); //��� : 0x62fdf4(num1�� �ּҰ�)
	printf("ptr_num1 -> data_value = %f\n", *ptr_num1); //��� : 3.140000(num1�� value)

	printf("\n====================================\n\n");

	char* ptr_char = 0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00;  

	printf("ptr_char -> address value = %#x\n", ptr_char); // ��� : 0 = pointer�� ����� �ʱ� �ּҰ� = 0 
	printf("ptr_char+1 -> address value = %#x\n", ++ptr_char); // ��� : 1(0x1) = pointer�� �ּҰ��� �ڷ����� ũ�⸸ŭ ���� 
	
	printf("\n====================================\n\n");
	
	printf("ptr_int -> address value = %#x\n", ptr_int); // ��� : 0 = pointer�� ����� �ʱ� �ּҰ� = 0
	printf("ptr_int+1 -> address value = %#x\n", ++ptr_int); // ��� : 4(0x4) = pointer�� �ּҰ��� �ڷ����� ũ�⸸ŭ ����
	
	printf("\n====================================\n\n");
	
	printf("ptr_double -> address value = %#x\n", ptr_double); // ��� : 0 = pointer�� ����� �ʱ� �ּҰ� = 0
	printf("ptr_double+1 -> address value = %#x\n", ++ptr_double); // ��� : 8(0x8) = pointer�� �ּҰ��� �ڷ����� ũ�⸸ŭ ����	
		
	printf("\n====================================\n\n");
	
	int num2 = 10;
	int num3 = 20;
	int *ptr_num2 = &num2;
	int *ptr_num3 = &num3;  

	if (ptr_num2 != ptr_num3) // �����ͳ����� �� ����
	{
	    printf("ptr_num2 -> data_value = %d\n", *ptr_num2);
	    printf("ptr_num3 -> data_value = %d\n", *ptr_num3);
    	printf("ptr_num2 != ptr_num3\n\n");
	    ptr_num3 = ptr_num2; // �����ͳ����� ���� ����
	}
	
	printf("ptr_num2 -> data_value = %d\n", *ptr_num2);
	printf("ptr_num3 -> data_value = %d\n", *ptr_num3);

	if (ptr_num2 == ptr_num3) // �����ͳ����� �� ����
	{
	    printf("ptr_num2 == ptr_num3\n\n");
	}
	
	printf("\n====================================\n\n");
	
	int var = 10;
    printf("initial value of var = %d\n", var);  

    local(var);
    printf("value of var after local() func. = %d\n", var);

	printf("\n====================================\n\n");
	
	int var1 = 10;
    printf("initial value of var1 = %d\n", var1);

    local1(&var1);
    printf("value of var1 after local1() func. = %d\n\n", var1);
    
    printf("\n====================================\n\n");
    
	int num4 = 10;              // ���� ����
	int* ptr_num4 = &num4;       // ������ ����
	int** ptr_num5 = &ptr_num4; // �������� ������ ����  

	printf("num4 = %d\n", num4); // ��� : 10 = num4�� ����� �� 
	printf("ptr_num4 -> data_value = %d\n", *ptr_num4); // ��� : 10 = ptr_num4�� ���� �ִ� �ּҰ��� num4��, �� num4�� ����� �� 
	printf("ptr_num5 -> data_value = %d\n", **ptr_num5); // ��� : 10 = ptr_num5�� ���� �ִ� �ּҰ��� ptr_num4��, ptr_num4�� ���� �ִ� �ּҰ��� num4��, �� num4�� ����� �� 

	printf("\n====================================\n\n");
	
	int num5 = 10;         // ���� ����
	void* ptr_num6 = &num5; // void ������ ����  
 
	printf("num5 = %d\n", num5); // ��� : 10 = num5�� ����� ��
	printf("ptr_num6 -> data_value = %d\n", *(int*)ptr_num6); // ��� : 10 = int pointer type���� ����� Ÿ�� ��ȯ�� ��ģ void pointer�� num5�� �ּҰ��� ����Ǿ� �ְ�, �� num5�� ����� ��

	*(int*)ptr_num6 = 20;  // void �����͸� ���� �޸� ����  
	printf("ptr_num6 -> data_value = %d\n", *(int*)ptr_num6); // ��� : 20 = int pointer type���� ����� Ÿ�� ��ȯ�� ��ģ void pointer�� num5�� �ּҰ��� ����Ǿ� �ְ�, �� num5�� ����� ��

	printf("\n====================================\n\n");	
	
	double (*calc)(double, double) = NULL; // �Լ� ������ ����
	double result = 0;  
	double num7 = 3, num8 = 5;
	char oper = '*';  

	switch(oper)
	{
	    case '+':
	        calc = add;
	        break;

    	case '-':
	        calc = sub;
	        break;

    	case '*':
	        calc = mul;
	        break;

    	case '/':
	        calc = div;
	        break;

    	default:
	        puts(" only +, -, *, /");
	}  

	result = calculator(num7, num8, calc);
	printf("result = %lf\n", result);
	
	printf("\n====================================\n\n");
	
	int array[3] = {10, 20, 30}; // �迭 ����
	int* ptr_array = array;        // �����Ϳ� �迭�� �̸��� ����  

	printf("array[0] : %d, array[1] : %d, array[2] : %d\n", array[0], array[1], array[2]); //��� : 10 20 30 
	printf("ptr_array[0] : %d, ptr_array[1] : %d, ptr_array[2] : %d\n", ptr_array[0], ptr_array[1], ptr_array[2]); //��� : 10 20 30 - pointer�� �迭 ���
	printf("*(array+0) : %d, *(array+1) : %d, *(array+2) : %d\n\n", *(array+0), *(array+1), *(array+2)); //��� : 10 20 30 - �迭 �̸����� pointer ���� / array+0 = array�� ���� �ּ�, array+2 = array��2nd element, *(array+2) = array[2]��ġ�� �� = 30
	printf("get array size using by array name : %d\n", sizeof(array)); //��� : 12 = intũ��*3 = 12byte 
	printf("get array size using by pointer : %d\n\n", sizeof(ptr_array)); //��� : 8 = pointer�� ũ�� = 8byte
	
	printf("\n====================================\n\n");
	
	int i, array_length;
	int num9 = 10, num10 = 20, num11 = 30;
	int* array1[3] = {&num9, &num10, &num11}; // int�� ������ �迭 ���� - array1�� num9,10,11�� address value�� ���� 

	array_length = sizeof(array1)/sizeof(array1[0]); // 24/8 = 3 = �迭�� ����(ũ��)
	printf("%d\n", sizeof(array1)); //24 : pointer�� ũ��� ���� 8byte�̹Ƿ� 3���� ������ 8*3 = 24 
	printf("%d\n", sizeof(array1[0])); //8 : pointer�� ũ��� ���� 8byte
	printf("%#x\n", array1[0]); //0x62fd3c -> num9�� address value -> num9�� data value 
	printf("%#x\n", array1[1]); //0x62fd38 -> num10�� address value -> num9�� data value 
	printf("%#x\n", array1[2]); //0x62fd34 -> num11�� address value -> num9�� data value 
	

	for (i = 0; i < array_length; i++) //�迭 ��ü�� ���ƺ���. 
	{
	    printf("%d\n", *array1[i]); // ��� : 10, 20, 30
	}
	
	printf("\n====================================\n\n");
	
	int arr[2][3] =             // �迭�� ����
	{
	    {10, 20, 30},
	    {40, 50, 60}
	};

	int (*pArr)[3] = arr;       // �迭 �������� ����  

	printf("%d\n", arr[1][1]);  // �迭 �̸����� ����
	printf("%d\n", pArr[1][1]); // �迭 �����ͷ� ����	
	
	
	
	
	
}

double add(double num01, double num02)
{
	return num01 + num02;
}

double sub(double num01, double num02)
{
	return num01 - num02;
}

double mul(double num01, double num02)
{
	return num01 * num02;
}

double div(double num01, double num02)
{
	return num01 / num02;
}

double calculator(double num01, double num02, double (*func)(double, double))
{
	return func(num01, num02);
}

