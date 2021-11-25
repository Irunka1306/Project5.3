#include <iostream>
#include <cmath>
using namespace std;
double z(const double x);
int main()
{
	double pp, pk, h;
	int n;
	cout << "pp = "; cin >> pp;
	cout << "pk = "; cin >> pk;
	cout << "n = "; cin >> n;
	double dp = (pk - pp) / n;
	double p = pp;
	while (p <= pk)
	{
		h = z(p * p) + 2 * z(2 * p + (p * p)) + 1;
		cout << p << " " << h << endl;
		p += dp;
	}
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (cos(x+x)+1)/(cos(x)+pow(cos(x),2));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = (pow(2, k+k+1)*pow(x, k+k+1))/(((2*k+1)-2)*((2 * k + 1)-1)* (2 * k + 1));
			a *= R;
			S += a;
		} while (k < 6);
		return S;
	}
}
