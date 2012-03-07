#include<iostream>
using namespace std;

struct rel{
       float relativ;
       int ind;
       };
int e[100][2];
int n,V;

void relVrj(rel relative[])
{
     for(int i=0;i<n;i++)
     {
             relative[i].relativ = e[i][0]/e[i][1];
             relative[i].ind = i;
     }
}

void sort(rel relative[])
{
     for(int i=n-1;i>0;i--)
     {
             for(int j=0;j<i;j++)
             {
                     if(relative[j].relativ < relative[j+1].relativ)
                     {
                                            rel pom = relative[j];
                                            relative[j] = relative[j+1];
                                            relative[j+1] = pom;
                     }
             }
      
     }
}

void Knapsack(rel relative[], int p[])
{
     for(int i=0;i<n;i++)
     {
             while(V > e[relative[i].ind][1])
             {
                     V-= e[relative[i].ind][1];
                     p[relative[i].ind]++;
             }
     }
}


int main()
{

    cout<<"Koliko stvari zelite unijeti? ";
    cin >> n;
    
    rel relative[n];
    int p[n];
    for(int i=0;i<n;i++)
    {
            p[i] = 0;
            cout<<"Cijena stvari "<<i+1<<": ";
            cin >> e[i][0];
            cout<<"Volumen stvari "<<i+1<<": ";
            cin >> e[i][1];
    }
    cout<<"Unesite volumen: ";
    cin >> V;
    relVrj(relative);
    sort(relative);
    Knapsack(relative, p);
    
    for(int i=0;i<n;i++)
    {
            cout<< p[i] << " ";
    }
    cout<<endl;
    
    system("pause");
    return 0;
}
