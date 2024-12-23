#include<iostream>
using namespace std;

int main(){

    int a=5;   // 
    int b=4;
        cout<<"Bitwise AND (&): "<<(a&b)<<endl;
        cout<<"Bitwise OR (|): "<<(a|b)<<endl;
       cout<<"Bitwise XOR (^): "<<(a^b)<<endl;
       cout<<"Bitwise NOT (~): "<<(~a)<<endl;
    cout<<"left shift : "<<(a<<1)<<endl;
    cout<<"right  shift : "<<(a>>1)<<endl;
    


    return 0;
}