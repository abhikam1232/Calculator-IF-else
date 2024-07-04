#include <iostream>
using namespace std;
    int main(){
        // This is a program to build the calculator using if - else
        int a;
        int b;
        char op;
        cout<<" Enter the problem:- "<<endl;
    
        cin>>a>>op>>b;

        if( op == '+'){
            cout<<a+b<<endl;
        }
         if ( op == '-'){
            cout<<a-b<<endl;
        }
         if( op == '*'){
            cout<<a*b<<endl;
        }
         if ( op == '/'){
            cout<<a/b<<endl;
        }
        return 0;

    }