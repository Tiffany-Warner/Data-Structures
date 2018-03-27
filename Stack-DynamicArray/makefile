### File : Makefile for Stack
### Author : Tiffany Warner 
### Description: Compiles files for Stack Class and driver program

###Creating default variables###
# Compiler
CXX = g++
# Object files
OBJS = DyArray.o Stack.o main.o

# Source Files
SRCS = DyArray.cpp Stack.cpp main.cpp

# Header Files
HEADERS = DyArray.hpp Stack.hpp
 
# Compiler Flags
CXXFLAGS = -std=c++0x
#CXXFLAGS += -Wall 
#CXXFLAGS += -pedantic-errors
#CXXFLAGS += -g

.PHONY:clean

#targets:
stack: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS}  -o stack

#Implicit target
${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
clean:
	rm stack ${OBJS}

