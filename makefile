parametrosCompilacao=-Wall #-Wshadow
nomeAula=prototype

all: $(nomeAula) 
	
$(nomeAula):main.o Prototype.o ConcretoPrototype1.o ConcretoPrototype2.o PrototypeFactory.o
	g++ -o $(nomeAula) main.o Prototype.o ConcretoPrototype1.o ConcretoPrototype2.o PrototypeFactory.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Prototype.o: Prototype.hpp Prototype.cpp
	g++ -c Prototype.cpp $(parametrosCompilacao)

ConcretoPrototype1.o: ConcretoPrototype1.hpp ConcretoPrototype1.cpp
	g++ -c ConcretoPrototype1.cpp $(parametrosCompilacao)

ConcretoPrototype2.o: ConcretoPrototype2.hpp ConcretoPrototype2.cpp
	g++ -c ConcretoPrototype2.cpp $(parametrosCompilacao)

PrototypeFactory.o: PrototypeFactory.hpp PrototypeFactory.cpp
	g++ -c PrototypeFactory.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomeAula)
