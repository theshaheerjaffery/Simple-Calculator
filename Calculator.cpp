#include <iostream>
using namespace std;
int main() {

float num1;
float num2;
char operation;
float result;

cout<<"Enter a simple equation"<<endl;
cin>>num1>>operation>>num2;

int sum=num1+num2;
int sub=num1-num2;
int mul=num1*num2;
float divide=num1/num2;

if(operation=='+')
{
    cout<<sum;
}

else if(operation=='-')
{
    cout<<sub;
}

else if(operation=='*')
{
    cout<<mul;
}

else if(operation=='/')
{
    cout<<divide;
}

else 
{
    cout<<"Invalid operator";
}

    return 0;
}