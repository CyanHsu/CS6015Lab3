#Makefile for CS6015 Homeworks
#
#Target: msdscript
#clean delets msdscript, and all .o files

HEADERS = cmdline.hpp Expr.hpp catch.h tests.hpp
CXXSOURCE= main.cpp cmdline.cpp Expr.cpp tests.cpp
CFLAGS = -std=c++11

msdscript: $(CXXSOURCE) $(HEADERS)
	$(CXX) $(CFLAGS) -c $(CXXSOURCE)
	$(CXX) $(CFLAGS) -o msdscript $(CXXSOURCE)

.PHONY: clean
clean: 
	rm -rf *.o msdscript
	
.PHONY: test
test: msdscript
	./msdscript --test

