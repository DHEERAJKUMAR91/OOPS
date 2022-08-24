#include<bits/stdc++.h>
using namespace std;

class base{
    //int gear;
    public:
    
    void change_gear(int gear){
        gear++;
    }
};

class derived:public base{
    public:
    void change_gear(int gear){
        gear--;
    }
};

int main(){
    derived d;
    d.change_gear(10);
    return 0;
}
