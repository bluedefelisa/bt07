#include<iostream>

using namespace std;

int* weird_sum(int a, int b) {

    int c;

    c = a + b;

return &c;

}
int main(){
   // int *pX;
//loi con tro chua khoi tao
    int *pX = NULL;
    *pX = 0;
    cout << p << ' '<<*p << endl;
//loi truy nhap con tro null

    cout << weird_sum(3, 7)<< endl;



    int* ptr1 = new int;
    int* ptr2 = new int;
    ptr1 = ptr2;
    cout << ptr2<<endl;
    // loi that thoat bo nho

    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    cout << *p2;
    // giai phong bo nho qua som
    return 0;
}
