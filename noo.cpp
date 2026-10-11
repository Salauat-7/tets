#include<iostream>
using namespace std;

int DoubleIt(int num);

int main(){
    int num=DoubleIt(4);
    cout<<num<<endl;

}
int DoubleIt(int num){
    return num*2;
}


