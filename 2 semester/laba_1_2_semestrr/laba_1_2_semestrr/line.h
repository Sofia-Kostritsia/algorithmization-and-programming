#ifndef LINE_H
#define LINE_H
using namespace std;
class Line
{
private:
    double k, b;

public:

    Line(double koef, double viln) {
        k = koef;
        b = viln;
    }

    void printLine() {
        cout << "y=";
        if (k > 0 || k < 0) {
            cout << k << "*x";
        }
        if (b > 0 && k!=0) {
            cout << "+";
        }
        if (b>0 || b<0) {
            cout << b << endl;
        }
    }
    
    double getK() {
        return k;
    }
    
    double getB() {
        return b;
    }
    
    void perevirka(Line& complation_line) {

        if ((getB() != complation_line.b) && (getK() == complation_line.k)) {
            cout << "\n\tПрямi паралельнi" << endl;
        }
        else if ((getB() == complation_line.b) && (getK() == complation_line.k)) {
            cout << "\n\t Прямi збiгаються" << endl;
        }
        else {
            double tochka_x;
            double tochka_y;
            tochka_x = ((getB() - complation_line.b) / ( complation_line.k - getK() ));// k1x+b1=k2x+b2; k1x-k2x=b2-b1; x= (b1-b2)/(k1-k2)
            tochka_y = (complation_line.k * tochka_x + complation_line.b);
            cout << "\n\tПрямi перетинаються в точцi (" << tochka_x << " ; " << tochka_y << ")" << endl;
        }
    }

};
#endif