#include <iostream>     
#include <time.h>   
#include <math.h> 
#include "Complex.h"
bool c = 0;
int n;
using namespace std;

void err(int umova) {
    if (umova) {
        cout << "Сталася помилка! Ви ввели неприпустиме значення. Спробуйте ще раз." << endl;
        cin.clear();
        cin.ignore();
        c++;
    }
}

void cinVector() {
x:cout << "\n  Введiть, будь ласка, розмiрнiсть векторiв, що додаються: ";
    cin >> n;
    err(cin.fail());
    if (c == 1) {
        c = 0;
        goto x;
    }
}
class Vector {
private:
    int size=n;
public:
    Complex *A= new Complex[n];
    Vector() {
        for (int i = 0; i < size; i++) {
            Complex tmp((rand() % 20 + (-10)), (rand() % 20 + (-10)));
            A[i] = tmp;
        }
    }
    
    void show() {
        for (int i = 0; i < size; i++) {
            A[i].print();
        }
    }
    Vector& operator = (Vector second) {
        return second; 
    }
    Vector& operator +(Vector second) {
        Vector tmp;
        for (int i = 0; i < size; i++) {
            tmp.A[i] = (A[i] + second.A[i]);
        }
        return tmp;
    }
};

void dodam(Vector& first, Vector& second) {
    Complex *D= new Complex[n];
    for (int i = 0; i < n; i++) {
        D[i] = first.A[i] + second.A[i];
        D[i].print();   
    }
    cout << endl;
}

int main() {
    srand(time(0));
    setlocale(LC_ALL, "ukr");
    cinVector();
    Vector A;
    Vector B;
    cout << "\n\n\t ПЕРШИЙ ВЕКТОР\n";
    A.show();
    cout << "\n\n\t ДРУГИЙ ВЕКТОР\n";
    B.show();
    cout << "\n\n\t РЕЗУЛЬТАТ\n";
   // Vector C = A + B;
   // C.show();
    dodam(A, B);
}