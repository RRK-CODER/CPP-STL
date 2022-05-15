#include <iostream>
using namespace std;
template<typename T>
struct Pair
{
T x,y;
Pair(T i, T j){ x=i ; y=j;}
T getFirst(){return x;}
T getSecond(){return y;}
};

int main()
{
    Pair<int> p1(10,20), p2(30,40);
    cout<<p1.getFirst()<<" ";
    cout<<p1.getSecond()<<" ";
    cout<<p2.getFirst()<<" ";
    cout<<p2.getSecond();
    return 0;
}
