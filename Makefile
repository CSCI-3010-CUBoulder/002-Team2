CXX = g++
CXXFLAGS = -std=c++17 -Wall

run: all
	./test

all: main test

clean:
	rm main *.o

main: UtilityFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.o -o main

test: UtilityFunctions.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp UtilityFunctions.o -o test

UtilityFunctions.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp
