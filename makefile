strings: problems.c
	gcc -o strings problems.c

run: strings
	./strings

clean:
	rm *~
	rm */*~
