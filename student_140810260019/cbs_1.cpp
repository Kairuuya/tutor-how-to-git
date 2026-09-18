/*
Nama Program  : Program Kasir
Nama          : Khaerul Maulud Weliyanto
NPM           : 140810260019
Tanggal Buat  : 18 September 2026
Deskripsi     : Program untuk Kasir
*/

#include <iostream>
using namespace std;

void tugas1() {
  double totalBelanja, diskonPersen = 0, nominalDiskon, totalBayar;

  cout << "=== Kalkulator Kasir Toko Buku ===" << endl;
  cout << "Masukkan total belanja (Rp): ";
  cin >> totalBelanja;

  if (totalBelanja >= 300000) {
    diskonPersen = 20;
  } else if (totalBelanja >= 100000) {
    diskonPersen = 10;
  } else {
    diskonPersen = 0;
  }

  nominalDiskon = totalBelanja * (diskonPersen / 100);
  totalBayar = totalBelanja - nominalDiskon;

  cout << endl;
  cout << "--- Ringkasan Pembayaran ---" << endl;
  cout << "Diskon (" << diskonPersen << "%)   : Rp " << nominalDiskon << endl;
  cout << "Total Bayar   : Rp " << totalBayar << endl;
}

int main() {
  tugas1();
  return 0;
}