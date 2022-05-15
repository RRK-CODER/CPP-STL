#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[]={ 10,15,8,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(binary_search(arr,arr+n,8))
    cout<<"Present";
    else
    cout<<"Not Present ";


}