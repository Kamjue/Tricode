CXX = g++
PARAMS = -Wall -std=c++11 -g -c
SRC = ../src/
HEADERS = -I../include/
COMPILE_OBJECT = $(CXX) $(HEADERS) $(PARAMS) -o $(@) $(^)

main.exe: main.o bst.o
	$(CXX) $(HEADERS) -g -o $@ $^

main.o: test.cpp
	$(COMPILE_OBJECT)

bst.o: $(SRC)bst.cpp
	$(COMPILE_OBJECT)

clean:
	rm -f *.o *.exe
