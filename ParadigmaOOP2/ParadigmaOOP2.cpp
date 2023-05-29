#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;
	orang(string pNama) :
		nama(pNama) {
		cout << "Orang dibuat\n" << endl;
	}
	~orang() {
		cout << "Orang dihapuskan\n" << endl;
	}
};

class manusia {
public:
	string jenisKelamin;

	manusia(string pJenisKelamin) :
		jenisKelamin(pJenisKelamin) {
		cout << "Manusia dibuat\n" << endl;
	}
	~manusia() {
		cout << "Manusia dihapus\n" << endl;
	}
};

class pelajar : private manusia, public orang {
public:
};