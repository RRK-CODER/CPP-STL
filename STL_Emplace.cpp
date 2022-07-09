#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vec = { 10, 20, 30 };
	auto it = vec.emplace(vec.begin(), 15);
    auto at =vec.emplace(vec.end(), 25);
cout << "The vector elements are: ";
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << " ";

	return 0;
}
