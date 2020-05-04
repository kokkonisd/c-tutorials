CFLAGS = -Wall -g -O0
SOURCES = $(wildcard *.c)
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))
TARGET = ep13


all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) $< -c

%.c: %.h

clean:
	rm -rf $(TARGET) *.dSYM/ *.o


.PHONY: all clean
