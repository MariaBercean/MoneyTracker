COMP = g++ -Wall

LINK = g++ -o

main: MoneyTracker.exe
<<<<<<< HEAD
	main.exe
	
MoneyTracker.exe: wallet\src\WalletEntry.o main\src\MoneyTracker.o wallet\src\Wallet.o interpreter\src\Interpreter.o config\src\Errorst.o
	$(LINK) main config\src\Errors.o wallet\src\WalletEntry.o wallet\src\Wallet.o interpreter\src\Interpreter.o main\src\MoneyTracker.o

main\src\MoneyTracker.o: main\src\MoneyTracker.cpp interpreter\src\Interpreter.cpp interpreter\inc\Interpreter.h
	$(COMP) -o main\src\MoneyTracker.o -c main\src\MoneyTracker.cpp

interpreter\src\Interpreter.o: interpreter\src\Interpreter.cpp interpreter\inc\interpreter.h interpreter\inc\ListOfCommands.h config\inc\Errorst.h
	$(COMP)	-Iwallet\inc -Iconfig\inc -o interpreter\src\Interpreter.o -c interpreter\src\Interpreter.cpp
=======
	
MoneyTracker.exe: wallet\src\WalletEntry.o main\src\MoneyTracker.o wallet\src\Wallet.o interpreter\src\Interpreter.o config\src\Errorst.o
	$(LINK) MoneyTracker config\src\Errorst.o wallet\src\WalletEntry.o wallet\src\Wallet.o interpreter\src\Interpreter.o main\src\MoneyTracker.o

main\src\MoneyTracker.o: main\src\MoneyTracker.cpp interpreter\src\Interpreter.cpp interpreter\inc\Interpreter.h
	$(COMP) -Iconfig\inc -Iinterpreter\inc -Iwallet\inc -o main\src\MoneyTracker.o -c main\src\MoneyTracker.cpp

interpreter\src\Interpreter.o: interpreter\src\Interpreter.cpp interpreter\inc\interpreter.h interpreter\inc\ListOfCommands.h config\inc\Errorst.h
	$(COMP)	-Iwallet\inc -Iconfig\inc -Iinterpreter\inc -o interpreter\src\Interpreter.o -c interpreter\src\Interpreter.cpp
>>>>>>> Taskcata

wallet\src\Wallet.o: wallet\src\Wallet.cpp wallet\src\WalletEntry.cpp wallet\inc\Wallet.h wallet\inc\WalletEntry.h config\inc\Errorst.h
	$(COMP) -Iwallet\inc -Iconfig\inc -o wallet\src\Wallet.o -c wallet\src\Wallet.cpp 

wallet\src\WalletEntry.o: wallet\src\WalletEntry.cpp wallet\inc\WalletEntry.h
	$(COMP) -Iwallet\inc -Iconfig\inc -o wallet\src\WalletEntry.o -c wallet\src\WalletEntry.cpp
	
<<<<<<< HEAD
config\src\Errors.o: config\src\Errorst.cpp config\inc\ErrorTypes.h config\inc\Errorst.h
	$(COMP) -Iconfig\inc -o config\src\Errorst.o -c config\src\Errorst.cpp
=======
config\src\Errorst.o: config\src\Errorst.cpp config\inc\ErrorTypes.h config\inc\Errorst.h
	$(COMP) -Iconfig\inc -o config\src\Errorst.o -c config\src\Errorst.cpp
	
clear:
	rm config\src\Errorst.o
	rm wallet\src\WalletEntry.o
	rm wallet\src\Wallet.o
	rm interpreter\src\Interpreter.o
	rm main\src\MoneyTracker.o
	rm *.exe
>>>>>>> Taskcata
