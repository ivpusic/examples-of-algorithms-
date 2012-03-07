#include<iostream>
using namespace std;

int Fibonnaci(int n){
    if(n<=1) return n;
    else return Fibonnaci(n-1)+Fibonnaci(n-2);
}

int main(){
    
    for(int i = 9; i <= 36; i++)
    {
            cout << Fibonnaci(i) << endl;
    }
    
    system("pause");
    return 0;
}
