#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE	1
#define FALSE	0
#define STACK_LEN	100

typedef int Data;

typedef struct _arrayStack
{
	Data stackArr[STACK_LEN];
	int topIndex;
} ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack * pstack);	//�����ʱ�ȭ.
int SIsEmpty(Stack * pstack);	//������ ���� true, �ƴϸ� false 

void SPush(Stack * pstack, Data data); //���ÿ� ������ ����.
Data SPop(Stack * pstack);	//������ ������ ������ ��ȯ �� ����
Data SPeek(Stack * pstack);	//������ ������ ������ ������

#endif