#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}