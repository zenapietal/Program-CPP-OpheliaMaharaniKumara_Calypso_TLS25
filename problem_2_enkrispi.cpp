#include <iostream>

int main() {
    std::string kata_sandi;
    std::string kata_asli;
    std::string kode_ascii;
    
    // input kata sandi
    std::cout << "Masukkan kata sandi: ";
    std::cin >> kata_sandi;
    
    // memisahkan huruf dan kode ascii
    for (char c : kata_sandi){
        if (!isalpha(c)) {
            kode_ascii += c;
        }
        else {
            kata_asli.push_back(c);
        }
    }
    
    // meng-convert ascii ke huruf
    char huruf_pertama = char(std::stoi(kode_ascii));
    
    // memeriksa apakah huruf pertama kata_asli sama dengan huruf pertama ascii
    if (huruf_pertama != kata_asli.back()){
        kata_asli.push_back(huruf_pertama);
    }

    // mengembalikan kata asli (swap)
    int l = kata_asli.length();
    for (int i = 0; i < l/2; i++){
        char temp = kata_asli[i];
        kata_asli[i] = kata_asli[l-1-i];
        kata_asli[l-1-i] = temp;
    }

    std::cout << "Kata aslinya adalah "<< kata_asli << std::endl;

    return 0;
}