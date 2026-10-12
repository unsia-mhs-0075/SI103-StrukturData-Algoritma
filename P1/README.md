# Pertemuan 1 – Pengenalan Algoritma dan Pemrograman

## Tujuan Pembelajaran

Mahasiswa memahami konsep dasar algoritma dan pemrograman, mencakup:

- Definisi dan karakteristik algoritma.
- Cara berpikir algoritmik dalam memecahkan masalah.
- Hubungan antara algoritma, program, dan bahasa pemrograman.
- Representasi algoritma melalui kalimat deskriptif, pseudocode, dan flowchart.

## Pendahuluan

Algoritma merupakan inti dari ilmu komputer dan informatika.
Setiap program komputer, sekompleks apa pun, dibangun dari urutan langkah logis yang disebut algoritma.

Secara sederhana, algoritma adalah:

> Urutan langkah-langkah yang logis dan sistematis untuk menyelesaikan suatu masalah.

Kamus Besar Bahasa Indonesia (KBBI) mendefinisikan algoritma sebagai urutan logis pengambilan keputusan untuk pemecahan masalah.

Contohnya:

- Mengurutkan kartu dari nomor terkecil ke terbesar.
- Mencari nama tertentu dalam daftar peserta ujian.
- Menghitung luas tanah persegi panjang.

Setiap aktivitas ini memiliki langkah-langkah terstruktur, dan di situlah logika algoritma bekerja.

## Contoh Masalah dan Algoritmanya

| Jenis Masalah                          | Deskripsi                                                   | Tujuan                                               |
| -------------------------------------- | ----------------------------------------------------------- | ---------------------------------------------------- |
| **Pengurutan (Sorting)**               | Mengurutkan kumpulan data dalam urutan menaik atau menurun. | Data lebih mudah dibaca dan dianalisis.              |
| **Pencarian (Searching)**              | Mencari nilai tertentu dalam sekumpulan data.               | Mengetahui apakah elemen tertentu ada di dalam data. |
| **Menemukan Nilai Maksimum / Minimum** | Menentukan nilai tertinggi atau terendah dalam data.        | Membantu proses pengambilan keputusan.               |
| **Perhitungan Matematis**              | Menghitung luas, volume, atau hasil operasi aritmatika.     | Mendapatkan hasil numerik dari data input.           |

## Contoh Algoritma di Kehidupan Sehari-hari

a. Mengurutkan Kartu

   1. Cari kartu dengan nomor terkecil, letakkan paling atas.
   2. Cari kartu dengan nomor terkecil berikutnya, letakkan setelahnya.
   3. Ulangi sampai semua kartu tersusun.

   Inilah bentuk dasar algoritma selection sort.

b. Menukar Isi Dua Gelas

   Misal Gelas A berisi kopi dan Gelas B berisi susu.
   Langkah-langkah:

   - Siapkan gelas kosong C sebagai penampung sementara.
   - Tuang isi Gelas A ke Gelas C.
   - Tuang isi Gelas B ke Gelas A.
   - Tuang isi Gelas C ke Gelas B.

   Ini menggambarkan konsep algoritmik swap variable.

c. Mengambil Air 4 Liter (Masalah Ember 3L dan 5L)

   Langkah-langkah:

   - Isi ember 3L, tuangkan ke ember 5L.
   - Isi ember 3L lagi, tuangkan hingga ember 5L penuh (tersisa 1L di ember 3L).
   - Kosongkan ember 5L.
   - Tuang 1L dari ember 3L ke ember 5L.
   - Isi ember 3L penuh lagi, tuangkan ke ember 5L.

   Hasil akhir: ember 5L berisi 4 liter air.

Masalah klasik ini melatih logika berpikir sistematis dalam algoritma.

## Karakteristik Algoritma

Agar dapat disebut sebagai algoritma yang baik, harus memenuhi ciri berikut:

- Berhingga (Finite)
  Algoritma harus berhenti setelah sejumlah langkah terbatas.
- Jelas (Definiteness)
  Setiap langkah harus memiliki arti tunggal, tidak ambigu.
- Input dan Output Jelas
  Ada nol atau lebih input, dan minimal satu output yang dihasilkan.
- Efektif dan Efisien
  Langkah-langkahnya sederhana dan dapat dilaksanakan dalam waktu wajar.
- Generik (Umum)
  Dapat digunakan untuk berbagai kasus sejenis, tidak hanya satu contoh spesifik.
- Dapat Dikembangkan dan Dipahami (Readable & Expandable)
  Harus mudah dipahami dan dimodifikasi untuk kebutuhan lain.

## Dari Algoritma ke Program

Agar algoritma bisa dijalankan komputer, langkah-langkah logisnya harus diterjemahkan ke bahasa pemrograman.

| Tahapan                    | Penjelasan                                                                   |
| -------------------------- | ---------------------------------------------------------------------------- |
| **Algoritma**              | Langkah-langkah logika dalam bahasa manusia.                                 |
| **Pseudocode / Flowchart** | Representasi algoritma dalam bentuk semi-formal.                             |
| **Program**                | Implementasi algoritma dalam bahasa komputer seperti C++, Java, Python, dll. |

Contoh transisi:

> Masalah: Hitung luas persegi panjang
> Algoritma (deskriptif):
> 1. Baca nilai panjang (p) dan lebar (l).
> 2. Hitung luas (L) dengan rumus L = p * l.
> 3. Tampilkan luas.

Pseudocode:

```
input p, l
luas = p * l
print luas
```

## Bahasa Pemrograman

Bahasa pemrograman adalah alat untuk menerjemahkan algoritma menjadi program yang dapat dijalankan komputer.

Terdapat dua kategori utama:

- Bahasa tingkat rendah (low-level): dekat dengan bahasa mesin (mis. Assembly).
- Bahasa tingkat tinggi (high-level): mendekati bahasa manusia (mis. C, C++, Python, Java).

Beberapa bahasa populer:

- C & C++ → umum digunakan untuk dasar algoritma dan struktur data.
- Python → cocok untuk pemula dan data science.
- Java, C#, PHP → untuk pengembangan aplikasi umum.

## Pemrograman Prosedural dan Obyek

- Pemrograman Prosedural
  Program dibangun dari urutan langkah (prosedur/fungsi) dan data terpisah.
  Contoh: bahasa C.
- Pemrograman Berorientasi Objek (OOP)
  Menggabungkan data dan prosedur dalam satu kesatuan yang disebut objek.
  Contoh: C++, Java, Python (OOP).
  
## Notasi Algoritma

Tiga cara umum menuliskan algoritma:

- Deskriptif: kalimat naratif langkah demi langkah.
- Flowchart: diagram alir berbentuk simbol proses.
- Pseudocode: penulisan mirip bahasa pemrograman tapi sederhana.

Contoh pseudocode menghitung rata-rata tiga bilangan:

```
input a, b, c
jumlah = a + b + c
rata = jumlah / 3
print rata
```

## Kesimpulan Pertemuan

- Algoritma adalah inti dari seluruh proses pemrograman.
- Semua masalah komputasi berawal dari logika langkah-langkah sistematis.
- Algoritma yang baik harus jelas, terbatas, efektif, dan efisien.
- Bahasa pemrograman hanyalah alat untuk mengeksekusi algoritma — yang terpenting adalah logikanya.
- Pemahaman algoritma menjadi dasar sebelum mempelajari struktur data yang lebih kompleks.

## Referensi

- Modul Struktur Data & Algoritma – Pertemuan 1 (Noviandri, S.Kom., MMSI)
- Materi pengantar Bu Ratih Titi Komalasari
- W3Schools C++ Tutorial: https://www.w3schools.com/cpp/default.asp
- Rinaldi Munir, Algoritma dan Pemrograman
