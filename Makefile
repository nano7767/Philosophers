CC = gcc
CFLAGS = -Wall -Wextra -pthread
TARGET = philosopher

SRC = main.c init.c actions.c utils.c
OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)