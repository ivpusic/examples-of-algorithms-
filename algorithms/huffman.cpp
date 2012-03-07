#include<iostream>
#define FDIM 1000
using namespace std;

struct element {
	int value, child, sibling;
};

struct forest {
	int begin;
	element f[FDIM];
};

void InitForest(int n, forest *s, int a[]) {
    for (int i=0; i<n; i++) {
		(*s).f[i].value=a[i];
		(*s).f[i].sibling= i+1;
	}
	(*s).f[n-1].sibling=-1; // lambda vrijednost
	(*s).begin=0;
}
void Huffman(int n,forest *s) {
     while ((*s).f[(*s).begin].sibling != -1) {
           // kreiranje novog stabla
          (*s).f[n].value=(*s).f[(*s).begin].value + (*s).f[(*s).f[(*s).begin].sibling].value;
           (*s).f[n].child=(*s).begin;
           // brisanje dvaju stabala
           int st;
           (*s).begin=(*s).f[(*s).f[(*s).begin].sibling].sibling; // moze biti -1!
           (*s).f[(*s).f[(*s).f[n].child].sibling].sibling=-1;
           // kreiranje nove šume
           if ((*s).f[n].value < (*s).f[(*s).begin].value) {
              (*s).f[n].sibling=(*s).begin;
              (*s).begin=n;
           }
                      // kreiranje nove šume
           if ((*s).f[n].value < (*s).f[(*s).begin].value) {
              (*s).f[n].sibling=(*s).begin;
              (*s).begin=n;
           }
           else {
                int i=(*s).begin;
                while ((*s).f[i].sibling!=-1 && 
                          (*s).f[(*s).f[i].sibling].value<(*s).f[n].value)
                                i=(*s).f[i].sibling;
                (*s).f[n].sibling=(*s).f[i].sibling;
                (*s).f[i].sibling=n;
           }
           n++;
     }
}

int main(){
    
    system("pause");
    return 0;
}
