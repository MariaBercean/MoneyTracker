COMPILE = g++
CFLAGS = -Wall -c -I..\inc

all: main

main : WalletEntry.o Wallet.o main.o 
	$(COMPILE) -o main.exe main.o WalletEntry.o Wallet.o
	main.exe
	
main.o : main.cpp ..\inc\WalletEntry.h ..\inc\Wallet.h 
	$(COMPILE) $(CFLAGS) main.cpp 
	
WalletEntry.o : ..\inc\WalletEntry.h WalletEntry.cpp
	$(COMPILE) $(CFLAGS) WalletEntry.cpp 

Wallet.o : ..\inc\Wallet.h Wallet.cpp
	$(COMPILE) $(CFLAGS) Wallet.cpp 
		
clean: 
	del *.o
	del *.exe

