/* Design dfa to implement the binary string starting with 0 and ending with 1 */
#include<iostream>
#include<string.h>
using namespace std;
class dfa{
    int state = 0;
    int table[4][2] ={{1,3}, {1,2}, {1,2},{3,3}}; // for transition table

    public:
    /*Function for checking if string is binary */
     int check_binary(string input)
    {
    int i;

    for(i = 0; i < input.length(); i++)
    {
        if(input[i] != '0' && input[i] !='1')
        {
            cout<<"Error.... Enter binary strings only. ";
            return false;
        }
    }
    return true;
    }

    /*Function for checking state of string */
    int check_state(string input)
    {
    for(int i = 0; i < input.length(); i++)
    {
    cout << "q(" <<state <<","<<input[i]<<")"<<"-->q"; //Shows transition
    state = table[state][input[i]-'0']; //  -'0' is for changing char to integer
    cout << state<<endl;
    }
    return state;
    }
};

int main()
{
    string input;
    dfa df; //object declaration
    cout << "Enter the string starting with 0 and ending with 1: "<< endl;
    cin >> input;
    cout << input;
    if(df.check_binary(input) == true){
        cout <<"Transitions: \n";
        int state= df.check_state(input);
        if(state == 2)
        cout <<"String accepted";
        else
        cout<<"String rejected";
    }
    return 0;
}
