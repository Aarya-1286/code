#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Input 2 numbers: ";
    cin>>a>>b;
    
    char op;
    cout<<"Input the operator: ";
    cin>>op;
    
    switch(op)
    {
        
    
    
    case '+':
            cout<<a+b<<endl;
            break;
    case '-':
            cout<<a-b<<endl;
            break;
    case '*':
            cout<<a*b<<endl;
            break;
    case '/':        
            cout<<a/b<<endl;
            break;
    default:
    cout<<"I am still working."<<endl;
    break;
    }
    
    return 0;
}
