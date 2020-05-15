# Symbolab KW Super v2.0

* [Deskripsi](#deskripsi)
* [Fitur](#fitur)
* [Instalasi](#instalasi)
* [Penggunaan](#pengunaan)
* [Pembuat Aplikasi](#pembuat-aplikasi)

## Deskripsi
Symbolab KW Super v2.0 merupakan pengembangan dari aplikasi [Symbolab KW v1.0](https://github.com/jidandg/Symbolab-KW-v1.0) yang berguna untuk membantu dalam menyelesaikan permasalahan persamaan matematika dasar maupun lanjutan. Tujuan utama aplikasi ini adalah untuk mempermudah pengerjaan tugas matematika dalam dunia perkuliahan. Sampai saat ini, program mendukung penghitungan turunan, integral, _plotting_ grafik, dan operasi matriks dasar.
	
## Fitur
* _Pointer_: Aplikasi menggunakan fungsi _pointer_ untuk memanipulasi file koordinat grafik dan _struct_/_linked list_.
* _Struct_/_Linked List_: Aplikasi menggunakan _struct_/_linked list_ pada fungsi turunan, untuk menyimpan nilai koefisien dan pangkat persamaan.

## Instalasi
Sebelum menggunakan aplikasi, pastikan pengguna sudah memenuhi persyaratan berikut:
1. Memastikan sistem operasi yang digunakan adalah Windows.
2. Mengunduh gnuplot, baik pada tautan [berikut](http://www.gnuplot.info/) maupun pada tautan [berikut](https://sourceforge.net/projects/gnuplot/files/gnuplot/5.2.8/gp528-win64-mingw.7z/download). Disarankan untuk menggunakan versi _portable_ untuk memudahkan penggunaan.
3. Meng-_extract_ isi file gp528-win64-mingw.7z pada folder tertentu.
4. Menyalin aplikasi gnuplot.exe pada folder gnuplot\bin\, lalu menyalin _shortcut_-nya pada folder yang sama dengan aplikasi Symbolab-KW-Super-v2.0.exe. Lalu, merubah nama file _shortcut_ tersebut dari "gnuplot - Shortcut" menjadi "gnuplot". Hal ini agar program gnuplot dapat diakses oleh program untuk menjalankan fungsi _plotting_ grafik.
![Copy](/Pictures/0a.png)
![Paste Shortcut](/Pictures/0b.png)
![Old Name](/Pictures/0c.png)
![New Name](/Pictures/0d.png)

Untuk menggunakan aplikasi ini, bisa melalui dua cara:
* Mengunduh aplikasi [disini](/Symbolab-KW-Super-v2.0.exe).
* Mengunduh file [_source code_](/Source-Code/) menggunakan _compiler_ C, lalu dilanjutkan dengan meng-_compile_ aplikasi dari _source code_ yang ada. Jika belum terinstal pada komputer, bisa diunduh [disini](https://www.bloodshed.net/devcpp.html) atau [disini](https://sourceforge.net/projects/orwelldevcpp/files/latest/download). 

## Penggunaan
### Menu
![_Splash Screen_](/Pictures/1.png)
![Menu](/Pictures/2.png)  
Setelah melewati _splash screen_, aplikasi akan masuk ke tampilan menu. Pilih opsi yang diinginkan untuk memulai penghitungan.

### Turunan
![Turunan](/Pictures/3.png)  
Pada menu turunan, aplikasi akan meminta pengguna untuk memasukkan parameter-parameter dan nilai-nilai persamaan.

### Hasil Turunan
![Hasil Turunan](/Pictures/4.png)  
Setelah pengguna memasukkan parameter-parameter persamaan, program akan menampilkan hasil dan meminta konfirmasi untuk menampilkan grafik persamaan.

### Contoh Grafik Hasil Turunan
![Contoh Grafik Hasil Turunan](/Pictures/5.png)  
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
![Contoh Grafik Hasil Integral Tak Tentu](/Pictures/10.png)  
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
