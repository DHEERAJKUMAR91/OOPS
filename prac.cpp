#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    static int count;
    node(){
        count++;
    }
    static int getcount(){
        return count;
    }
};

int node::count;

int main(){
    node d;
    node c;
    cout<<d.getcount()<<endl;
    return 0;
}