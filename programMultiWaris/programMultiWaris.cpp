#include <iostream>
#include <iostream>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;
	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
};

class manusia {
public:
	string jeniskelamin;
	manusia(string pjenisKelamin) :
		jeniskelamin(pjenisKelamin) {
		cout << "manusia dibuat\n" << endl;
	}
	~manusia() {
		cout << "manusia di hapus\n" << endl;
	}
};

class pelajar : private manusia, public orang {
public:
	string sekolah;

	pelajar(string pNama, string pjenisKelamin, string pSekolah) :
		orang(pNama),
		manusia(pjenisKelamin),
		sekolah(pSekolah) {
		cout << "pelajar di buat\n" << endl;
	}
	~pelajar() {
		cout << "pelajar di hapus\n" << endl;
	}
	string perkenalan() {
		return "hello, nama saya " + nama + "dengan jenis kelamin " + jeniskelamin + "dari sekolah" + sekolah + "\n\n";
	}
};

int main() {
	pelajar siswa("andi laksono", "laki laki", "sman1 bantul");
	cout << siswa.perkenalan();

	return 0;
}