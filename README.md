# Complex Linux Project

This project demonstrates working with static and shared libraries in C and contains three separate applications:

- `calc_app` — a console calculator that uses the **static library** `libcalc.a`
- `upper` — a text formatter that converts text to uppercase using the  **shared library** `libconvert.so`
- `low` — a text formatter that converts text to lowercase using the **shared library** `libconvert.so`

The project uses the **Makefile** for compiling and linking all components.

## Project structure
```
complex_linux_project/
│
├── calc/                 # Функції калькулятора (статична бібліотека)
│   ├── add.c
│   ├── sub.c
│   ├── mul.c
│   ├── div.c
│   ├── fact.c
│   └── sqrt.c
│
├── convert/              # Функції для upper/low (динамічна бібліотека)
│   └── convert.c
│
├── main.c                # Головний застосунок calc_app
├── upper.c               # Програма upper
├── low.c                 # Програма low
├── Makefile              # Система збірки
└── README.md
```

## Libraries

### Statis library`libcalc.a`
Contains math functions used by the **calc_app** application:
- addition
- subtraction
- multiplication
- division
- factorial
- square root

### Shared library `libconvert.so`
Contains functions used by the **upper** and **lower** application:

- `to_upper()` — convert string to uppercase
- `to_lower()` — convert string to lowercase

## Building proccess

Clone the project to a local folder and run the command:

```make```

As result the following application and libraries will be build:
- `libcalc.a` - static library
- `libconvert.so` - shared library
- applications:
  - `calc_app`
  - `upper`
  - `low`

## Runing applications

### Running `calc_app` with static library:

```./calc_app```

### Running `upper` та `low` with the shared library

Before running, set the environment variable:

```export LD_LIBRARY_PATH=. ```

Then run:

```./upper``` or ```./low```

## Installing the shared library system‑wide (without env variable)

To run applications without setting **LD_LIBRARY_PATH**, install the shared library using **ldconfig**.

Copy the library to /usr/local/lib/:
```sudo cp libconvert.so /usr/local/lib/```

Update the linker cache:
```sudo ldconfig```

## Project cleaner

Use the clean command to remove executables and library files:
```sudo make clean```

This command removes executable and library files:
- `.a`
- `.so`
- `calc_app`
- `upper`
- `low`