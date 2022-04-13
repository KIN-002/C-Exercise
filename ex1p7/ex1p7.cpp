#include <iostream>
#include <complex>
using namespace std;
int main()
{
	double pi = 3.14159265359;
	complex<double> c1(4.0, 5.0);
	cout << "Specifying initial real & imaginary parts," << "c1 =" << c1 << endl;
	complex<double> c2(c1);
	cout << "Initializing with the real and imaginary parts of c1," << " c2 = " << c2 << endl;

	complex<double> c3(polar(sqrt((double)8), pi / 4));
	cout << "c3 = polar( sqrt( 8 ) , pi / 4 ) = " << c3 << endl;

	double absc3 = abs(c3);
	double argc3 = arg(c3);
	cout << "The modulus of c3 is recovered from c3 using: abs( c3 ) = " << absc3 << "Argument of c3 is recovered from c3 using:\n arg( c3 ) = " << argc3 << "radians, which is " << argc3 * 180 / pi << " degrees. " << endl;
	return 0;
}