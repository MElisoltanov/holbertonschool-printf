
# Custom printf.

##  <span id="description">Description</span>

This project use custom version of the `printf` function.

- The conversion specifier:

The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following conversion specifiers:

d: decimal number to be provided for printing.

i: integer to be provided for printing

c: character to be provided for printing

s: The const char * argument is expected to be a pointer to an array of character type (pointer to a string).

%: A per cent sign '%' is written. No argument is converted.


- Return value:

Return the number of characters printed.
 

##  <span id="files-description">File description</span>

| **FILE**            | **DESCRIPTION**                                   |
| :-----------------: | ------------------------------------------------- |
| `_printf.c`       | Produces output according to a format.|
| `_putchar.c`   |   writes the character c to stdout.|
| `get_function.c`     | Selects the correct function to handle a format specifier.|
| `main.h`     | Have the Prototypes used for the code.                        |
| `write_char.c`     | Prints a single character. |
| `write_number.c`     | Prints digits of a number recursively.|
| `write_string.c`     | Prints a string. |
| `README.md`       | The README file with the explanation of the program.|

Limitations
- Does not handle flag characters, field width, precision, or length modifiers. (Requirement of the project).

## <span id="installation">Installation</span>

1. Clone this repository:
  - Open your preferred Terminal.
  - Navigate to the directory where you want to clone the repository.
  - Run the following command:

```bash
git clone <https://github.com/MElisoltanov/holbertonschool-printf.git>
```

2. Open the repository you've just cloned.



##  <span id="Usage">Usage</span>

Some examples of the code.
```ruby
_printf("Negative:[%d]\n", -762534);
Output:   Negative:[-762534]
```
 

```ruby
_printf("Character:[%c]\n", 'H');
Output:   Character:[H] ``
```


## <span id="License">License</span>
This project is licensed under the Holberton School Software Engineering Program.


## <span id="authors">Authors</span>

**Daniel Ramirez**.
 
Holberton School, Cohort 26.

**Moussa Elisoltanov**.
 
Holberton School, Cohort 26.
