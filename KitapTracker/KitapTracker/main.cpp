#include <iostream>
#include <string>

using namespace std;

// Kitap sınıfı tanımı
class Kitap {
public:
    string ad;
    int sayfaSayisi;
};

class KitapOkumaTracker {
public:
    int toplamSayfa;

    void KitapOku(Kitap kitap) {
        cout << kitap.ad << " kitabını kaç sayfa okudunuz? ";
        int okunanSayfa;
        cin >> okunanSayfa;

        toplamSayfa += okunanSayfa;

        cout << kitap.ad << " kitabından toplam " << okunanSayfa << " sayfa okundu. Toplam okunan sayfa: " << toplamSayfa << endl;
    }
};

int main() {
    KitapOkumaTracker tracker;

    Kitap kitap1;
    kitap1.ad = "Lanetli Tavşan";
    kitap1.sayfaSayisi = 200;

    Kitap kitap2;
    kitap2.ad = "Stepford Kadınları";
    kitap2.sayfaSayisi = 300;

    tracker.KitapOku(kitap1);

    tracker.KitapOku(kitap2);

    return 0;
}
