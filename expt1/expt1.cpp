#include<iostream>
#include<string.h>
#define MAX_STRING_LEN 80

using namespace std;

int main()
{
	char ch=0;
	cout<<"Enter the Expression:";
	do
	{
		cin>>ch;
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
				cout<<ch<<"  is an Identifier\n";
		switch (ch)
		{
			
			case '+':cout<<ch<<"  is an Operator\n";
			break;
			case '=':cout<<ch<<"  is an Operator\n";
			break;
			case '-':cout<<ch<<"  is an Operator\n";
			break;
			case '/':cout<<ch<<"  is an Operator\n";
			break;
			case '*':cout<<ch<<"  is an Operator\n";
			break;
									
		}
	}while(ch!=';'&& ch!=' ');
		cout<<"; / ' ' is a Delimeter";
return 0;
}
			
