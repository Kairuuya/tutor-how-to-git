/*
Nama Program  : Menghitung Volume Prisma Segitiga
Nama          : Khaerul Maulud Weliyanto
NPM           : 140810260019
Tanggal Buat  : 31 Agustus 2026
Deskripsi     : Program untuk menghitung volume prisma segitiga
*/

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int hitung_volume_prisma() {
  string diketahui_luas;
  int jenis_segitiga;
  double luas_alas = 0, tinggi_prisma = 0, volume = 0;

  cout << "Apakah luas alas sudah diketahui? (Ya/Tidak): ";
  // by default exit
  if (!getline(cin, diketahui_luas)) {
    return 1;
  }
  if (diketahui_luas == "Ya" || diketahui_luas == "ya") {
    cout << "Masukkan luas alas: ";
    cin >> luas_alas;
  } else if (diketahui_luas == "Tidak" || diketahui_luas == "tidak") {
    cout << "\nPilih jenis alas segitiga:\n";
    cout << "1. Segitiga siku-siku (alas & tinggi)\n";
    cout << "2. Segitiga sama sisi\n";
    cout << "3. Segitiga sembarang (3 sisi)\n";
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> jenis_segitiga;

    switch (jenis_segitiga) {
    case 1: {
      double alas_segitiga, tinggi_segitiga;
      cout << "Masukkan alas segitiga: ";
      cin >> alas_segitiga;
      cout << "Masukkan tinggi segitiga: ";
      cin >> tinggi_segitiga;
      luas_alas = 0.5 * alas_segitiga * tinggi_segitiga;
      break;
    }
    case 2: {
      double sisi_segitiga;
      cout << "Masukkan panjang sisi segitiga: ";
      cin >> sisi_segitiga;
      luas_alas = (sqrt(3.0) / 4.0) * (sisi_segitiga * sisi_segitiga);
      break;
    }
    case 3: {
      double sisi_a, sisi_b, sisi_c, S;
      cout << "Masukkan sisi_a: ";
      cin >> sisi_a;
      cout << "Masukkan sisi_b: ";
      cin >> sisi_b;
      cout << "Masukkan sisi_c: ";
      cin >> sisi_c;

      S = (sisi_a + sisi_b + sisi_c) / 2.0;
      luas_alas = sqrt(S * (S - sisi_a) * (S - sisi_b) * (S - sisi_c));
      break;
    }
    default:
      cout << "Input jenis segitiga; --literasi" << endl;
      return 1;
    }
  } else {
    cout << "Input diketahui luas segitiga; --literasi" << endl;
    return 1;
  }

  cout << "\nMasukkan tinggi prisma: ";
  cin >> tinggi_prisma;

  volume = luas_alas * tinggi_prisma;

  cout << "\n======================================\n";
  cout << "Luas Alas Segitiga : " << luas_alas << endl;
  cout << "Volume Prisma      : " << volume << endl;
  cout << "======================================\n";
  return 0;
}

int main() {

  hitung_volume_prisma();
  return 0;
}