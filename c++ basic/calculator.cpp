//implement a simple calculator using switch
#include<iostream>
using namespace std;

 int main(int argc, char const *argv[])
{
    float n1,n2;
    cout<<"Input two numbers:"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Input an operator";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;            
    
    default:
        cout<<"ERROR"<<endl;
        break;
    }

    return 0;
}
