CXX = g++
CXXFLAGS = -std=c++17 -Wall
SRC = src/main.cpp src/SDE.cpp src/RandomGenerator.cpp src/PathAnalyzer.cpp src/Utils.cpp
INCLUDE = -Iinclude
OUT = SDE_Simulator

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) $(INCLUDE) -o $(OUT)

clean:
	rm -f $(OUT)
