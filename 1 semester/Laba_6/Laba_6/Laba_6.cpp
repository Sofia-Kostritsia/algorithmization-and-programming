#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    std::setlocale(LC_ALL, "ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int allel = 0;
    string myStr = { "" };
    string myS;
    int N;
    int f = 0;
    int c = 0;
    int v = 0;
    // ~~~~~~~~~~~~~~~~~~~~~~ЗАВДАННЯ №1~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
        cout << "Введіть рядок символів, будь ласка: \n";
        getline(cin, myStr);
        cout << "\n Введіть кількість *, будь ласка: \n";
        cin >> N;
        cout << endl;
        for (int i = 0; i <= myStr.length(); i++) {
                cout <<myStr[i];
                cout << " ";
                if (i < N) {
                    if (char(myStr[i]) != 32 ) {
                        cout << char(42);
                        cout << " ";
                    }
                }
        }

        //*/


        // ~~~~~~~~~~~~~~~~~~~~~~ЗАВДАННЯ №2~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /*std::cout << "Введiть рядок слiв, будь ласка: \n *слова вводьте через нижнє пiдкреслення ( _ ); \n **вкiнцi рядка не забудьте поставити крапку; \n  ";
    getline(cin, myS);
    for (int i = 0; i > myS.length(); i--) {
        if (char(myS[i]) == 32 || char(myS[i]) == 46) {
            c = 0;
        }
        else { c = 1; }
        if (c > 0) {
            f++;
            if ((myS[i - f] == myS[i])) {
                myS[i] = char(46);
            }
        }
        f = 0;
    }

    cout << "\nКiлькiсть слiв, що починаються й закiнчуються одною й тою ж лiтерою: " << v << endl;
    cout << "Кiлькiсть слiв у рядку: " << c << endl;*/
}