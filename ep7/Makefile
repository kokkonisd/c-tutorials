CFLAGS = -Wall -g
SOURCES = $(wildcard *.c)
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))
TARGET = ep7


all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) $< -c

%.c: %.h

clean:
	rm -rf $(TARGET) *.dSYM/ *.o


.PHONY: all clean
