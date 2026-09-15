/*
Nama Program  : Program Penilaian
Nama          : Khaerul Maulud Weliyanto
NPM           : 140810260019
Tanggal Buat  : 7 September 2026
Deskripsi     : Program Penilaian dengan If-Else
*/

#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int main() {
  int nilai = 0;
  string mutu = "E";
  cout << "Masukan Nilai: " << endl;
  cin >> nilai;
  if (nilai >= 80) {
    mutu = 'A';
  } else if (nilai >= 68 && nilai < 80) {
    mutu = 'B';
  } else if (nilai >= 56 && nilai < 68) {
    mutu = 'C';
  } else if (nilai >= 45 && nilai < 56) {
    mutu = 'D';
  } else if (nilai < 45) {
    mutu = 'E';
  }

  if (nilai >= 65) {
    cout << "Selamat anda dinyatakan LULUS dengan mutu : " << mutu << endl;
  } else {
    cout << "Anda dinyatakan TIDAK LULUS dengan mutu: " << mutu << endl;
  }

  return 0;
}