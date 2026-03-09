#include <iostream>
#include <iomanip>
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

string statusBMI(double bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    } else if (bmi < 25) {
        return "Berat Badan Normal";
    } else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    } else {
        return "Obesitas";
    }
}

int main() {
        double berat, tinggi, bmi;
    string status;

     cout << "---- Selamat Datang Mahasiswa Kelas A 2025 ----" << endl;

    inputData(berat, tinggi);

    bmi = hitungBMI(berat, tinggi);
    status = statusBMI(bmi);

    cout << "\n----Hasil----" << endl;
    cout << "BMI Anda : " << fixed << setprecision(4) << bmi << endl;
    cout << "Status   : " << status << endl;

    return 0;
}