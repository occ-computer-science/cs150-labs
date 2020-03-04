EXE=inherit
OBJS=person.o	student.o	client.o
CXXFLAGS=-std=c++17 -Wall -Wextra -Werror -O0 -ggdb3 -fsanitize=signed-integer-overflow -fsanitize=undefined -Wno-unused-parameter -Wno-unused-variable -Wshadow

$(EXE):	$(OBJS)
		$(CXX)	$(CXXFLAGS)	$(OBJS)	-o	$(EXE)

run: $(EXE)
		./$(EXE)
