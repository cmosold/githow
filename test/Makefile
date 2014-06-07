all:
	gcc -o test main.c
	gcc -o libtest.so -shared -fPIC test.c

clean:
	rm libtest.so
	rm test
