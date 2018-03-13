test.exe : mesure.o
	gcc $^ -o $@

mesure.o : mesure.c mesure.h define.h
		gcc -c $< -o $@

clean :
	rm -f *.o test.exe

all : clean test.exe
