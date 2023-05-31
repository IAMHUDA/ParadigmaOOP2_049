#include <iostream>
using namespace std;

class baseCLass {
public:
	virtual void perkenalan() final {
		cout << "halo sayang function dari base class";
	}
};

class derivedClass : public baseClass {
public:
	void perkenalan() {  
		cout << " halo saya function dari derived class";
	}
};

int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}