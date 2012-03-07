#include<iostream>
using namespace std;

void Hannoi(int a, int b, int n)
     {
                if(n>1){
                        Hannoi(a,6-a-b,n-1);
                        cout<<a<<" -> "<<b<<endl;
                        Hannoi(6-a-b,b,n-1);
                        }
                else cout<<a<<" -> "<<b<<endl;
     }

int main(){
    int n;
    cout<<"Unesite broj kolutova: ";
    cin >> n;
    Hannoi(1,3,n);
    system("pause");
    return 0;
}
