#include <iostream>
#include <utility>
using namespace std;
int main()
{
pair<int, int> p1;
pair<int,int> p2(7,24);
cout<<(p1==p2)<<endl;
cout<<(p1!=p2)<<endl;
cout<<(p1<p2)<<endl;
cout<<(p1>p2)<<endl;
return 0;

}