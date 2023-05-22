#pragma once
#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
public:
	string name;
	jantung varJantung;

	manusia(string pNama)
		: name(pName) {
		cout << nama << "hidup\n";
	}
	~manusia() {
		cout << nama << "mati\n";
	}
};
#endif