#include<iostream>
using namespace std;

int binary_search(int a[], int n, int e, int key){
    if(n > e) return -1;

    int mid = (n + e)/2;
    if(*(a + mid) == key ) return mid;

    if(*(a + mid) > key) return binary_search(a, n, mid-1, key);

    if(*(a + mid) < key) return binary_search(a, mid+1, e, key);
}

int main(){
    int n = 4668;
    int a[] = {3, 11, 7, 9, 34, 4668, 8888, 1411, 5, 3469, 56};

    int size = sizeof(a)/sizeof(int);

    cout << binary_search(a, 0, size-1, n);

    return 0;
}
