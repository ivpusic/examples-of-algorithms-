#include<iostream>
using namespace std;
int stringMatching(char niz[], char niz1[]){
    int a = strlen(niz);
    int b = strlen(niz1);
    int j;
    for(int i=0;i<=a-b;i++){
            j=0;
            while(j<b && niz1[j] == niz[j+i]){
                       j++;
                       }
            if(j == b) return i;
            }
    return -1;
    
}
int main(){
    int n;
    char niz[50],niz1[50];
    
    cout<<"Unesite prvi string: ";
    cin.getline(niz,sizeof(niz));
    cout<<"Unesite string(kljuc): ";
    cin.getline(niz1,sizeof(niz1));
    
    n = stringMatching(niz,niz1);
    if(n!=-1) cout<<"Podstring je pronadjen, i pocetak mu se nalazi na indeksu "<<n<<"!"<<endl;
    else cout<<"Podstring nije pronadjen!!!"<<endl;
    
    system("pause");
    return 0;
}
