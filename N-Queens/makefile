CC=g++
CCFLAGS=-c -I.
DEPS=Board.hpp Queen.hpp
TARGET=nqueens
OBJS=main.o Board.o Queen.o

%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

clean:
	rm -f $(TARGET) $(OBJS)
