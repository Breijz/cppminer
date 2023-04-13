CXX=g++
OPT=-lraylib -Wall -Wextra -o
IN=src/main.cpp\
   src/control.cpp
OUT=cppcrafter

debug:
	@echo "Debug Version, MAY run slower..."
	${CXX} ${IN} -ggdb -O0 ${OPT} ${OUT}

release:
	@echo "Release Version, SHOULD NOT run slower than debug..."
	${CXX} ${IN} ${OPT} ${OUT}
