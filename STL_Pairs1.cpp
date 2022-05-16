#include <iostream>
#include <utility>
using namespace std;
int main()
{
pair<int, int> p1;
pair<int,int> p2(7,24);
pair<int,string>p3(10,"RRK");
cout<<p1.first<<" "<<p1.second<<endl;
cout<<p2.first<<" "<<p2.second<<endl;
cout<<p3.first<<" "<<p3.second<<endl;
return 0;

}