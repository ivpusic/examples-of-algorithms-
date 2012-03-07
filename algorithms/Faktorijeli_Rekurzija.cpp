#include<iostream>
using namespace std;

int Fakt(int n){
    if(n==1) return 1;
    else return Fakt(n-1)*n;
}

int main(){
    int n;
    cout<<"Unesite n: ";
    cin >> n;
    cout<<Fakt(n)<<endl;
    system("pause");
    return 0;
}
