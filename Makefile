CFLAGS = -Wall -Werror
CC = g++ -c $< -o $@ $(CFLAGS)
.PHONY: all clean

all: bin build bin/OneHundredMatches


bin/OneHundredMatches: build/main.o
	g++ $^ -o $@ $(CFLAGS)

build/main.o: src/main.cpp
	$(CC)

build: 
	mkdir build
bin:
	mkdir bin

clean:
	rm -rf build
	rm -rf bin
	
