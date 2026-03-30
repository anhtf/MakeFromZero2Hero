CC = gcc
CFLAGS = -Wall -g -Iinc

SRC_DIRS = src drivers lib
BUILD_DIR = build

SRC = $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))

OBJ = $(patsubst %.c,$(BUILD_DIR)/%.o,$(SRC))

TARGET = $(BUILD_DIR)/app

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(BUILD_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)