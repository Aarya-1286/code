
#include <iostream>

using namespace std;

int main()
{
    char button;
   
    cin>>button;
    switch(button)
    {
        case 'a':
                cout<<"Hello"<<endl;
                break;
        case 'b':     
                cout<<"ciao"<<endl;
                break;
        case 'c':
                cout<<"Namaste"<<endl;
                break;
        default:
                cout<<"I am still learning"<<endl;
                break;
                
    }
}
