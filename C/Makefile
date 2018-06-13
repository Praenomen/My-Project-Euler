.PHONY: all clean
.RECIPEPREFIX +=

CC = gcc
CFLAGS = -O2 -Wall -Wextra -g
RM = rm -f

SRCS = Problem001.c
BINS = $(SRCS:.c=)

all:
  $(CC) $(CFLAGS) -o $(BINS) $(SRCS)

clean:
  $(RM) $(BINS)
