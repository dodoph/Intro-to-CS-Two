
#Date: 06-29-2018
#Description: Makefile of Lab1

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
LDFLAGS = -lboost_date_time

OBJS = readMatrix.o determinant.o main.o

SRCS = readMatrix.cpp determinant.cpp main.cpp

HEADERS = readMatrix.hpp determinant.hpp

#target: dependencies
#	rule to build
#

main: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o main

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o main

