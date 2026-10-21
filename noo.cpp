#include<iostream>
using namespace std;

void print(int & n ){
    n=10;
    cout<<n;
}

int main(){
    int num=20;
    print(num);
}



