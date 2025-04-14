# Makefile to compile and run a C++ program

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -g

# Source and executable
SRC = main.cpp TODO.cpp
EXEC = todoApp

# Default target
all: $(EXEC)

# Rule to build the executable
$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

# Rule to run the executable
run: $(EXEC)
	./$(EXEC)

# Rule to clean up the compiled files
clean:
	rm -f $(EXEC)

# Phony targets
.PHONY: all run clean
