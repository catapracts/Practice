#include<stdio.h>
int bigNum (int, int); // �Լ��� ���� ����

/*
���(control flow statements) 
- ~.C = ������ ���α׷�(procedural program) �Ǵ� ������ ���α׷�(Imperative program)
- ���α׷��� �̷��� �������� �帧�� ���� / ���� :  ���ǹ�, �ݺ��� ��
- �߰�ȣ({} = block)����ؼ� ���� ǥ�� 




���ǹ�(conditional statements)
- �־��� ���ǽ��� ����� ���� ������ ������ �����ϵ��� �����ϴ� ���ɹ�
- if / if-else /  if - else if - else / switch
- if : ���ǽ��� ��� = ��(true) : �־��� ���ɹ��� ����, ����(false) : �ƹ��͵� ����X / �������� ��밡�� 
- if-else :  ���ǽ��� ��� = ��(true) : if�� �־��� ���ɹ��� ����, ����(false) : else�� �־��� ���ɹ��� ����/ 3�� �����ڷ� �����ϰ� ���� ���� 
- if - else if - else : ���ǽ��� ��� = ��(true) : if or else-if�� �־��� ���ɹ��� ����, ����(false) : else�� �־��� ���ɹ��� ����
- switch
  - if / else ������ �������� �� ������, �����Ϸ��� ����ȭ�� ���� �� �� �־� �ӵ� ���� ���� ��
  - �־��� ���� ���� ����� ���� ���α׷��� �ٸ� ������ �����ϵ��� �ϴ� ���ǹ�
  - ���� �����δ� int������ �°��� �� �ִ�(integer promotion) ���� ���= if / else �����ٴ� ����� �� �ִ� ��Ȳ�� ���� ��
  - default ���� ���� ���� ���� ������ ��� case ������ �ش����� ���� �� ���� / �ݵ�� �����ؾ� �ϴ� ���� �ƴϸ� �ʿ��� ������ ����

  


�ݺ���(iteration statements)
- ���α׷� ������ �Ȱ��� ������ ���� Ƚ����ŭ �ݺ��Ͽ� �����ϵ��� �����ϴ� ���ɹ�
- ���� ���� ���Ǵ� ��� �� �ϳ�
- while / do-while / for 
- while : ���ǽ��� ��(true)������ �Ǵ��Ͽ�, ���̸� ������ ���ɹ��� ����-> ������ ���ɹ��� ���� �����ϰ� ����, �ٽ� ���ǽ����� ���ƿ� �� �� �� �������� �Ǵ�
*ǥ������ �˻縦 ���� �ݺ��ؼ� ����Ǵ� �ݺ��� = ����(loop)
- do-while : ���� ������ �� �� ������ �Ŀ� ���ǽ��� �˻�= �ǽ��� ����� ������� ������ �� ���� ������ ����
- for : ��ü������ �ʱ��, ���ǽ�, �������� ��� �����ϰ� �ִ� �ݺ��� / �ʱ��, ���ǽ�, �������� ���� �������� / 



��Ÿ��� 
- loop ���� - continue, break 
- continue : ���� ������ ����Ͽ� �ش� ������ ������ �κ��� �ǳʶٰ�, �ٷ� ���� ���ǽ��� �Ǵ����� �ѱ� /  ���� �ݺ��� ������ Ư�� ���ǿ� ���� ���� ó���� �ϰ��� �� �� ���� ���
- break : ���� ������ ����Ͽ� �ش� �ݺ����� ������ �����Ų ��, �ݺ��� �ٷ� ������ ��ġ�� ���ɹ��� ���� /  �ݺ����� ������ ���������� ���� �� ���
- goto : ���α׷��� �帧�� ������ ���̺�(label)�� ������ �����Ű�� ���ɹ� / �� ������� �޸� �ƹ��� ���� ���� ���α׷��� �帧�� �ű� / ���� �ս��� ����� �� ������, �ݸ鿡 ���α׷��� �帧�� �ſ� �����ϰ� ���� �� ���� -> ����� ����� �̿ܿ��� ���� ���X 




�Լ�(Function)
- �ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� ���α׷� �ڵ��� ����
- ����: ǥ�� �Լ�, ����� ���� �Լ�
- ��� ���� : �ݺ����� ���α׷����� ���� �� �ֱ� ���� - > Ư�� �۾��� ���� �� �ݺ��ؾ� �� ���� �ش� �۾��� �����ϴ� �Լ��� �ۼ�, ȣ��, ����


- �Լ� ����
return type �Լ��̸�(�Ű�������){�Լ� Body}
-> return type : �۾��� ��ġ�� ��ȯ�ϴ� �������� Ÿ��
-> �Լ� �̸� : �Լ��� ȣ���ϱ� ���� �̸�
-> �Ű�������(parameters) : �Լ� ȣ�� �ÿ� ���޵Ǵ� �μ��� ���� ������ ������
-> �Լ� Body : ���ɹ��� ����

- �Լ��� ����(prototype) ����
-> C��� = ���� �н�(one pass) ������ ��� = ���ʴ�� �� ���� ������ = ��ġ�� ���� �ۼ��� �ڵ尡 ���� �� �� �� �ִ�.
-> main() �Լ� �տ� �̸� �����ϸ� �Լ��� ��� ��ġ���� ������ �ϵ� ��� ���� �ȴ�.  
*���� �н�(multi-pass) ��� = �����Ϸ��� ���� ���� ���� ���� ������




������ ��ȿ����(variable scope) 
- ������ ���� ��ġ�� ���� �ش� ������ ��ȿ ����, �޸� ��ȯ �ñ�, �ʱ�ȭ ����, ����Ǵ� ��� ���� ����
- ������ ���� ���� : ���� ����(local variable), ���� ����(global variable), ���� ����(static variable), �������� ����(register variable)
- ���� ����(local variable) : '����' ������ ����� ���� / ���� �������� ��ȿ�ϸ�, ������ ����Ǹ� �޸𸮿��� ����� /   �޸𸮻��� ����(stack) ������ ���� / �ʱ�ȭ���� ������ �ǹ� ���� ��(�����Ⱚ)���� �ʱ�ȭ / (ex)�Լ��� �Ű�����
- ���� ����(global variable) : �Լ��� �ܺο��� ����� ���� /  ���α׷��� ��𿡼��� ���� / ���α׷��� ����Ǿ�߸� �޸𸮿��� ����� / �޸𸮻��� ������(data) ������ ���� / ���� �ʱ�ȭ���� �ʾƵ� 0���� �ڵ� �ʱ�ȭ
- ���� ����(static variable) : static Ű����� ������ ���� / ���� ������ ���� ������ Ư¡�� ��� ���� / �Լ� ������ ����� ���� ������ ���� ����ó�� �� �� ���� �ʱ�ȭ�Ǹ�(�ʱ�ȭ�� ���� ���� �� �� �ѹ��� �����), ���α׷��� ����Ǿ�� �޸𸮻󿡼� ����� +  ���� ����ó�� �ش� �Լ� �������� ����  
- �������� ����(register variable) : ���� ������ ������ �� register Ű���带 �ٿ� ������ ���� /  CPU�� ��������(register) �޸𸮿� ����Ǿ� ������ ���� /  �������ʹ� �ſ� ���� ũ���� �޸� -> ������ ������ �����ϱ� ���� ����� -> C �����Ϸ��� �ش� ������ �׳� ���������� ���� 




���ȣ��(recursive call)
- �Լ� ���ο��� �Լ��� �ڱ� �ڽ��� �Ǵٽ� ȣ���ϴ� ����
- ��� ȣ���� �ڱⰡ �ڽ��� ����ؼ� ȣ���ϹǷ�, ������ �ݺ� -> �Լ� ���� ��� ȣ���� �ߴ��ϵ��� ������ ����� ���ɹ��� �ݵ�� ����
- ��� ȣ���� �˰������̳� �ڷ� �����п����� �ſ� �߿��� ���� �� �ϳ� - ��� ȣ���� ����ϸ� ������ ������ �ſ� �����ϰ� ���������� �����Ͽ� ǥ������
- ���ȣ���� ���� : �ڵ��� ������
- ���ȣ���� ���� : ���� ���ȣ���� ���輺, ���� ���� ����

*�ǻ� �ڵ�(pseudo code) = Ư�� ���α׷��� ����� ������ ���� �ۼ��� ���� �ƴ�, �Ϲ����� ���� �˰������� ǥ���� �ڵ�



Memory����
- C ���α׷��� �ü���κ��� �Ҵ�޴� ��ǥ���� �޸� ����
- �ڵ�(code), ������(data) ����, ����(stack) ����, ��(heap) ����



*/


int main(void)
{
	int num = 3;  

	if (num < 5)
	{
	    printf("num<5\n\n");
	}

	if (num == 5)
	{
	    printf("num==5\n\n");
	}

	if (num > 5)
	{
	    printf("num>5\n\n");
	}	
	
	printf("======================\n\n");
	
	int num1 = 10;  

	if (num1 < 5)
	{
	    printf("num1<5\n\n");
	}

	else
	{
	    if (num1 == 5)
	    {
	        printf("num1==5\n\n");
	    }
	    
	    else
	    {
	        printf("num1>5\n\n");
	    }
	}
	
	printf("======================\n\n");

	int num2 = 15;  

	if (num2 < 5)
	{
	    printf("num2<5\n\n");
	}

	else if (num2 == 5)
	{
	    printf("num2==5\n\n");
	}

	else
	{
	    printf("num2>5\n\n");
	}	
	
	printf("======================\n\n");
	
	int num3 = 2;  

	switch (num3)
	{
	    case 1:
	        printf("num3 = 1\n");
	        break;
	    case 2:
	        printf("num3 = 2\n");
	        break;
	    case 3:
	        printf("num3 = 3\n");
	        break;
	    case 4:
	        printf("num3 = 4\n");
	        break;
	    case 5:
	        printf("num3 = 5\n");
	        break;
	    default:
        	printf("num3 = 1 ~ 5\n");
	        break;
	}
	
	printf("\n======================\n\n");
	
	char ch = 'a';  

	switch (ch)
	{
	    case 'a':
	    case 'A':
	        printf("ch = 'a' or 'A'\n\n");
	        break;

    	case 'b':
	    case 'B':
	        printf("ch = 'b' or 'B' \n\n");
	        break;

    	case 'c':
	    case 'C':
	        printf("ch = 'c' or 'C' \n\n");
	        break;

	    case 'd':
    	case 'D':
	        printf("ch = 'd' or 'D' \n\n");
	        break;

    	case 'f':
	    case 'F':
	        printf("ch = 'f' or 'F' \n\n");
	        break;

	    default:
	        printf("ch = a, b, c, d, f \n");
	        break;
	}
	
	printf("\n============================================\n\n");
	
	int i = 0;
	int num4 = 5;  

	while (i < num4)
	{
	    printf("%d��° �ݺ�\n", i + 1);
	    i++; // �� �κ��� �����ϸ� ���� ������ ������ ��
	}

	printf("result = %d\n", i);
	
	printf("\n============================================\n\n");
	
	int i1 = 0;
	int num5 = 3;  

	do
	{
	    printf("%d ��° �ݺ�\n", i1 + 1);
	    i1++;
	} while (i1 > num5);

	printf("result = %d\n", i1);
	
	printf("\n============================================\n\n");
	
	int i2;
	int num6 = 7;  

	for (i2 = 0; i2 < num6; i2++)
	{
	    printf("%d ��° �ݺ�\n", i2 + 1);
	}

	printf("result = %d\n", i2);
	
	printf("\n============================================\n\n");
	
	int i3;
	int except_num = 3;  

	for (i3 = 1; i3 <= 100; i3++)
	{
	    if (i3 % except_num == 0)
	    {
	        continue;
	    }
    	printf("%d\n", i3);
	}
	
	printf("\n============================================\n\n");
	
	int x, y; 

	for (x = 2; x <= 5; x++)
	{
	    for (y = 1; y <= 9; y++)
	    {
	        printf("%d * %d = %d\n", x, y, x * y);
	        if (x == y)
	        {
	            printf("\n");
	            break;
	        }
	    }
	} 
	
	printf("\n============================================\n\n");

	int bigNum(int num01, int num02) // �Լ��� ����
	{
	    if (num01 >= num02)
	    {
	        return num01;
	    }

	    else
    	{
        	return num02;

    	}
	}


    int result;  

    result = bigNum(3, 5); // �Լ��� ȣ��
    printf("�� ū��= %d\n", result);
    result = bigNum(3, 1); // �Լ��� ȣ��
    printf("�� ū��= %d\n", result);
    result = bigNum(7, 5); // �Լ��� ȣ��
    printf("�� ū��= %d\n", result);
    
    printf("\n============================================\n\n");
    
    int sum(int n) 
	{
    	int i;
	    int result = 0;

	    for (i = 1; i <= n; i++)
	    {
	        result += i;
	    }
	
		printf("%d\n\n", result);
	    return result;
	}
	
	int a = 5;
	sum(a);//1+2+3+4+5 = 15
	
	int rSum(int n)
	{
	    if (n == 1)           // n�� 1�̸�, �׳� 1�� ��ȯ��.
	    {
          return 1;
	    }

    	return n + rSum(n-1); // n�� 1�� �ƴϸ�, n�� 1���� (n-1)������ �հ� ���� ���� ��ȯ��.
	}
	
	rSum(5); //1+2+3+4+5 = 15
	printf("%d\n\n", rSum(5));

	return 0; 
}