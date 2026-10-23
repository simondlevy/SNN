main: main.c
	gcc -O3 -o main main.c strlcpy.c -lm

run: main
	./main

clean:
	rm -rf main

edit:
	vim main.c
