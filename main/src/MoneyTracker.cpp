//============================================================================
// Name        : MainArgs.cpp
// Author      : AmadeusCPPL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	if (argc <= 1) {
		cout << "There are no arguments:" << endl;
		return 0;
	} else {
		cout << "There are " << argc << " arguments:" << endl;
		for (int i = 0; i < argc; i++) {
			cout << i << " " << argv[i] << endl;
		}
	}
	return 0;
}
