# Target files
all: calc_app upper low

# Static library block
libcalc.a: calc/add.c calc/sub.c calc/mul.c calc/div.c calc/fact.c calc/sqrt.c
    # Compile all .c files in the calc/ folder to .o files
	gcc -c calc/*.c

    # Build static lib from .o files
	ar rcs libcalc.a *.o

    # Delete .o files
	rm *.o

# Calculate application block
calc_app: main.c libcalc.a
    # Linked main.c with libcalc.a (-lcalc) lib and math lib (-lm)
	gcc main.c -L. -lcalc -lm -o calc_app

# Shared library block
libconvert.so: convert/convert.o
    # Create the shared lib
	gcc -shared convert/convert.o -o libconvert.so

convert/convert.o: convert/convert.c
    # Compilation object file
	gcc -Wall -Werror -Wextra -fPIC -c convert/convert.c -o convert/convert.o

upper: upper.c libconvert.so
    # Linked upper application
	gcc upper.c -L. -lconvert -o upper

low: low.c libconvert.so
    # Linked low application
	gcc low.c -L. -lconvert -o low

# clean all genereted files
clean:
	rm -f *.o *.a *.so calc_app upper low convert/convert.o
