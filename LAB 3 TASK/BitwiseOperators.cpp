#include <iostream>
using namespace std;
main(){
    unsigned int a=60;
    unsigned int b=13;
    int c=0;
    c=a & b;
    cout<<"Line1-Value of c is:"<<c<<endl;
    c=a | b;
    cout<<"Line2-Value of c is:"<<c<<endl;
    c=a ^ b;
    cout<<"Line3-Value of c is:"<<c<<endl;
    c= ~a;
    cout<<"Line4-Value of c is:"<<c<<endl;
    c=a << 2;
    cout<<"Line5-Value of c is:"<<c<<endl;
    c=a >> 2;
    cout<<"Line6-Value of c is:"<<c<<endl;
    return 0;
}