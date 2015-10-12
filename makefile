COMP = g++ -Wall

LINK = g++ -o


main: moneytracker.exe

moneytracker: moneytracker.exe 

moneytracker.exe: wallet\src\WalletEntry.o main\src\MoneyTracker.o wallet\src\Wallet.o interpreter\src\Interpreter.o config\src\Errors.o
	$(LINK) moneytracker.exe config\src\Errors.o wallet\src\WalletEntry.o wallet\src\Wallet.o interpreter\src\Interpreter.o main\src\MoneyTracker.o

main\src\MoneyTracker.o: main\src\MoneyTracker.cpp interpreter\src\Interpreter.cpp interpreter\inc\Interpreter.h
	$(COMP) -Iconfig\inc -Iinterpreter\inc -Iwallet\inc -o main\src\MoneyTracker.o -c main\src\MoneyTracker.cpp

interpreter\src\Interpreter.o: interpreter\src\Interpreter.cpp interpreter\inc\interpreter.h interpreter\inc\ListOfCommands.h config\inc\Errors.h
	$(COMP)	-Iwallet\inc -Iconfig\inc -Iinterpreter\inc -o interpreter\src\Interpreter.o -c interpreter\src\Interpreter.cpp

wallet\src\Wallet.o: wallet\src\Wallet.cpp wallet\src\WalletEntry.cpp wallet\inc\Wallet.h wallet\inc\WalletEntry.h config\inc\Errors.h
	$(COMP) -Iwallet\inc -Iconfig\inc -o wallet\src\Wallet.o -c wallet\src\Wallet.cpp 

wallet\src\WalletEntry.o: wallet\src\WalletEntry.cpp wallet\inc\WalletEntry.h
	$(COMP) -Iwallet\inc -Iconfig\inc -o wallet\src\WalletEntry.o -c wallet\src\WalletEntry.cpp
	
config\src\Errors.o: config\src\Errors.cpp config\inc\ErrorTypes.h config\inc\Errors.h
	$(COMP) -Iconfig\inc -o config\src\Errors.o -c config\src\Errors.cpp
	
clean: 
	del /S *.o
	del /S *.exe
