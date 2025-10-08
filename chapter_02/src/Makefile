# ───────────────────────────────────────────────
# Allegro 4.4.2 Makefile (MinGW / MSYS2)
# ───────────────────────────────────────────────

# Compiler and tools
CC      := gcc
RM      := del /f
EXE     := main.exe

# Project structure
SRC     := main.c
OBJ     := $(SRC:.c=.o)

# Paths (adjust if needed)
INCLUDE := H:/msys64/mingw32/include
LIBDIR  := H:/msys64/mingw32/lib
LIBS    := $(LIBDIR)/liballegro-4.4.2-monolith-mt.a

# Flags
CFLAGS  := -I"$(INCLUDE)" -Wall -Wextra -pedantic
LDFLAGS := -static -mwindows

# ───────────────────────────────────────────────
# Build rules
# ───────────────────────────────────────────────

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE) $(LIBS) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-$(RM) $(OBJ) $(EXE)

# ───────────────────────────────────────────────
# Phony targets
# ───────────────────────────────────────────────
.PHONY: clean

