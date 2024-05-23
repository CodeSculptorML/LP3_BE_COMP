/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Write a program RECURSIVE and NON-RECURSIVE to calculate fibonacci numbers.

#include <iostream>
using namespace std;
void fib_non_recursive(int num)
{
    cout<<"USING NON RECURSIVE APPROACH"<<endl;
    int n1=0,n2=1,i,n3;
    cout<<n1<<" "<<n2<<" ";
    for(i=2;i<=num;i++)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
}
int fib_recursive(int num)
{
   if(num<=1)
     return num;
    return fib_recursive(num-1)+fib_recursive(num-2);
}

int main()
{
    int num;
    cout<<"Enter number of elements in fibonacci series : ";
    cin>>num;
    fib_non_recursive(num);
    cout<<endl<<"USING RECURSIVE APPROACH : "<<num+1<<"th element"<<endl;
    int result;
    result=fib_recursive(num);
    cout<<result;
    return 0;
}

