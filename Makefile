CXX = g++
CXXFLAGS = -std=c++17 -Wall

run: all
	./test

all: main test

clean:
	rm UtilityFunctions.o main test

test: UtilityFunctions.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp UtilityFunctions.o -o test

main: UtilityFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.o -o main

UtilityFunctions.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp
