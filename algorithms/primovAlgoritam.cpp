#include<iostream>
#define MAXINT 32767
using namespace std;

int N, k, l, tr[20][2], nears[20], mincost=0, cost[20][20];

void ucitaj(){
     int min = MAXINT;
     cout<<"Unesite broj vrhova: ";
     cin >> N;

     for(int i=0;i<N;i++){
             for(int j=0;j<N;j++){
                     cost[i][j] = MAXINT;
                     }
             }
             
     for(int i=0;i<N;i++){
             for(int j=0;j<N;j++){
                     if(i!=j && i<j){
                             cout<<"Unesite udaljenost izmedju cvorova: "<<i<<" i "<<j<<endl;
                             cin >> cost[i][j];
                             cost[j][i] = cost[i][j];
                             if(cost[i][j] <min){
                                           min = cost[i][j];
                                           k = i;
                                           l = j;
                                           mincost = min;
                                           }
                             }
                     else cost[i][i] = 0;
                     }//for(j)
             }//for(i)
     
     }
int najmanji(){
    int ind;
    int min = MAXINT;
    for(int i=0;i<N;i++){
            if(nears[i] != -1 && cost[i][nears[i]] < min){
                        min = cost[i][nears[i]];
                        ind = i;
                        } 
            }
    return ind;
}
     
int main(){
    ucitaj();
    
    tr[0][0] = k;
    tr[0][1] = l;
    
    for(int i=0;i<N;i++){
            if(cost[i][k] > cost[i][l]) nears[i] = l;
            else nears[i] = k;
            }
    nears[k] = -1;
    nears[l] = -1;
    
    for(int i=1;i<N;i++){
            int j;
            j = najmanji();
            tr[i][0] = j;
            tr[i][1] = nears[j];
            mincost += cost[j][nears[j]];
            nears[j] = -1;
            for(int k=0;k<N;k++){
                    if(nears[k] != -1 && cost[k][nears[k]] > cost[k][j]) nears[k] = j;
                    }
            }
    cout<<"OUTPUT"<<endl;
    for(int i=0;i<N-1;i++)
	{
	cout<<tr[i][0]<<" "<<tr[i][1]<<"\n";
	}
  cout<<"Minimalni trošak = "<<mincost<<endl;
    
    
    system("pause");
}
