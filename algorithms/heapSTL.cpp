#include<iostream>
using namespace std;

int main(){
    int brojevi[] = {2,6,5,4,23,65,23,76,34,12,54,123,76,34,76,3,123,4};
    make_heap(brojevi, brojevi + sizeof(brojevi)/4);
    sort_heap(brojevi, brojevi + sizeof(brojevi)/4);
    for(int i=0;i<sizeof(brojevi)/4;i++){
            cout<<brojevi[i]<<" ";
            }
            cout<<endl;
    system("pause");
    return 0;
}
