#include <iostream>
using namespace std;
int main() {
    cout<<"Welcome to ticket price menu!"<<endl;
    int category;
    cout<<"Choose the ticket category: 1-adult, 2-student, 3-family"<<endl;
    cin>>category;

    switch(category){
        case 1:
            cout<<"Adult ticket price is 10 000tg";
            break;
        case 2:
            cout<<"Student ticket price is 5000tg";
            break;
        case 3:
            cout<<"Family ticket price is 15 000tg";
            break;
        default:
            cout<<"Invalid input";

    }
    return 0;
    
}
