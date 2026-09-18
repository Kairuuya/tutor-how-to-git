/*
Nama Program  : Program Vending machine
Nama          : Khaerul Maulud Weliyanto
NPM           : 140810260019
Tanggal Buat  : 18 September 2026
Deskripsi     : Program untuk Vending machine
*/

#include <iostream>
using namespace std;

void tugas2() {
  int pilihan, harga = 0, uang;

  cout << "=== VENDING MACHINE AUTOMAT ===" << endl;
  cout << "Pilihan Minuman:" << endl;
  cout << "1. Air Mineral (Rp 4000)" << endl;
  cout << "2. Teh Botol (Rp 6000)" << endl;
  cout << "3. Kopi Susu (Rp 10000)" << endl;

  cout << "Pilih kode minuman (1-3): ";
  cin >> pilihan;

  switch (pilihan) {
  case 1:
    harga = 4000;
    break;
  case 2:
    harga = 6000;
    break;
  case 3:
    harga = 10000;
    break;
  default:
    cout << "\n--- DETAIL TRANSAKSI ---" << endl;
    cout << "Kode tidak valid! Silakan pilih angka 1-3." << endl;
    return;
  }

  cout << "Masukkan uang Anda (Rp): ";
  cin >> uang;

  cout << "\n--- DETAIL TRANSAKSI ---" << endl;

  if (uang < harga) {
    cout << "Transaksi Gagal! Uang Anda kurang Rp " << (harga - uang) << endl;
  } else {
    int kembalian = uang - harga;
    cout << "Transaksi Berhasil!" << endl;
    cout << "Harga Barang\t: Rp " << harga << endl;
    cout << "Uang Anda\t: Rp " << uang << endl;
    cout << "Kembalian\t: Rp " << kembalian << endl;

    int lembar5k = kembalian / 5000;
    int sisa = kembalian % 5000;
    int lembar1k = sisa / 1000;

    if (lembar5k > 0) {
      cout << "- Lembar Rp 5.000\t: " << lembar5k << endl;
    }
    if (lembar1k > 0) {
      cout << "- Lembar Rp 1.000\t: " << lembar1k << endl;
    }
  }
}

int main() {
  tugas2();
  return 0;
}