# Compiler and flags
CXX := g++

# Default target
all:
	@echo "Usage: make compile FILE=filename.cpp"
	@echo "Example: make compile FILE=main.cpp"

# Compile a single C++ file
compile:
	$(CXX) -o $(basename $(FILE)) $(FILE)

# Clean compiled executables
clean:
	rm -f $(wildcard *.exe) $(wildcard *.out) $(basename $(FILE))

.PHONY: all compile clean