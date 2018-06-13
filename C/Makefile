.PHONY: all clean
.RECIPEPREFIX +=

CC = gcc
CFLAGS = -O2 -Wall -Wextra -g
RM = rm -f

BINS = Problem001 Problem002 

all: problem001 problem002

clean:
  $(RM) $(BINS)

problem001:
    $(CC) $(CFLAGS) -o Problem001 Problem001.c

problem002:
    $(CC) $(CFLAGS) -o Problem002 Problem002.c