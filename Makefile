PROGRAM = zuul.exe
CXXFLAGS = -Wall -g

$(PROGRAM): zuul.o room.o
	g++ -o $@ $^

clean:
	rm -f $(PROGRAM) *.o

run: $(PROGRAM)
	./$(PROGRAM)

room.o: room.cpp room.h
zuul.o:  zuul.cpp room.h

