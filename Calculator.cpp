#include<iostream>
using namespace std;
int main(){
    int a,b;
    //Taking inputs
    cout<<"Enter value of a:"<<endl;
    cin>>a;
    cout<<"Enter value of b:"<<endl;
    cin>>b;

    char c;
    cout<<"Enter the Operator"<<endl;
    cin>>c;
    
    if(c == '+')
        {
            cout<<"Addition="<<a+b<<endl;
        }

    else if(c == '-')
        {
            cout<<"Subtraction="<<a-b<<endl;
        }

    else if(c == '*')
        {
            cout<<"Multiplication="<<a*b<<endl;
        }

    else if(c == '/')
        {
            cout<<"Division="<<a/b<<endl;
        }

    else
        {
            cout<<"Invalid Operation";
        }


    return 0;
}