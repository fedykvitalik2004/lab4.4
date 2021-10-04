#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y, R;

	cout << "R"; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x < -1 - R)
			y = -x - 1 - R;
		else
			if (x >= (-1 - R) && (x < -1))
				y = sqrt(R * R - (x + 1) * (x + 1));
			else
				if (x >= -1 && x < 1)
					y = R;
				else
					if (x >= 1 && x < 2)
						y = -x + 1 - R * x + 2 * R;
					else
						y = -1;
		cout << "|" << setw(10) << setprecision(3) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}