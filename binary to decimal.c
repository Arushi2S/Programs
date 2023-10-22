#include<stdio.h>
#define max 10
int stk[max], top=-1;
void push(int x);
int pop();
void bintodec(int n);
void main()
{
	int n;
	printf("\n Binary No:");
	scanf("%d",&n);
	bintodec(n);
}
void push(int x)
{
	// Check Overflow	// if not push the element into the stack
	stk[++top]=x;
}
int pop()
{
	// Check Underflow	// if not pop the element from the stack
	return (stk[top--]);
}
void bintodec(int n)
{
	int rem, dec_value, base = 1;
    while(n)
    {
        rem = n % 10;
        n = n / 10;
        dec_value += rem * base;
        base = base * 2;        
        push(dec_value);
    }
    printf("Decimal No: %d", pop());
}
