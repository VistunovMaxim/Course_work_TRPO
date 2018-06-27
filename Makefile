CC = gcc
CFLAGS = -Wall -Werror

OBJ = $(CC) -c $< -o $@ $(CFLAGS)
MKDIR_BUILD_SRC = mkdir -p build/src
MKDIR_BUILD_TEST = mkdir -p build/test

.PHONY: clean test

default: bin/final_product

test: bin/test
	$<

bin/test: build/test/main.o build/src/check.o
	mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@

build/test/main.o: test/main.c thirdparty/ctest.h
	$(MKDIR_BUILD_TEST)
	$(OBJ) -I thirdparty -I src

bin/final_product: build/src/check.o build/src/main.o
	mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@

build/src/check.o: src/check.c
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/src/main.o: src/main.c
	$(MKDIR_BUILD_SRC)
	$(OBJ)

clean:
	rm -rf bin build