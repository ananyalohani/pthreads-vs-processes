compile1:
	gcc Q1_part1.c -o part1

run1: compile1
	./part1

compile2:
	gcc -pthread Q1_part2.c -o part2

run2: compile2
	./part2

