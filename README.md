# Symbolab KW Super v2.0

* [Deskripsi](#deskripsi)
* [Instalasi](#instalasi)
* [Penggunaan](#pengunaan)
* [Pembuat Aplikasi](#pembuat-aplikasi)

## Deskripsi
Symbolab KW Super v2.0 merupakan pengembangan dari aplikasi [Symbolab KW v1.0](https://github.com/jidandg/Symbolab-KW-1.0) yang berguna untuk membantu dalam menyelesaikan permasalahan persamaan matematika dasar maupun lanjutan. Tujuan utama aplikasi ini adalah untuk mempermudah pengerjaan tugas matematika dalam dunia perkuliahan. Sampai saat ini, program mendukung penghitungan turunan, integral, plotting grafik, dan operasi matriks dasar.
	
## Instalasi
Sebelum menggunakan aplikasi, pastikan pengguna sudah memenuhi persyaratan berikut:
1. Memastikan sistem operasi yang digunakan adalah Windows.
2. Mengunduh gnuplot, baik pada [tautan berikut](http://www.gnuplot.info/) maupun pada [tautan berikut](https://sourceforge.net/projects/gnuplot/files/gnuplot/5.2.8/gp528-win64-mingw.7z/download). Disarankan untuk menggunakan versi portable untuk memudahkan penggunaan.
3. Meng-extract isi file gp528-win64-mingw.7z pada folder tertentu.
4. Meng-copy aplikasi gnuplot.exe pada folder gnuplot\bin\, lalu meng-paste shortcutnya pada folder yang sama dengan aplikasi Symbolab-KW-Super-v2.0.exe. Lalu, merubah nama file shortcut tersebut dari "gnuplot - Shortcut" menjadi "gnuplot".
![Copy](/Pictures/0a.png)
![Paste Shortcut](/Pictures/0b.png)

Untuk menggunakan aplikasi ini, bisa melalui dua cara:
* Mengunduh [aplikasi disini](/Symbolab-KW-Super-v2.0.exe).
* Membuka file [source code](/Source Code/Symbolab-KW-Super-v2.0.c) menggunakan compiler C, lalu dilanjutkan dengan meng-compile aplikasi dari source code yang ada. Jika belum terinstall pada komputer, bisa diunduh [disini](https://www.bloodshed.net/devcpp.html) atau [disini](https://sourceforge.net/projects/orwelldevcpp/files/latest/download). 

## Penggunaan
### Menu
![Splash Screen](/Pictures/1.png)
![Menu](/Pictures/2.png)
Setelah melewati splash screen, aplikasi akan masuk ke tampilan menu. Pilih menu yang diinginkan untuk memulai penghitungan.

### Turunan
![Turunan](/Pictures/3.png)
Pada menu turunan, aplikasi akan meminta pengguna untuk memasukkan parameter-parameter dan nilai-nilai persamaan.

### Hasil Turunan
![Hasil Turunan](/Pictures/4.png)
Setelah pengguna memasukkan parameter-parameter persamaan, program akan menampilkan hasil dan meminta konfirmasi untuk menampilkan grafik persamaan.

### Contoh Grafik Hasil Turunan
![Contoh Grafik Hasil Turunan](/Pictures/5.png)\n
Contoh grafik hasil turunan.

### Contoh Hasil Turunan
![Contoh Hasil Turunan](/Pictures/6.png)
Contoh hasil turunan.

### Menu Integral
![Menu Integral](/Pictures/7.png)
Aplikasi akan meminta jenis operasi integral yang diinginkan.

### Integral Tak Tentu
![Integral Tak Tentu](/Pictures/8.png)
Aplikasi lalu akan meminta pengguna untuk memasukkan nilai-nilai persamaan, tergantung pada jenis operasi integral yang dipilih. Terlihat pada gambar di atas, jenis operasi integral yang digunakan adalah integral tak tentu.

### Hasil Integral Tak Tentu
![Hasil Integral Tak Tentu](/Pictures/9.png)
Setelah pengguna memasukkan parameter-parameter persamaan, program akan menampilkan hasil dan meminta konfirmasi untuk menampilkan grafik persamaan.

### Contoh Grafik Hasil Integral Tak Tentu
![Contoh Grafik Hasil Integral Tak Tentu](/Pictures/10.png)\n
Contoh grafik hasil integral tak tentu.

### Contoh Hasil Integral Tak Tentu
![Contoh Hasil Integral Tak Tentu](/Pictures/11.png)
Contoh hasil integral tak tentu.

### Menu Matriks
![Menu Matriks](/Pictures/12.png)
Pada menu matriks, aplikasi akan meminta jenis operasi matriks yang diinginkan.

### Penjumlahan Matriks
![Penjumlahan Matriks](/Pictures/13.png)
Aplikasi lalu akan meminta pengguna untuk memasukkan parameter-parameter dan nilai-nilai persamaan, tergantung pada jenis operasi matriks yang dipilih. Terlihat pada gambar di atas, jenis operasi matriks yang digunakan adalah perkalian matriks.

### Contoh Hasil Perkalian Matriks
![Contoh Hasil Perkalian Matriks](/Pictures/14.png)
Contoh hasil perkalian matriks.

## Pembuat Aplikasi
![Credits](/Pictures/15.png)
1. Jidan Dhirayoga Gumbira (1806200116)
2. Philipus Kristian Renaldy (1806200053)
