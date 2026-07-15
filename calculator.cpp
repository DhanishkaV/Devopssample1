#include<iostream>
int main()
{
	int a,b,c;
	cout<<"enter operand , operator 1 and operator 2:";
	cin >> c>>a>>b;
	switch(c)
	{
		case '+':
			cout<<(a+b);
			break;
		case '-':
			cout<<(a-b);
			break;
		case '*':
			cout<<(a*b);
			break;
		case '/':
			cout<<(a/b);
			break;
		default:
			cout<<"invalid";
	}
	return 0;
}


