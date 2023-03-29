## Compiler and compiler flags
CXX = g++

## Directories
SRCDIR = src

## Source files and object files
SRCS = $(wildcard $(SRCDIR)/*/*.cpp)

## Target executable
TARGET = cpp-practise

cpp-practise: $(TARGET).cpp $(SRCS)
	$(CXX) -o $(TARGET) $(TARGET).cpp $(SRCS)