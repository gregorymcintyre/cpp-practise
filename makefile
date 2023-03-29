## Compiler and compiler flags
CXX = g++

## Directories
SRCDIR = src
BLDDIR = build

## Source files and object files
SRCS = $(wildcard $(SRCDIR)/*/*.cpp)

## Target executable
TARGET = cpp-practise

cpp-practise: $(TARGET).cpp $(SRCS)
	$(CXX) -o $(BLDDIR)/$(TARGET) $(TARGET).cpp $(SRCS)

clean: 
	$(RM) $(BLDDIR)/$(TARGET)