#include<iostream>

using namespace std;

void F(int a[]){
    cout << sizeof(a)/sizeof(int) << endl;
};

void T(int a[100]){
    cout << sizeof(a)/sizeof(int) << endl;
};

int main(){
    int a[24];
    cout <<sizeof(a)/sizeof(int) << endl;
    F(a);
    T(a);
    return 0;
}
