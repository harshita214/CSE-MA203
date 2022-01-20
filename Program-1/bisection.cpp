
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define er 0.01
 
double func(double x)
{
    return  x*log10(x) - 1.2 ;
}
 
void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }
 
    double c = a;
    while ((b-a) >= er)
    {
        
        c = (a+b)/2;
 
        
        if (func(c) == 0.0)
            break;
 
        
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}
 

int main()
{
    
    double a, b;
    cout<<"Enter first guess: ";
     cin>>a;
     cout<<"Enter second guess: ";
     cin>>b;
    
    bisection(a, b);
    return 0;
}



/* 
Output Answer

Enter first guess: 2
Enter second guess: 3
The value of root is : 2.74219 
*/
