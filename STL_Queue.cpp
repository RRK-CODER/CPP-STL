#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Front element is: "<<q.front()<<endl;
    cout<<"Rear element is: "<<q.back()<<endl;
    q.pop();
    cout<<"Front element is: "<<q.front()<<endl;
    cout<<"Rear element is: "<<q.back()<<endl;
    return 0;
    
}