#
# Makefile for WhatToWear
#
# 1/1/22
#
# Add any testing files before running the provide target
# 

CXX      = clang++
CXXFLAGS = -g3 -Wall -Wextra -std=c++11 
INCLUDES = $(shell echo *.h)

WhatToWear: main.o Weather.o Outfit.o Warmth.o WhatToWear.o
	${CXX} -o $@ $^

WhatToWear.o: WhatToWear.cpp Warmth.h Outfit.h Weather.h
	$(CXX) $(CXXFLAGS) -c WhatToWear.cpp

Warmth.o: Warmth.cpp Outfit.h Weather.h
	$(CXX) $(CXXFLAGS) -c Warmth.cpp

Outfit.o: Outfit.cpp Outfit.h
	$(CXX) $(CXXFLAGS) -c Outfit.cpp

Weather.o: Weather.cpp Weather.h
	$(CXX) $(CXXFLAGS) -c Weather.cpp

main.o: main.cpp Weather.h Outfit.h Warmth.h
	$(CXX) $(CXXFLAGS) -c main.cpp

%.o: %.cpp ${INCLUDES}
	${CXX} ${CXXFLAGS} -c $<

clean:
	rm -rf WhatToWear *.o *.dSYM