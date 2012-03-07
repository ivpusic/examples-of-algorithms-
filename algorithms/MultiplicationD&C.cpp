#include<iostream>
using namespace std;

int Multiply(int a, int power)		
{
    if(power==1)			  
                     return a;
    else
    {
        int x=Multiply(a,power/2);	   
        if(power%2){
                     cout<<"x: "<<x<<endl;
                     cout<<"a: "<<a<<endl;		
             return x*x*a;
             }
        else					
             return x*x;
    }
}

int main()
{
    cout<< Multiply(3,7) << endl; 
    
    system("pause");
    return 0;
}
