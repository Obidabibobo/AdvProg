#==================================================================================================
#
#  Advanced Programming Techniques (AdvPT)
#  Winter Term 2010
#  Assignment 2 - Makefile
#
#==================================================================================================

#CXX     	= g++
#CXXFLAGS 	= -O2 -g -Wall -fmessage-length=0

CXX = g++
CXXFLAGS = -Wall -Werror -Wshadow -ansi -pedantic

SRC = $(wildcard ./*.cpp)
BIN = $(SRC:.cpp=)

all: default

default: $(BIN)

clean:
	$(RM) $(BIN)
