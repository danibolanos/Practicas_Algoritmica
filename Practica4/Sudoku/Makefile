INC = include
OBJ = obj
SRC = src
BIN = bin
CXX = g++
CPPFLAGS = #-Wall -g


all: $(BIN)/prueba

# ************ Compilación de módulos ************

$(BIN)/prueba : $(OBJ)/main.o $(OBJ)/sudoku.o 
	$(CXX) -o $(BIN)/prueba $(OBJ)/main.o $(OBJ)/sudoku.o

$(OBJ)/main.o : $(INC)/sudoku.h $(SRC)/main.cpp
	$(CXX) $(CPPFLAGS) -I./$(INC) -c -o $(OBJ)/main.o $(SRC)/main.cpp

$(OBJ)/sudoku.o : $(INC)/sudoku.h $(SRC)/sudoku.cpp
	$(CXX) $(CPPFLAGS) -I./$(INC) -c -o $(OBJ)/sudoku.o $(SRC)/sudoku.cpp

# ************ Limpieza ************
clean :
	echo "Limpiando..."
	rm -f $(OBJ)/*.o

mrproper : clean
	rm -f $(BIN)/*
