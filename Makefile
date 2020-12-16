ext: ext.o
	g++ myapp.o -o ext

ext.o: ext.cpp
	g++ -c ext.cpp

clean:
	rm *.o math
