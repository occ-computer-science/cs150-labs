EXE=inherit
OBJS=person.o student.o client.o
CXXFLAGS=-std=c++17
CXX=@g++

$(EXE):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXE)

run: $(EXE)
	./$(EXE)
