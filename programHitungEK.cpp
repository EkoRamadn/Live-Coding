#include <iostream>
#include <cmath>
using namespace std;

void hitungEK(int massa, int kecepatan) {
    double energiKinetik = 0.5 * massa * pow(kecepatan, 2);
    cout << "Energi Kinetik nya : " << energiKinetik << " joule \n";
    cout << "====== selesai ====== \n";
}

int main()
{
    double massaSepeda, massaAndika, kecepatan, massa = 0;
    
    cout << "====== Progam Hitung EK ====== \n";
    cout << "masukan massaSepeda(g) : ";
    cin >> massaSepeda;
    cout << "masukan massaAndika(kg) : ";
    cin >> massaAndika;
    cout << "masukan kecepatan(m/s) : ";
    cin >> kecepatan;
    cout << "menghitung EK \n";
    
    massaSepeda= massaSepeda / 1000;
    
    massa = massaAndika + massaSepeda;
    
    hitungEK(massa,kecepatan);
    
    return 0;
}