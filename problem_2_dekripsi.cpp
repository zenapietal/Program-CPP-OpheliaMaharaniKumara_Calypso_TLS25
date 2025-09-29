#include <iostream>

int main(){
    std::string kata_asli;
    std::string kata_sandi;
    std::string kode_ascii;

    // input kata asli
    std::cout << "Masukkan kata asli: ";
    std::cin >> kata_asli;

    // mengambil kode ascii dari huruf pertama
    kode_ascii = std::to_string(int(kata_asli[0]));

    // memasukkan konsonan ke dalam var kata_sandi
    for (char c : kata_asli){
        if (c != 'a' && c != 'A' && c != 'i' && c != 'I' &&
            c != 'u' && c != 'U' && c != 'e' && c != 'E' &&
            c != 'o' && c != 'O' && c != 'y' && c != 'Y'){
            kata_sandi += c;
        }
    }

    // membalikkan kata sandi (swap)
    for (int i = 0; i < kata_sandi.length()/2; i++){
        char temp = kata_sandi[i];
        kata_sandi[i] = kata_sandi[kata_sandi.length()-1-i];
        kata_sandi[kata_sandi.length()-1-i] = temp;
    }

    // menambahkan kode ascii di tengah kata sandi
    kata_sandi.insert(kata_sandi.length()/2, kode_ascii);

    std::cout << "Kata sandinya adalah " << kata_sandi << std::endl;
    
    return 0;
}