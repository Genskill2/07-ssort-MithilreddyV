#include <stdio.h>

void swap_max(int a[], int l, int n) {
    int d = a[n];
    int e=0;
    for (int i=n; i<l; i++) {
        if (a[i] > d) {
            d = a[i];;
            e = i;
        }
    }
    if (d!=a[n]) {
        a[e] = a[n];
        a[n] = d;
    }
}

void ssort(int p[], int m) {
    for (int i=0;i<m-1;i++) {
        swap_max(p,m,i);
    }
}
