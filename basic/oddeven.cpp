#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    if (n%2==0)
    {
        cout<<"Number is even:"<<endl;
    }
    else{
        cout<<"Number is Odd:"<<endl;
    }
    return 0;
}