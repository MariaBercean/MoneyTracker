//============================================================================
// Name        : MoneyTracker.cpp
// Author      : AmadeusCPPL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Interpreter.h"

using namespace std;

int main(int argc, char *argv[]) {
	Interpreter inter;
	if (argc <= 1) {
		cout << "There are no arguments:" << endl;
		return 0;
	} 
	else {
		int i = 1;
		if (inter.isValidCommand(argv[i]) == 1){
		}
			if (string(argv[i]) == "create") {
				string fileName = argv[2];
				string amount = argv[3];
				inter.createWallet(fileName,amount);
			}
			else{
				string amount = argv[2];
				inter.addIncome("MyWallet.txt",amount);
				cout << "The income was added to file!" << endl;
			}
		}
		
	return 0;
}
