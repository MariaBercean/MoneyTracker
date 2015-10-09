//============================================================================
// Name        : MoneyTracker.cpp
// Author      : AmadeusCPPL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Interpreter.h"

using namespace std;

int main(int argc, char *argv[]) {
	Interpreter interpreter;
	if (argc <= 1) {
		Error_C :: SetError(NO_FILE_NAME_ERR);	
		Error_C :: PrintError();
		return 0;
	} 
	else {
		int i = 1;

		//cout<<argv[i]<<endl;
		if (interpreter.isValidCommand(argv[i])){
			if (string(argv[i]) == "create") {
				string fileName = argv[i+1];
				string amount = argv[i+2];
				interpreter.createWallet(fileName, amount);
			} else {
				string fileName = "file.txt";
				string amount = argv[i+1];
				interpreter.addIncome(fileName, amount);
			}
		for (int i = 0; i < argc; i++) {
			cout << i << " " << argv[i] << endl;
			}
		}
	}

	return 0;
}
