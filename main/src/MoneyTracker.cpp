//============================================================================
// Name        : MoneyTracker.cpp
// Author      : AmadeusCPPL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Interpreter.h"
#include "Wallet.h"
#include "Errors.h"

using namespace std;

int main(int argc, char *argv[]) {
	Interpreter interpreter;
	if (argc <= 1) {
		cout << "There are no arguments:" << endl;
		return 0;
	} else {
		cout << "There are " << argc << " arguments:" << endl;
		int i = 1;
		if (interpreter.isValidCommand(argv[i])){
			if (argv[i] == "create") {
				cout<<"lkdsacm";
			}
		}
		/* for (int i = 0; i < argc; i++) {
			cout << i << " " << argv[i] << endl;
		} */
	}
	return 0;
}
