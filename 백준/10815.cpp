#include <iostream>
#include <algorithm>
#include <vector>;

using namespace std;

int main()
{
	int N;
	int M;
	int left, right, mid;

	cin >> N;
	vector<int>v1(N);

	for (int i = 0; i < N; i++)
		cin >> v1[i];


	cin >> M;
	vector<int>v2(M);
	vector<bool> R;
	R.assign(M, false);

	for (int i = 0; i < M; i++)
		cin >> v2[i];

	sort(v1.begin(), v1.end());

	

	for (int i = 0; i < M; i++)
	{
		left = 0;
		right = N-1;

		while (left <= right)
		{
			mid = (left + right) / 2;
			if (v1[mid] == v2[i])
			{
				R[i] = true;
				break;
			}
			else if (v1[mid] > v2[i])
				right = mid - 1;
			else
				left = mid + 1;

		}
	}

		for (int i = 0; i < M; i++)
		{
			cout << R[i] << " ";
		}
	
}