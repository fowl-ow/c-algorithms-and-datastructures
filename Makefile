CC = clang
CFLAGS = -Wall -O2
TARGET = main
SOURCES = main.c datastructures/src/stack.c

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)
