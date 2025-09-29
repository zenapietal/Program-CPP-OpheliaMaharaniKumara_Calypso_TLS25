#include <iostream>

int main(){
    int d_apill;
    std::cout << "Masukkan detik: ";
    std::cin >> d_apill;

    int d_aturan = d_apill - 24;
    int urutan_warna = d_aturan % 103;
    std::string warna;

    if (urutan_warna >= 1 && urutan_warna <= 20){
        warna = "Hijau";
    }
    else if (urutan_warna >= 21 && urutan_warna <= 23){
        warna = "Kuning";
    }
    else {
        warna = "Merah";
    }

    std::cout << "Warna pada detik " << d_apill << " adalah " << warna << std::endl;
    
    return 0;
}