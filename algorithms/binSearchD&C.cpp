#include<iostream>
using namespace std;

bool BinSearch(float P[], float K, 
               int i, int j) {
     if (j-i <= 0)
        if (i==j && P[i] == K) 
           return true;
        else
            return false;
     else {
         int k = (i+j)/2;
         if (P[k]>K)
            return BinSearch(P,K,i,k-1);
         if (P[k]==K)
            return true;
         if (P[k]<K)
            return BinSearch(P,K,k+1,j);
     }
}


int main()
{
    int N, k;
    float A[1000], K;
    do {
       cout << "N = ";
       cin >> N;
    } while (N < 2 && N > 1000);
    for (int i = 0; i < N; i++) {
        cout << "A[" << i 
             << "] = ";
        cin >> A[i];
    }
    cout << "K = ";
    cin >> K;
    if (BinSearch(A,K,0,N-1))
       cout << "Broj se nalazi u nizu";
    else 
        cout << "Broj se ne nalazi u nizu";
    cout << endl;

    system("pause");
    return 0;
}
