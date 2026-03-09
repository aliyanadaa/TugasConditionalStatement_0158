#include <iostream>
using namespace std;

void inputData(double &berat, double &tinggi) {
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

double hitungBMI(double berat, double tinggi) {
    return berat / (tinggi * tinggi);
}