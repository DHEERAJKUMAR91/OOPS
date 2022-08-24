#include<bits/stdc++.h>
using namespace std;

class shape{
    public:
    virtual void getArea()=0;
};

class circle : public shape{
    public:
    void getArea(){
        cout<<"Enter the radius of circle :";
        int r;
        cin>>r;
        cout<<(3.14*r*r);
    }
};

int main(){
    circle c1;
    c1.getArea();
    return 0;
}