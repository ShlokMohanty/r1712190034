#include<iostream>
using namespace std;
class twostacks{
	int *arr;
	int size;
	int top1;
	int top2;
	public:
	twostacks(int x)
	{
		size=n;
		arr=new arr[int n];
		top1=-1;
		top2=size;
	}
	void push1(int x)
	{
		if(top1<top2-1)
		{
			top1++;
			arr[top1]=x;
		}
		else {
			cout<<"stack overflow"<<"\n";
			exit(1);
		}
	}
	void push2()
	{
		if(top1<top2-1)
		{
			top2--;
			arr[top2]=x;
		}
		else
		{
			cout<<"stack overflow"<<"\n";
			exit(1);
		}
	}
	int pop1()
	{
		if(top1>=0)
		{
			int x=arr[top1];
			top1--;
			return x;
		}
		else 
		{
			cout<<"stack underflow"<<"\n";
			exit(1);
		}
	}
	int pop2()
	{
		if(top2<size)
		{
			int x=arr[top2];
			top2++;
			return x;
		}
		else 
		{
			cout<<"stack underflow"<<"\n";
			exit(1);
		}
	}
};
int main()
{
	twostacks ts(5);
	ts.push1(5);
	ts.push2(10);
	ts.push2(15);
	
	cout<<"pop an element from stack1: "<<ts.pop1()<<"\n";
	ts.push2(40);
	cout<<"pop an element from stack2: "<<ts.pop2()<<"\n";
return 0;
}
