CC = gcc
CFLAGS = -O3 -Wall -Wpedantic -std=c17
SRC = main.c cons/buffer.c cons/file.c cons/error.c
OBJ = $(SRC:.c=.o)
TARGET = tnmg

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJ)
