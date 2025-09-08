CC = g++
FLAGS = -O2 -std=c++23

dys: dys.cpp test.cpp
	$(CC) $(FLAGS) -o dys dys.cpp test.cpp

run:
	./dys