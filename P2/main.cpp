#include <iostream>
using namespace std;

// Fungsi utama yang akan dieksekusi pertama kali
int main() {
    // Deklarasi dan inisialisasi variabel dengan tipe data yang berbeda
    int umur = 20;      // Tipe data integer untuk bilangan bulat
    float ipk = 3.75;   // Tipe data float untuk bilangan desimal
    bool lulus = true;  // Tipe data boolean untuk nilai benar/salah (true/false)
    char grade = 'A';   // Tipe data char untuk satu karakter
    string nama = "Rina"; // Tipe data string untuk kumpulan karakter atau teks

    // Menampilkan informasi ke layar console
    cout << "Nama: " << nama << endl;
    cout << "Umur: " << umur << " tahun" << endl;
    cout << "IPK: " << ipk << endl;
    cout << "Lulus? " << lulus << endl; // Nilai boolean 'true' akan ditampilkan sebagai '1'
    cout << "Grade: " << grade << endl;

    // Mengembalikan nilai 0 untuk menandakan bahwa program telah berakhir dengan sukses
    return 0;
}
