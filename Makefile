CC := gcc
CFLAGS := -Wall -g

# Define the source files for each project
FOOTBALL_SRC := football.c football_main.c
TEMPERATURE_SRC := temperature.c temperature_main.c

# Output executable names
FOOTBALL_EXE := football.exe
TEMPERATURE_EXE := temperature.exe

# Compilation rules for football.exe
$(FOOTBALL_EXE): $(FOOTBALL_SRC) football.h
	$(CC) $(CFLAGS) $(FOOTBALL_SRC) -o $(FOOTBALL_EXE)

# Compilation rules for temperature.exe
$(TEMPERATURE_EXE): $(TEMPERATURE_SRC) temperature.h
	$(CC) $(CFLAGS) $(TEMPERATURE_SRC) -o $(TEMPERATURE_EXE)

# Rule to clean the build artifacts
clean:
	rm -f $(FOOTBALL_EXE) $(TEMPERATURE_EXE)

# Phony target to avoid conflicts with file names
.PHONY: clean
