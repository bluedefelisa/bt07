#include<stdio.h>
#include<cstring>
#include<iostream>

using namespace std;

int Times(const char *a,const char *b, int s1, int s2){
    int count = 0;
    for(int i = 0; i < s2-s1 + 1; i++)
    {
        char check[s1];
        for(int j = 0; j < s1; j++)
        {
            check[j] = b[i+j];
        }
        if(strcmp(a,check) == 0) count++;
    }
    return count;
}

int main(int argc, const char * argv[]) {

    char a[] = "poy";
    char b[] = "retpoyeryoutpoy";
    int s1 = strlen(a), s2 = strlen(b);
    cout << Times(a, b, s1, s2);
    return 0 ;
}
