# C++-Basic-Flowchart 

## Introduction

Dalam menggunakan aplikasi ini kita diminta untuk memilih formula perhitungan luas (persegi, persegi panjang, dan lingkaran). Jika pemilihan diluar opsi yang ada maka aplikasi akan berakhir.

Setelah memilih salah satu formula, user diminta untuk mengimputkan nilai dalam format number (banyaknya kuantitas inputan bervariasi tergantung jenis formula yang dihitung). Aplikasi akan mengkalkulasi data input lalu menghasilkan informasi output.

Selanjutnya akan muncul opsi apakah masih ingin menghitung pada formula yang sama, atau ingin mengganti dengan formula lain. Jika ingin mengganti formula baru, otomatis aplikasi akan melakukan restart/reset pointer ke awal.

## Structure

Saya membagi struktur aplikasi dalam 4 jenis (saya sebut saja: entri, prototype, prosesor, helper):
+   entri adalah program main() yang akan menjadi pintu masuk pointer c++
    file: `main.cpp`
+   prototype adalah abstaksi method yang digunakan dan didistribusikan dalam program ini (prototype bisa memjadi rujukan awal jenis-jenis atau kuantitas pustaka method dalam aplikasi)
    file: `formula.h`
+   prosesor adalah file yang memproser formula input dan output, 
    file: `formula.cpp` (bagan awal prosedural) (tidak ada nilai balik)
    file: `rectangle.cpp, square.cpp, circle.cpp` (ketiganya memiliki nilai balik integer yang dibutuhkan oleh `formula.cpp`)
+   helper adalah seperangkat metode spesifik yang dibangun karena frekuensi penggunaan metode tersebut sering berulang
    file: `validator.cpp` (dibuat untuk melakukan intercept (pencegatan) input hanya khusus angka, memiliki nilai balik float yang dihitung oleh `rectangle.cpp, square.cpp, circle.cpp`)
    file: `repeat.cpp` (dibuat untuk melakukan opsi perulangan pada formula yang sedang digunakan, input karakter tersedia y/n, memiliki nilai balik integer yang digunakan untuk percabangan oleh `rectangle.cpp, square.cpp, circle.cpp`)