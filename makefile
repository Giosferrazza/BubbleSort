output: sfml.o
	g++ sfml.o -o output -L/opt/homebrew/opt/sfml/lib -lsfml-graphics -lsfml-window -lsfml-system

sfml.o: sfml.cpp
	g++ -c sfml.cpp -o sfml.o -I/opt/homebrew/opt/sfml/include

clean:
	rm *.o output