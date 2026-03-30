CC = gcc
AR = ar
CFLAGS = -Wall -g -Iinc

BUILD_DIR = build
OBJ_DIR = $(BUILD_DIR)/obj
LIB_DIR = $(BUILD_DIR)/lib

TARGET = $(BUILD_DIR)/app
STATIC_LIB = $(LIB_DIR)/libmath.a

APP_SRC = src/main.c
APP_OBJ = $(OBJ_DIR)/main.o

LIB_SRC = $(wildcard lib/math/*.c)
LIB_OBJ = $(patsubst lib/math/%.c,$(OBJ_DIR)/%.o,$(LIB_SRC))

$(TARGET): $(APP_OBJ) $(STATIC_LIB)
	$(CC) $(APP_OBJ) $(STATIC_LIB) -o $@

$(STATIC_LIB): $(LIB_OBJ) | $(LIB_DIR)
	$(AR) rcs $@ $^

$(OBJ_DIR)/%.o: lib/math/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/main.o: $(APP_SRC) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(LIB_DIR):
	mkdir -p $(LIB_DIR)

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)