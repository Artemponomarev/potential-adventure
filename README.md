# potential-adventure
#include <iostream>

using namespace std;

int main()
{
	cout << "Enter 1 if you want to check task 1" << endl;
	cout << "Enter 2 if you want to check task 2" << endl;
	cout << "Enter 3 if you want to check task 3" << endl;
	cout << "Enter 4 if you want to check task 4" << endl;
	cout << "Enter 5 if you want to check task 5" << endl;
	cout << "Enter 6 if you want to check task 6" << endl;
	cout << "Enter 7 if you want to check task 7" << endl;
	cout << "Enter 8 if you want to check task 8" << endl;
	int ch;
	cin >> ch;
	int n, i = 1;
	double sum = 0;
	int exp = 2;
	int fct = 1;
	double s = 1;
	double S1 = 0;
	double s8 = 1;
	double s9 = 0;
	int p = 1;
	double s3 = 0;
	double s4 = 0;
	double s10 = 0;
	while ((ch > 10) || (ch == 0))
	{
		cout << "Enter other number" << endl;
		cin >> ch;
	}
	cout << "Please enter n" << endl;
	cin >> n;
	switch (ch) {
	case 1:
		while (i <= n) {
			sum += 1. / i;
			i++;
		}
		cout << "Sum of " << n << " elements = " << sum << endl;
		break;
	case 2:
		while (i <= n - 1) {
			exp *= 2; i++;
		}
		cout << "2 ^ " << n << " = " << exp << endl;
		break;
	case 3:
		while (i <= n)
		{
			fct *= 1 * i; i++;
		}
		cout << " factorial " << n << " = " << fct << endl;
		break;
	case 4:
		for (int i = 1; i <= n; i++) {
			s = s*(1 + 1. / i / i);
			cout << "Sum of " << n << " = " << s << endl;
		}
		break;
	case 5:
		for (int i = 1; i <= n; i++)
		{
			S1 = S1 + (double)p / i / i + 1;
			p = -p;
		}
		break;
		cout << "Sum of " << n << " = " << S1 << endl;
	case 6:
		while (i <= n) {
			s3 = (fct *= 1 * i) / (sum += 1. / i); i++;
		}
		break;
		cout << "Sum of " << n << " = " << s3 << endl;
	case 7:
		for (int i = 1; i <= n; i++)
			s4 = sqrt(s4 + 2);
		break;
	case 8:
		for (int i = 1; i < n; i++){
               	s8 += 1. / (i + 1) / (i + 1) / (i + 1) / (i + 1) / (i + 1);
				cout << "Sum of " << n << " = " << s8 << endl;
		}
	case 9:
		for (int i = 1; i <= n; i++)
			s9 += 1. / (2 * i + 1);
		cout << "sum of " << n << " = " << s9 << endl;
		break;
	case 10:
		for (int i = 1; i < n; i++)
			s10 += 1. /( sin ( i-1 ) + sin(i));
		cout << "sum of sin " << n << " = " << s10 << endl;
		break;

		}
	system("pause");
	return 0;
}
