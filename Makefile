PROGRAM = zuul0.exe
CXXFLAGS = -Wall -g

$(PROGRAM): zuul.o room.o main.o
	g++ -o $@ $^

clean:
	rm -f $(PROGRAM) *.o

run: $(PROGRAM)
	./$(PROGRAM)

main.o: main.cpp zuul.h room.h
room.o: room.cpp room.h
zuul.o: zuul.cpp room.h

