// Implementation of mealy machine by converting '01' string into 'a' and else into 'b'
#include<iostream>
#include<string.h>
using namespace std;
void mealy(char s[]);
int main()
{
	char strin[100];
	cout << "Enter the binary string\n";
	cin >>strin;
	mealy(strin);
	return 0;
}
void mealy(char s[])
{
	int i=0, state=0;
	cout <<"\n";
do
	{
		switch(state)
		{
			case 0:
				if (s[i]=='0')
				{
					state=1;
				}
				else
				{
					state=0;
				}
				cout << "b";
				i++;
				break;
			case 1:
				if (s[i]=='0')
				{
					cout<<"b";
					state=1;
				}
				else
				{
					cout << "a"<<endl;
					state=2;
				}
				i++;
				break;
			case 2:
				if (s[i]=='0')
				{
					state=1;
				}
				else
				{
					state=0;
				}
				cout<<"b";
				i++;
				break;
			default:
				break;
		}
	}	while(s[i] != '\0');
}
