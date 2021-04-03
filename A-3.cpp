#include<iostream>

using namespace std;

void count_even(int* a, int n)
{
    int count = 0;
    for(int i = 0; i < 5; i++)
    {
        if( *(a+i) % 2 == 0 ) count++;
    }
    cout << "So so chan trong 5 phan tu dau: "<< count;
    cout << endl;
    count = 0;
    for(int i = n-1; i > n-1-5; i--)
    {
        if( *(a+i) % 2 ==0 ) count++;
    }
    cout <<"So so chan trong 5 phan tu cuoi:"<< count;
}

int main(){
    int a[]={32,33,54,37,2,64,3,8,345,9,24,67,22,57,246,235,142,145};
    count_even(a, sizeof(a)/sizeof(int));
    return 0;
}


