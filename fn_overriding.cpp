#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
    void make_sound(){
        cout<<"Animal Sound :"<<endl;
    }
};

class Dog : public animal{
    public:
    void make_sound(){
        cout<<"Dogs bark : "<<endl;
    }
};

class Cat : public animal{
    public:
    void make_sound(){
        cout<<"Cat meows : "<<endl;
    }
};

int main(){
    animal a1;
    a1.make_sound();
    Dog messi;
    messi.make_sound();
    Cat tim;
    tim.make_sound();
    return 0;
}