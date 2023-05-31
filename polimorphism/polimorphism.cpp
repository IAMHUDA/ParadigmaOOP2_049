#include <iostream>
using namespace std;

class seseorang {
public:
	virtual void pesan() = 0;
	// virtual void pesan(){
	// cout << "Pesan dari seseorang" << endl;
	// }
	virtual void cetak() {

	}
};

class joko : public seseorang {
public:
	void pesan() {
		cout << "pesan dari  joko " << endl;
	}
	void cetak() {
		cout << "tulisan joko" << endl;
	}
};

class lia :public seseorang {
public:
	void pesan() {
		cout << "pesan dari lia" << endl;
	}
};

int main() {
	seseorang* obyek;
	joko a;
	lia b;

	obyek = &a;
	obyek->pesan();
	obyek = &b;
	obyek->pesan();
	// a.seseorang::pesan();
	// b.seseorang::pesan();

	return 0;
}