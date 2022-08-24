#include<bits/stdc++.h>
using namespace std;

class addi{
    int a,b;
    public:
    addi(int x,int y){
        a=x;
        b=y;
    }
    addi operator +(addi const &d){
        addi res(0,0);
        res.a=a+d.a;
        res.b=b+d.b;
        return res;
    }
    void getvalues(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    addi a(1,2);
    addi b(3,4);
    addi d=a+b;
    d.getvalues();
    return 0;
}