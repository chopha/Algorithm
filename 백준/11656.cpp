#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int main()
{
	string name;
	cin >> name;
	vector<string> v(name.size());

	for (int i = 0; i < name.size(); i++)
	{
		for (int k = i; k < name.size(); k++)
			v[i] += name[k];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < name.size(); i++)
	{
		cout << v[i] << endl;
	}
}