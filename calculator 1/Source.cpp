#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "Hello! This is a simple calculator." << endl;
	cout << "1.If you want to summ numbers press +  " << endl;
	cout << "2.If you want to multiply numbers press *  " << endl;
	cout << "3.If you want to divide numbers press / or :  " << endl;
	cout << "a =";
	cin >> a;
	cout << "b =";
	cin >> b;
	char op;
	cout << "Please, enter the sign of operation:  " << endl;
	cin >> op;
	double c;
	bool ok = true;
	switch (op)
	{
	case '*': c = a * b;
		break;
	case '-': c = a - b;
		break;
	case '+': c = a + b;
		break;
	case '/':
	case ':':
		if (b == 0)
			ok = false;
		else
			c = a / b;
		break;
	default:
		ok = false;
	}
	if (ok == true)
		cout << a << "" << op << "" << b << " = " << c << endl;
	else
		cout << "Input error! " << endl;
	system("pause");
	return 0;
}
