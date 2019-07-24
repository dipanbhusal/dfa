// Implementation of moore machine by converting '01' string into 'a' and else into 'b'
#include<iostream>
using namespace std;
void moore(char s[]);
int main()
{
	char string[100];
	cout <<"Enter the binary string\n";
	cin >> string;
	moore(string);
	return 0;
}
void moore(char s[])
{
	int i=0, state=0;
	cout <<endl;
	do
	{
		switch(state)
		{
			case 0:
				//cout <<"b");
				if (s[i]=='0')
				{
					state=1;
				}
				else
				{
				cout <<"b";
					state=0;

				}
				i++;
				break;
			case 1:
				//cout <<"b");
				if (s[i]=='0')
				{
					state=1;

				}
				else
				{
					state=2;
					cout <<"a";
				}
				i++;
				break;
			case 2:
				//cout <<"a");
				if (s[i]=='0')
				{
					state=1;
				}
				else
				{
					state=0;
					cout <<"b" << endl;
				}
				i++;
				break;
			default:
				break;
		}
	}while(s[i] != '\0');
}
