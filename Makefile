
	#gcc -Wall main.c -g -lpthread -o forking && ./forking 
	#gcc -c datastruct.h -o datastruct.o
#all: datastruct.o main.c
all: main.c datastruct.c datastruct.h
	gcc -Wall main.c -g -o main 

#datastruct.o: datastruct.c datastruct.h

test:
	./main

clean:
	-rm main main.o datastruct.o 
	-rm -rf main.dSYM


