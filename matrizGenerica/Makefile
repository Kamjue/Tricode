CXX = g++
CXXFLAGS = -Wall -std=c++11
INCLUDE = -I ./include/
SRC = ./src/

main.exe: main.o Circulo.o Cuadrado.o
	$(CXX) $(CXXFLAGS) $^ -o $@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $^ $(INCLUDE)

Circulo.o: $(SRC)Circulo.cpp
	$(CXX) $(CXXFLAGS) -c $^ $(INCLUDE)

Cuadrado.o: $(SRC)Cuadrado.cpp
	$(CXX) $(CXXFLAGS) -c $^ $(INCLUDE)


clean:
	rm -f *.o main.exe