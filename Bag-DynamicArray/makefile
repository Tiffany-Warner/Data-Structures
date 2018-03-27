### File : Makefile for Bag
### Author : Tiffany Warner 
### Description: Compiles files for Bag Class and driver program

###Creating default variables###
# Compiler
CXX = g++
# Object files
OBJS = DyArray.o Bag.o main.o

# Source Files
SRCS = DyArray.cpp Bag.cpp main.cpp

# Header Files
HEADERS = DyArray.hpp Bag.hpp
 
# Compiler Flags
CXXFLAGS = -std=c++0x
#CXXFLAGS += -Wall 
#CXXFLAGS += -pedantic-errors
#CXXFLAGS += -g

.PHONY:clean

#targets:
bag: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS}  -o bag

#Implicit target
${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
clean:
	rm bag ${OBJS}

