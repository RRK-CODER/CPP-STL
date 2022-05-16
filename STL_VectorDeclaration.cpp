#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(24);
    for (int i = 0; i < v.size(); i++)
    //{cout<<v[i]<<endl;}
    {cout<<v.at(i)<<endl;}
//Array index out of bound is checked by v.at() which throws an exception if index is out of bound i.e. if our size of vector is 3 and we are calling 4th position
    return 0;
}