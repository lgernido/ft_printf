## :desktop_computer: General Information

This is the second project i realised at 42.
The goal is recreate the printf function that is included in the *<stdio.h>* library. Its role is to format and print data.  

### Formats to handle

- %c --> a single character
- %s --> a string
- %p --> the void * pointer format
- %d --> a decimal number (base 10)
- %i --> an integger (base 10)
- %u --> an unsigned decimal number (base 10)
- %x --> an hexadecimal number (base 16) in lowercase format
- %X --> an hexadecimal number (base 16) in uppercase format
- %% --> a percent sign

### New concept : Variadic functions 

Variadic functions are functions with a variable number of arguments, symbolized by "..." in its signature.

Here is ft_printf signature : 
```
int	ft_printf(const char *format, ...);
```
When ft_printf is called, we don't know how many elements a person wants to print hence the need for a variadic function. 

In order to build this function we can use the variable **va_list** and the macros **va_start**, **va_arg** and **va_end** included in the *<stdarg.h>* library.

**va_list** is an object type. It's a list of all the arguments passed to the ft_printf function.

Before moving through this argument list, we initialize it using **va_start**. 

Then, to go through the list, we use the **va_arg** function that advances to the next argument each time it is called. 

Lastly, in order to clean the object that we initialized previously, we use **va_end**. 


## :pushpin: File Organisation

The files are organized as follows :

- ft_easyprint.c : Handles the easier formats such as single characters, strings, integers, decimals and the percent sign.
- ft_printhex.c : Handles the hexadecimals format
- ft_printfptr.c : Handles the pointer format
- ft_printui.c : Handles the unsigned integer format
- ft_printf.c : Contains the ft_printf function. Goes through the arguments and sends them to the correct format handling functions in the other files.

## :battery: Example Use

Let's consider the following main function :

```
int main(void)
{
  char c = a;
  int nb = 42;
  ft_printf("character: %c\n integer: %i\n, hexadecimal: %x", c, nb, nb);
  return (0)
}
```

Here, we go through the first argument and print everyhing that is between the double quotes. When the *%* is met we look at the next character to identify what is the format of the variable we need to print. 
The first time, we encounter **"%c"** which is the identifier for a single character that will be replaced by the variable *c*, the character **a** using the **printc** function. 
The second time, same process goes for **"%i""** except this time we will print the integer defined by the variable *nb*, the integer **42** using the **ft_printnb** function. 
Lastly, for **"%x"** the integer 42 will be replaced by its hexadecimal format which is **2a** using the **ft_printhex** function. 

If no percent sign is met, the function only prints whats between double quotes. 

The function always returns the number of characters printed. 

In this exemple the output would have been : 

```
character: c
integer: 42
hexadecimal: 2a
```

