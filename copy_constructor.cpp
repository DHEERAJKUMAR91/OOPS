#include<bits/stdc++.h>
using namespace std;

class animal{
    int a;
    int b;
    public:
    animal(int x,int y){
        a=x;
        b=y;
    }
    animal(const animal& p){
        a=p.a;
        b=p.b;
    }
    void getValues(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    animal bee(5,6);
    bee.getValues();
    animal fly(bee);
    fly.getValues();
    return 0;
}