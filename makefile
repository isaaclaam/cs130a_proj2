all: project2_first.out project2_second.out

project2_first.out: project2_first.cpp dictionary.cpp hash24.cpp
	g++ -std=c++11 $^ -o $@

project2_second.out:project2_second.cpp dictionary.cpp hash24.cpp 
	g++ -std=c++11 $^ -o $@

clean:
	rm -f *.out