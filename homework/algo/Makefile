CXX = g++
CXXFLAGS = -std=c++17 -Wall -I h -I /usr/local/include/gtest/ -I include/ -c
LXXFLAGS = -std=c++17 -I h -pthread
OBJECTS = ./obj/logic.o ./obj/main.o ./obj/logic_unittest.o
GTEST = /usr/local/lib/libgtest.a
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS) $(GTEST)
./obj/logic.o: logic.cpp
	$(CXX) $(CXXFLAGS) logic.cpp -o ./obj/logic.o
./obj/logic_unittest.o: logic_unittest.cpp
	$(CXX) $(CXXFLAGS) logic_unittest.cpp -o ./obj/logic_unittest.o
./obj/main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o ./obj/main.o
clean:
	rm -fv $(TARGET) $(OBJECTS)
