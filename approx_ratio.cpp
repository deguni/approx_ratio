#include <iostream>

int main()
{
    //double a = 9.71951800E-03;
    //double a = 9.72398370E-03;
    //double a = 9.72398370E-04;
    double   a = 9.72399176E-04 * 1000;
    double err = std::numeric_limits<double>::max();
    std::cout << "Fraction for " << a << ":\n";
    for (int i = 1; i < 10000; i++) {
        int j_ = -1;
        for (int j = 0; j < i; j++) {
            double curerr = fabs(1. * j / i - a);
            if (curerr < err) {
                j_ = j;
                err = curerr;
            }
        }
        if (j_ != -1) {
            std::cout << j_ << "/" << i << " err=" << err << "\n";
        }
    }
}
