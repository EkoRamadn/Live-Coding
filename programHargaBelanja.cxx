#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    double massaApel, massaJeruk, massaSemangka, totalMassa, totalHarga, diskon; 

    // dikarenakan kita tidak akan merubah nilai harga maka kita mengunakan keyword const agar nilai tidak dapat berubah 
    const double hargaApel = 24000, hargaJeruk = 32500, hargaSemangka = 8000;
    cout << "Masukkan berat apel (kg): ";
    cin >> massaApel;
    cout << "Masukkan berat jeruk (kg): ";
    cin >> massaJeruk;
    cout << "Masukkan berat semangka (kg): ";
    cin >> massaSemangka;

    totalMassa = massaApel + massaJeruk + massaSemangka;
    totalHarga = (massaApel * hargaApel) + (massaJeruk * hargaJeruk) + (massaSemangka * hargaSemangka);

    if (totalMassa > 10) {
        diskon = 0.05;
    }
    else if (totalMassa > 8) {
        diskon = 0.02;
    }
    else {
        diskon = 0;
    }

    double totalBayar = totalHarga - (totalHarga * diskon);
cout << "total berat(kg) : " << totalMassa << endl;
    cout << fixed << setprecision(2); //  melakukan agar nilai dibelakang koma tidak melebihi dari 2 angka
    cout << "Total yang harus dibayar: Rp " << totalBayar << endl;

    return 0;
}