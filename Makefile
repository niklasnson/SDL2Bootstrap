SRC_DIR = src
OBJS = $(SRC_DIR)/*.cpp
OUTPUT_DIR = release
COMPILE_FLAGS = -std=c++11 -Wall -Wextra -g
LINKER_FLAGS = -lSDL2 -lSDL2_image -lSDL2_mixer
OBJ_NAME = application

all : $(OBJS)
				mkdir -p $(OUTPUT_DIR)
			  g++ $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) \
		            -o $(OUTPUT_DIR)/$(OBJ_NAME)

.PHONY: clean
clean:
	rm -fr $(OUTPUT_DIR)


.PHONY: run
run:
	cd $(OUTPUT_DIR); ./$(OBJ_NAME)	