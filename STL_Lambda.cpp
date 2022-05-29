#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};
    vector<int>:: iterator p = find_if(v.begin(), v.end(), [](int i)
    {
        return i > 4;
    });
    cout << "First number greater than 4 is : " << *p << endl;
}
//lambda expression allow us to write an inline function which can be used for short snippets of code that are not going to be reuse and not worth naming. 
//In its simplest form lambda expression can be defined as follows: 
//    [ capture clause ] (parameters) -> return-type  
//   {   
//  definition of method   
//   } 