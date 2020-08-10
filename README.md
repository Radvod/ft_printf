# 42 ft_printf

![Score](score.png)

### Challenge
To recode libc's `printf`.  

ft_printf must be formatted in the same manor as libc's `printf`. For example:
```c
ft_printf("Welcome to %d, %s!\n", 42, "cadet");
printf("Welcome to %d, %s!\n", 42, "cadet");
```
Should give back:
```console
Welcome to 42, cadet!
Welcome to 42, cadet!
```

### Using the project
To compile, run `make`. This will compile **libftprintf.a**. To use, include `ft_printf.h` (located inside includes directory) and use just like `printf`:
```c
#include "ft_printf.h"

int				main(void)
{
	ft_printf("%s, %s!\n", "Hello", "world");
	return (0);
}
```
Then compile with a program:
```console
gcc -Wall -Werror -Wextra main.c libftprintf.a -o run; ./run
```
Special thanks to my partner mcathery
