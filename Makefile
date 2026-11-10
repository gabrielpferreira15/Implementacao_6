CC = gcc
CFLAGS = -Wall -Wextra -std=gnu17

TARGET = banker
OBJ = main.o banker.o

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

main.o: main.c banker.h
	$(CC) $(CFLAGS) -c main.c

banker.o: banker.c banker.h
	$(CC) $(CFLAGS) -c banker.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: run clean