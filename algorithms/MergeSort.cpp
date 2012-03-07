#include <iostream>
using namespace std;

void Spoji(float A[],int i,int k,int j) {
     int I=i, J=k+1, K=0;
     float *B = new float [j-i+1];
     while (I<=k && J<=j)
           if (A[I]<=A[J])
              B[K++]=A[I++];
           else 
                B[K++]=A[J++];
     if (I>k)
        while (J<=j)
              B[K++] = A[J++];
     else
         while (I<=k)
               B[K++] = A[I++];
     for (int I=0;I<=j-i;I++) 
         A[i+I]=B[I];
     delete []B;
}

void MSort(float A[],int i, int j) {
     if (i<j) {
        int k=(i+j)/2;
        MSort(A,i,k);
        MSort(A,k+1,j);
        Spoji(A,i,k,j);
     }
}

void MSort(float A[],int N) {
     MSort(A,0,N-1);
}

int main () {
    int N, I;
    do {
       cout << "N = ";
       cin >> N;
    } while (N < 2 && N > 1000);
    float *A = new float [N];
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    MSort(A,N);
    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
    cout << endl;
    delete []A;
    system("pause");
    return 0;
}
