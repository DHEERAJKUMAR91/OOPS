#include<bits/stdc++.h>
using namespace std;

class Test{
    int num;
    public:
    Test& assign(int num){
        this->num=num+1000;
        return *this;
    }
    void display(){
        cout<<"The value of num is "<<num<<endl;
    }
};

int main(){
    Test d;
    d.assign(100).display();
    return 0;
}