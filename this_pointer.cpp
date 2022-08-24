
// this pointer use in method chaining 



#include<bits/stdc++.h>
using namespace std;

class king{
    public:
    void call();
    void print(){
        cout<<"this print func is called :"<<endl;
        this->call();
    }
};

void king :: call(){
    cout<<"CAll func is called :"<<endl;
}

int main(){
    king karna;
    karna.print();
    return 0;
}