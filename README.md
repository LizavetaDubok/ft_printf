*This project has been created as part of the 42 curriculum by ldubok.*

# Description

## ft_printf

ft_printf is a project that recreates the essential functionality of the standard C printf() function.

The goal of this project is to implement a custom ft_printf() function while gaining a better understanding of variadic functions, format parsing, type conversions, and output handling in C.

| Conversion | Description                                    |
| ---------- | ---------------------------------------------- |
| `%c`       | Prints a single character                      |
| `%s`       | Prints a string                                |
| `%p`       | Prints a pointer address in hexadecimal format |
| `%d`       | Prints a decimal (base 10) number              |
| `%i`       | Prints an integer in base 10                   |
| `%u`       | Prints an unsigned decimal number              |
| `%x`       | Prints a hexadecimal number in lowercase       |
| `%X`       | Prints a hexadecimal number in uppercase       |
| `%%`       | Prints a percent sign                          |

## Testing

A `main.c` file can be used to test every supported conversion and compare the output and return values of `ft_printf()` with the original `printf()`.

### Test Program

```cpp
#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	printf("========================================\n");
	printf("              %%c TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("[%c]\n", 'A');
	printf("printf    : ");
	printf("[%c]\n\n", 'A');

	printf("========================================\n");
	printf("              %%s TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("[%s]\n", "Hello, 42!");
	printf("printf    : ");
	printf("[%s]\n\n", "Hello, 42!");

	printf("========================================\n");
	printf("              %%p TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("[%p]\n", (void *)main);
	printf("printf    : ");
	printf("[%p]\n\n", (void *)main);

	printf("========================================\n");
	printf("              %%d TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("[%d]\n", 42);
	printf("printf    : ");
	printf("[%d]\n", 42);

	printf("ft_printf : ");
	ft_printf("[%d]\n", -42);
	printf("printf    : ");
	printf("[%d]\n", -42);

	printf("ft_printf : ");
	ft_printf("[%d]\n", INT_MIN);
	printf("printf    : ");
	printf("[%d]\n\n", INT_MIN);

	printf("========================================\n");
	printf("              %%i TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("[%i]\n", 12345);
	printf("printf    : ");
	printf("[%i]\n\n", 12345);

	printf("========================================\n");
	printf("              %%u TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("[%u]\n", 4294967295U);
	printf("printf    : ");
	printf("[%u]\n\n", 4294967295U);

	printf("========================================\n");
	printf("              %%x TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("[%x]\n", 255);
	printf("printf    : ");
	printf("[%x]\n\n", 255);

	printf("========================================\n");
	printf("              %%X TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("[%X]\n", 255);
	printf("printf    : ");
	printf("[%X]\n\n", 255);

	printf("========================================\n");
	printf("              %%%% TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("[100%% complete]\n");
	printf("printf    : ");
	printf("[100%% complete]\n\n");

	printf("========================================\n");
	printf("            MIXED TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("%c | %s | %p | %d | %i | %u | %x | %X | %%\n",
		'A', "test", (void *)main, -42, 42, 42U, 255, 255);
	printf("printf    : ");
	printf("%c | %s | %p | %d | %i | %u | %x | %X | %%\n",
		'A', "test", (void *)main, -42, 42, 42U, 255, 255);

	printf("\n========================================\n");
	printf("             ZERO TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("%d | %i | %u | %x | %X\n", 0, 0, 0U, 0, 0);
	printf("printf    : ");
	printf("%d | %i | %u | %x | %X\n", 0, 0, 0U, 0, 0);

	printf("\n========================================\n");
	printf("             NULL TEST\n");
	printf("========================================\n");
	printf("ft_printf : ");
	ft_printf("[%s]\n", (char *)NULL);
	printf("printf    : ");
	printf("[%s]\n", (char *)NULL);

	return (0);
}
```

### Compile and Run

Compile the test program with your library:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o test
```

# Resources

- The C Programming Language by Brian Kernighan and Dennis Ritchie.
- C standard library reference:
  https://en.cppreference.com/w/c
- my peers
- 42 School curriculum materials.

## AI Usage

AI tools were used as a learning assistant during this project.

AI was used for:
- Understanding and explaining mistakes or error messages.
- Providing guidance to help identify possible issues.
- Generating some parts of the description section of this readme file

AI was not used to automatically generate the complete project. All functions were implemented, tested, and adapted manually according to the 42 requirements and coding standards.

## Author
ldubok - 42 Warsaw
