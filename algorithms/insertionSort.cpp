#include <iostream>
using namespace std;
int main () {
    int N;
    float A[1000];
    do {
       cout << "N = ";
       cin >> N;
    } while (N < 2 && N > 1000);
    
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    
    //insertion sort...
    
    for (int i = 1; i < N; i++) {
        int j = i-1;
        float pom = A[i];
        while (j >= 0 && A[j] > pom)
              A[j+1] = A[j--];
        A[j+1] = pom;
    }
    
    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
        
    cout << endl;
    system("pause");
    return 0;
}
