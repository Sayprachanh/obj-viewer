CXX = g++
CXXFLAGS = -Wall -O2
LIBS = -lSDL2

TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).cpp $(LIBS)
