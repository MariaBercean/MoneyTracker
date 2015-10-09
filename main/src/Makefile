COMPILE = g++
CFLAGS = -Wall -c -I..\..\config\inc -I..\..\interpreter\inc -I..\..\wallet\inc

all: MoneyTracker

MoneyTracker : ..\..\wallet\src\WalletEntry.o ..\..\wallet\src\Wallet.o ..\..\config\inc\Errors.o ..\..\interpreter\src\Interpreter.o MoneyTracker.o 
	$(COMPILE) -o MoneyTracker.exe MoneyTracker.o ..\..\wallet\src\WalletEntry.o ..\..\wallet\src\Wallet.o ..\..\config\inc\Errors.o ..\..\interpreter\src\Interpreter.o
	MoneyTracker.exe
#	
MoneyTracker.o : MoneyTracker.cpp ..\..\interpreter\inc\Interpreter.h ..\..\wallet\inc\WalletEntry.h ..\..\wallet\inc\Wallet.h ..\..\config\inc\Errors.h ..\..\config\inc\ErrorTypes.h 
	$(COMPILE) $(CFLAGS) MoneyTracker.cpp 
	
WalletEntry.o : ..\..\wallet\inc\WalletEntry.h ..\..\wallet\src\WalletEntry.cpp
	$(COMPILE) $(CFLAGS) ..\..\wallet\src\WalletEntry.cpp 

Wallet.o : ..\..\wallet\inc\Wallet.h ..\..\wallet\src\Wallet.cpp ..\..\config\inc\Errors.h ..\..\config\inc\ErrorTypes.h
	$(COMPILE) $(CFLAGS) ..\..\wallet\src\Wallet.cpp 
	
Interpreter.o : ..\..\interpreter\src\Interpreter.cpp ..\..\interpreter\inc\Interpreter.h ..\..\wallet\inc\Wallet.h ..\..\config\inc\Errors.h ..\..\config\inc\ErrorTypes.h
	$(COMPILE) $(CFLAGS) ..\..\interpreter\src\Interpreter.cpp 
	
Errors.o : ..\..\config\inc\Errors.cpp ..\..\config\inc\Errors.h ..\..\config\inc\ErrorTypes.h
	$(COMPILE) $(CFLAGS) ..\..\config\inc\Errors.cpp



		
clean: 
	del *.o
	del *.exe

