CXX = g++
CXXFLAGS = -Wall -std=c++11
SRC = ../src/
INCLUDE = -I ../include/
COMPILE = $(CXX) $(CXXFLAGS) -c $^ $(INCLUDE)

test.exe: test.o Moto.o VdeCarga.o Vehiculo.o
	$(CXX) $(CXXFLAGS) $^ -o $@
test.o: test.cpp
	$(COMPILE)
Moto.o: $(SRC)Moto.cpp
	$(COMPILE)
VdeCarga.o: $(SRC)VdeCarga.cpp
	$(COMPILE)
Vehiculo.o: $(SRC)Vehiculo.cpp
	$(COMPILE)

clean:
	rm -f *.o *.exe
