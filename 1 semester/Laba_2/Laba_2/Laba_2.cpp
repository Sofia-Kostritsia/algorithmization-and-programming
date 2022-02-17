#include <iostream>
#include <math.h>
using namespace std;
int factorial(int N)
{
    if (N == 0) return 1;
    return N * factorial(N - 1);
}

int main()
{
    setlocale(LC_CTYPE, "ukr");
    // ~~~~~~~~~~~~~ЗАВДАННЯ 3~~~~~~~~~~~
    int n;
    double nastup;
    double sum = 0;
    double term;
    const double eps = 0.0004;
    cout << "n" << '\t' << "|" << '\t' << "term" << endl;
    for (n = 1; ; n++) {
        term = (n * (pow(cos(n + 0.11), 2)) / (factorial(3 * n + 1)));
        cout << "___________________________" << endl;
        if (fabs(term) > eps) {
            sum += (term);
        }

        if ((fabs(term)) < eps) {
            nastup = term;
            break;
        }
        cout << n << '\t' << "|" << '\t' << term << endl;
    }
    cout << '\n' << "Сума елементiв ряду з точнiстю 0,0004 :  " << sum << endl;
    cout << '\n' << "Наступний елемент ряду:  " << nastup << endl;
}