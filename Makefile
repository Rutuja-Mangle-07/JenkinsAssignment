#Makefile
CC=gcc
TARGET=main

all:
	$(CC) main.c func.c -o $(TARGET)
clean:
	rm $(TARGET)
