#include "clab3.h"
#include <cmath>

double newton(double x0, double eps, int max_iter) {
    auto f = [](double x) { return x*x - 2; };
    auto df = [](double x) { return 2*x; };
    double x = x0;
    for (int i = 0; i < max_iter; ++i) {
        double dx = f(x) / df(x);
        x -= dx;
        if (std::abs(dx) < eps) break;
    }
    return round(x*100) / 100;
}