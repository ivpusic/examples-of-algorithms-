#include<iostream>
using namespace std;

void Euklid(int a, int b){
     if(b==0) cout<<"NZM: "<<a<<endl;
     else Euklid(b,a%b);
     }

int main(){
    cout<<"Unesite brojeve: "<<endl;
    int a,b;
    cin >> a >> b;
    Euklid(a,b);
    system("pause");
}
