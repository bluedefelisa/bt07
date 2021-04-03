#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int DoXucXac(){
    return rand()%6+1;
}
void CachA(int n1, int n2)
{
     while(n1<100 && n2<100){
        int xx1 = DoXucXac(), xx2= DoXucXac();
        cout << "xuc sac nguoi choi 1: "<<xx1<<"              "<<"Tong nguoi choi 1: "<< n1+xx1<<endl;
        cout << "xuc sac nguoi choi 2: "<<xx2<<"              "<<"Tong nguoi choi 2: "<< n2+xx2<<endl;
        n1=n1+xx1; n2=n2+xx2;
    }
}
void CachB(int n1, int n2)
{
     while(n1 < 100 && n2 < 100){
            int xx1 = DoXucXac(), xx2 = DoXucXac();
        if(n1 < n2){
            cout << "xuc sac nguoi choi 1: "<<xx1<<"              "<<"Tong nguoi choi 1: "<< n1+xx1<<endl;
            n1= n1 + xx1;
        }else{
            cout << "xuc sac nguoi choi 2: "<<xx2<<"              "<<"Tong nguoi choi 2: "<< n2+xx2<<endl;
            n2 = n2 + xx2;
        }
    }
}


int main(){
    srand(time(0));
    int n1=0,n2=0;
    CachA(n1, n2);
   //CachB(n1, n2);
    if(n1>n2) cout << "Nguoi choi 1 thang!\n";
    else cout << "Nguoi choi 2 thang!\n";
    return 0;
}



