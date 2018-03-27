### File : Makefile for Dynamic Array
### Author : Tiffany Warner 
### Description: Compiles files for dynamic array and driver program

###Creating default variables###
# Compiler
CXX = g++
# Object files
OBJS = DyArray.o main.o

# Source Files
SRCS = DyArray.cpp main.cpp

# Header Files
HEADERS = DyArray.hpp 
 
# Compiler Flags
CXXFLAGS = -std=c++0x
#CXXFLAGS += -Wall 
#CXXFLAGS += -pedantic-errors
#CXXFLAGS += -g

.PHONY:clean

#targets:
dyArray: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS}  -o dyArray

#Implicit target
${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
clean:
	rm dyArray ${OBJS}

#REFERENCE:Code heavily based on Lecture 2:Make files McGrath
