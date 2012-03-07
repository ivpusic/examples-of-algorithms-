#include<iostream>
using namespace std;

bool pretrazivanje(int polje[], int n, int i, int j){
     if((j-i)<=0){
                  if(i==j && polje[i] == n ) return true;
                  else return false;
                  }
                  
     else{
          int k = (i+j)/2;
          if(polje[k]==n) return true;
          if(polje[k]<n) return pretrazivanje(polje,n,k+1,j);
          if(polje[k]>n) return pretrazivanje(polje,n,i,k-1);
          }
     
     }

int main(){
    int K[] = {1,2,3,4,5,6,7,8,9};
    int n;
    cout<<"Unesite trazeni broj: ";
    cin >> n; 
    if(pretrazivanje(K, n, 0, 9)) cout<<"ima "<<endl;
    else cout<<"nema "<<endl;
    system("pause");
    return 0;
}
