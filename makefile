ext: ext.o
	g++ ext.o -o ext

ext.o: ext.cpp
	g++ -c ext.cpp

clean:
	rm *.o math
