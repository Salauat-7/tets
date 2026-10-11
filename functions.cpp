#include<iostream>
using namespace std;

int doubleNumber(int n);
int tripleNumber(int n);
int addNumbers(int a, int b);


int main(){

cout<<"Hello"<<endl;

int num1=doubleNumber(-2);
int num2=tripleNumber(4);
int add=addNumbers(12,100);

cout<<"Double:"<<num1<<endl;
cout<<"Triple:"<<num2<<endl;
cout<<"Addition:"<<add<<endl;



}

int doubleNumber(int n){
    return n*2;
}

int tripleNumber(int n){
    return n*3;
}

int addNumbers(int a, int b){
    return a+b;
}

