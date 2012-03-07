#include <iostream>
using namespace std;

float Pivot(float [],int,int);

void QSort(float A[], int i, int j) {
     int I=0, J=j-I;
     float P = Pivot(A,i,j);
     while (I<J) {
           while (A[I]<P) I++;
           while (A[J]>P) J--;
           if (A[I]!=A[J]) {
              float pom = A[I];
              A[I] = A[J];
              A[J] = pom;
           }
           else if (I!=J) I++;
     }
     if (i<I-1) QSort(A,i,I-1);
     if (j>I+1) QSort(A,I+1,j);
}

float Pivot(float A[],int i, int j) {
      int k = j-i;
      int ind = rand()%k + i;
      return A[ind];
}

void QSort(float A[],int N) {
     QSort(A,0,N-1);
}


int main () {
    int N, I;
    srand(time(0));
    do {
       cout << "N = ";
       cin >> N;
    } while (N < 2 && N > 1000);
    float *A = new float [N];
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    QSort(A,N);
    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
    cout << endl;
    system("pause");
    delete []A;
    return 0;
}
