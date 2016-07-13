all: animals.cc

%: %.cc
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@

