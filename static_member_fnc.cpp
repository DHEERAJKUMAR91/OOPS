#include<bits/stdc++.h>
using namespace std;

class C{
    private:
    int x;
    static int count;
    public:
    C(){
        count++;
    }
    static int getcount(){
        return count;
    }
};
// Initialization ***
int C::count;
int main(){
    cout<<C::getcount()<<endl;
    C obj1,obj2;
    cout<<C::getcount()<<endl;
    return 0;
}