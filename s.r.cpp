//Гляк Алёна 
#include <iostream>
#include<ctime>
using namespace std;
int main()
{
	const int n = 9;
	int a[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 21-10;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	int m = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			m += a[i];
		}
	}
	cout << m << endl;
	return 0;
}