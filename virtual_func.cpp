#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    void show(){
        cout<<"Base class show function is called "<<endl;
    }
    virtual void print(){
        cout<<"Base class print function is called "<<endl;
    }
};

class Derived : public Base{
    public:
    void show(){
        cout<<"Derived class show function is called "<<endl;
    }
    void print(){
        cout<<"Derived class print function is called"<<endl;
    }
};

int main(){
    Base* ptr;
    Derived obj1;
    ptr=&obj1;
    ptr->print();
    ptr->show();
    return 0;
}