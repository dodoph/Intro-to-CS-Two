#Date: 07-07-2018
#Description: Makefile of Lab2

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
LDFLAGS = -lboost_date_time

OBJS = letter.o main.o

SRCS = letter.cpp main.cpp

HEADERS = letter.hpp

#target: dependencies
#	rule to build
#

main: ${OBJS} ${HADERS}
	${CXX} ${OBJS} -o main

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o main