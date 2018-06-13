.PHONY: all clean
.RECIPEPREFIX +=

CC = gcc
CFLAGS = -O2 -Wall -Wextra -g
RM = rm -f

SRCS = Problem001.c Problem002.c
BINS = $(SRCS:.c=)

all: problem001 problem002

clean:
  $(RM) $(BINS)

problem001:
    $(CC) $(CFLAGS) -o Problem001.c Problem001

problem002:
    $(CC) $(CFLAGS) -o Problem002.c Problem002