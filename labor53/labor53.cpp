#include <iostream> 
#include <iomanip> 
#include <cmath> 
using namespace std;

double h(const double x);

int main() {
    double gp, gk, z;
    int n;
    cout << "gp = "; cin >> gp;
    cout << "gk = "; cin >> gk;
    cout << "n = "; cin >> n;
    double dg = (gk - gp) / n;
    double g = gp;

    // Виведення заголовка таблиці 
    cout << "--------------------------------" << endl;
    cout << setw(8) << "g" << setw(9) << "|" << setw(10) << "z" << endl;
    cout << "--------------------------------" << endl;
    while (g <= gk) {
        z = h(g * g + 1) + h(g + h(1)) + 1;

        // Виведення рядків таблиці 
        cout << setw(10) << fixed << setprecision(4) << g << setw(15) << fixed << setprecision(4) << z << endl;

        g += dg;
    }

    // Виведення шапки таблиці 
    cout << "--------------------------------" << endl;

    return 0;
}

double h(const double x) {
    if (abs(x) >= 1)
        return (sin(x) + 1) / (1 + cos(x));
    else {
        double S = 0;
        int j = 0;
        double a = 0;
        S = a;
        do {
            j++;
            double R = 1 / ((2 * j - 1) * 2 * j);
            a *= R;
            S += a;
        } while (j < 5);
        return S;
    }
}