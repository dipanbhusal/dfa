#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class dfa{
    public:
    string input;

    int check_digits(string input)
    {

        if (input.length() != 10)
        {
            cout  << "Error..... Please enter the phone number of length 10."<<endl<<endl;
            return false;

        }
        return true;
    }
    void check_dfa(string input)
    {

        string first_3 = input.substr(0,3);
        if (first_3 == "984" || first_3 == "986")
        {
            cout << "The phone number is valid as NTC and accepted. "<<endl;
        }
        else
            cout <<"The phone number is not of NTC and not accepted" << endl;
    }
};
int main()
{
    string input;
    char choice;
    dfa checking;
    do{
    cout<<"Enter valid NTC phone number of length 10: ";
    cin >>input;
    if (checking.check_digits(input) == true)
    {
        cout <<"Now checking for DFA " <<endl;
        checking.check_dfa(input);
    }
    cout<< "Enter the number again? y/n  ";
    cin >> choice;
    }while(choice!= 'n');
    exit(0);
}
