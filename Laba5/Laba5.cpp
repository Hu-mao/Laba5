#include <iostream>
using namespace std;

void main() {
    setlocale(LC_ALL, "ukr");

    // 1. Логічні змінні
    bool ULO2, ULO3, result;

    // 2. Змінні для значень 
    double A, B, C, D;

    // --- Перший набір значень ---
    A = 17;
    B = 11;
    C = 47;
    D = 59;

    ULO2 = !(A == B);       //  true (1)
    ULO3 = !(C >= D);       //  true (1)
    result = ULO2 || ULO3;  //  true (1)

    cout << "Перший набір: " << result << endl;

    // --- Другий набір значень ---
    A = 34.5;
    B = 34.5;
    C = 43;
    D = 56;

    ULO2 = !(A == B);       // false (0)
    ULO3 = !(C >= D);       //  true (1)
    result = ULO2 || ULO3;  // true (1)

    cout << "Другий набір: " << result << endl;
}