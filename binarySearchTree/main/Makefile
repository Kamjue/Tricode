COMPILADOR = g++
PARAMETROS = -Wall -std=c++11 -g -c
SRC = ../src/
CABECERAS = -I../include/
COMPILAR_OBJETO = $(COMPILADOR) $(CABECERAS) $(PARAMETROS) -o $(@) $(^)

main.exe: main.o bst.o
	$(COMPILADOR) $(CABECERAS) -g -o $@ $^

main.o: testy.cpp
	$(COMPILAR_OBJETO)

bst.o: $(SRC)bst.cpp
	$(COMPILAR_OBJETO)

clean:
	rm -f *.o *.exe
