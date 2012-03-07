#include<iostream>
using namespace std;

int main()
{
    cout<<"Broj kuglica: ";
    int n;
    cin >> n;
    int p[n];
    for(int i = 0; i < n; i++)
    {
            if(i <= n/2) p[i] = 1;
            else p[i] = 0;
    }
 
    int ind = 0;
    int zamj = 1;
    while(zamj < n)
    {
            while(p[ind] == 1) ind++;
            int pom = p[zamj];
            p[zamj] = p[ind];
            p[ind] = pom;
            zamj += 2;
    }
    
    for(int i=0;i<n;i++)
    {
            cout << p[i] << " ";
    }
    cout<<endl;
    system("pause");
    return 0;
}
