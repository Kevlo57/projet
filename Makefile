CXX = g++
EXEC = projet 
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.c=.o)

all : $(EXEC)

%.o : %.cpp
	$(CXX) -o $(OBJ) -c $(SRC)

$(EXEC) : $(OBJ)
	$(CXX) -o $(EXEC) $(OBJ)

clean :
	rm -rf *.o

mrproper : clean
	rm -rf $(EXEC)